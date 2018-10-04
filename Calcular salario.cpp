//Herbrth Antonio Portillo pc18022
#include <iostream> //para poder usar entradas y salidas cout/cin
#include <iomanip>  //para usar la presicion de decimales
#include <windows.h>
#include <stdio.h>


using namespace std;
//Herberth Antonio Portillo Cruz
int main()
{ 
    system("color 3E");// sirve para cambiar el color de la consola y la letra
    long ventas;//variable tipo flotante que se define por long
    
    //Variable que almacenara el salario total cuando la venta sea de mas de un millon
    float salario;
    
    //Ciclo do while para evitar que el usario ingrese numeros negativos caso contrario se volvera a pedir el datos
    do{
  
    cout << "Gracias por trabajar para nosotros el programa para calcular su salario esta cargando"<<endl;
    cout << "Por Favor espere..."<<endl;
    Sleep (2000);
	cout << "Ingrese su numero de ventas: ";
    
   
    cin >> ventas;
     
     
     while(cin.fail()){
        
        cin.clear();
        
        cin.ignore(1000,'\n');
        
        cout << "El dato ingresado no es correcto" << endl;
        
        cout << "Ingrese su numero de ventas: ";
        
        cin.get();
    }
    
    }while(ventas <=0);
    
    
    if(ventas > 0 && ventas<=500000){//Condicion que evaluara la variable ventas y si cumple la condicion mostrara el salario correspondiente
    cout << "Cargando resultados por favor espere..."<<endl;
	cout << "..."<<endl; 
	Sleep (1000);   
    cout << "..."<<endl;
    Sleep (1000);
    cout << "..."<<endl;  
    Sleep (1999);
	cout << "Su salario es de $80,000.00" << endl;
    cout << '\a';
    
    
    cin.get();//Para evitar q se cierre la consola y mostrar el resultado
    }
    
    //Condicion 3 evaluara la variable ventas y si cumple la condicion mostrara el salario correspondiente
    else if(ventas > 500000 && ventas <= 1000000){
    	cout << "Cargando resultados por favor espere..."<<endl;
	cout << "..."<<endl; 
	Sleep (1000);   
    cout << "..."<<endl;
    Sleep (1000);
    cout << "..."<<endl;  
    Sleep (1999);
    
    //Se imprime la respuesta
    cout << "Tu salario es de $160,000.0$" << endl;
    cout << '\a';
    
    //Para leer lo que impreme al dar la respuesta y no se cierre
    cin.get();
    }
    
    //Condicion 3 evaluara la variable ventas y si cumple la condicion mostrara el salario correspondiente
    else if(ventas > 1000000 && ventas <= 1500000){
    	cout << "Cargando resultados por favor espere..."<<endl;
	cout << "..."<<endl; 
	Sleep (1000);   
    cout << "..."<<endl;
    Sleep (1000);   
    cout << "..."<<endl;
    Sleep (1999);
    
    //Se imprime la respuesta
    cout << "Tu salario es de $320,000.0" << endl;
    cout << '\a';
    
    //Para leer lo que impreme al dar la respuesta y no se cierre
    cin.get();
    }
    
    //Condicion 4 evaluara la variable ventas y si cumple la condicion mostrara el salario correspondiente
    else if(ventas > 1500000 && ventas <= 2500000){
    	cout << "Cargando resultados por favor espere..."<<endl; 
    cout << "..."<<endl;
    Sleep (1000);
    cout << "..."<<endl;
    Sleep (1000);   
    cout << "..."<<endl;
    Sleep (1999);
    //Se imprime la respuesta
    cout << "Tu salario es de $450,000.0" << endl;
    cout << '\a';
    
    //Para leer lo que impreme al dar la respuesta y no se cierre
    cin.get();
    }
  
    //Condicion 5 evaluara la variable ventas y si cumple la condicion mostrara el salario correspondiente
    else if(ventas > 2500000 && ventas <= 4000000){
    	cout << "Cargando resultados por favor espere..."<<endl;
	cout << "..."<<endl; 
	Sleep (1000);   
    cout << "..."<<endl;
    Sleep (1000);
    cout << "..."<<endl;
    Sleep (1999);
     
    //Se imprime la respuesta con el resultado del salario 
    cout << "Tu salario es de $550,000.0" << endl;
    cout << '\a';
    
    //Para mostrar la respuesta sin cerrar el programa
    cin.get();
    }
    
    //Para reiniciar valores por si no cumple con ninguna variable
    else {
    
    salario = ventas * 0.20;//funcion que saca el 20% de las ventas para caacular el salario
    cout << "Cargando resultados por favor espere..."<<endl;
	cout << "..."<<endl; 
	Sleep (1000);   
    cout << "..."<<endl;
    Sleep (1000);
    cout << "..."<<endl;
    Sleep (1000);   
    cout << "..."<<endl;
    Sleep (1999);
    
    //Se muestra el resultado final
    cout << "Su salario es el 20% de sus ventas: " << fixed << setprecision(2) << salario << endl;//funcion setprecision para mostrar datos mas precisos con decimales
    
    cout << '\a';
   
    cin.get();
    }
    
    cin.get();
    return 0;
}
