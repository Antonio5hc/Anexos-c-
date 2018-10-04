//Herberth Antonio Portillo Cruz pc18022
#include <iostream> //para poder usar entradas y salidas cout/cin
#include <iomanip>  //para usar la presicion de decimales
#include <windows.h>//para poder usar sus funciones
#include <stdio.h>


using namespace std;
	void borrar();
	float calMin();
	void load();
	float saldo();
	
	
	//funcion para brindar una interfaz de carga a una operacion
	void load(){
		cout << "Cargando resultados por favor espere..."<<endl;
	cout << "..."<<endl; 
	Sleep (1000);   
    cout << "..."<<endl;
    Sleep (1000);
    cout << "..."<<endl;  
    Sleep (1999);
	}

	//funcion que borra el contenido en la pantalla	
	void borrar(){
		system ("cls");
	}
	
	//funcion principal que se encarga de calcular el monto a cobrar del usuario
	float calMin(){ 
    system("color 3E");// sirve para cambiar el color de la consola y la letra
    
    
    //Variable que almacenara el salario total cuando la venta sea de mas de un millon
    int min;
    float llamada;
    
    
    //Ciclo do while para evitar que el usario ingrese numeros negativos caso contrario se volvera a pedir el datos
    do{
  
  	  cout << "GRACIAS POR USAR MOVITEL"<<endl;
  	  cout << "Por Favor espere..."<<endl;
   	 Sleep (2000);
		cout << "Ingrese numero de minutos hablados: ";
    
   
     cin >> min;
     borrar();
     
     
     while(cin.fail()){
        
        cin.clear();
        
        cin.ignore(1000,'\n');//para evitar errores por introduccion de caracteres y que el codigo los ignore
        
        cout << "El dato ingresado no es correcto" << endl;
        
        cout << "Ingrese numero de minutos hablados ";
        
        cin.get();
        borrar ();
    }
    
    }while(min <=0);
    
    
    if(min > 1 && min<=10){//Condicion que evaluara la variable 
    load ();
    
    llamada=min*0.05;
    
    cout << "Su factura a pagar es de: $"<<fixed<<setprecision(2)<<llamada<<" Dolares"<<endl;//Funcion para mostrar el saldo
    cout << '\a';
    
    
    cin.get();//Para evitar q se cierre la consola y mostrar el resultado
    }
    
    //condicion 2 para determinar saldo a pagar
    else if(min > 10 && min <= 15){
    load();
    //Se imprime la respuesta usando la funcion
    llamada=min*0.08;
   
    cout << "Su factura a pagar es de: $"<<fixed<<setprecision(2)<<llamada<<" Dolares"<<endl;
   
    cout << '\a';
    
    //Para leer lo que impreme al dar la respuesta y no se cierre
    cin.get();
    }
    
   
    //Para reiniciar valores por si no cumple con ninguna variable
    else {
    
    min >15;//funcion para saber saldo a pagar
	
	cout << "Cargando resultados por favor espere..."<<endl;
	cout << "..."<<endl; 
	Sleep (1999);
    llamada=min*0.10;
    cout << "Su factura a pagar es de: $"<<fixed<<setprecision(2)<<llamada<<" Dolares"<<endl;
    cout << '\a';
   
    cin.get();
    }
    
    cin.get();
    return 0;
}
 
 //inicio del programa donde se llama la funcion principal
 int main(){
 	system("color 4E");
	 
 	cout<<"BIENVENIDO"<<endl;
 	
 	
 	system("pause");
 	borrar();
 	
 	calMin();
 	
 	
 
 	
 	
 
 	
 }
