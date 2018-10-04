//Herberth Antonio Portillo Cruz pc18022
#include <iostream> //para poder usar entradas y salidas cout/cin
#include <iomanip>  //para usar la presicion de decimales
#include <windows.h>//para poder usar sus funciones
#include <stdio.h>//para usar sus funciones
#include <stdio.h>


using namespace std;
	void borrar();
	void load();
	void noerror();
	void caljugos(int p);
	void calsodas(int p);
	int main();
	void pause();
	void gotoxy();
	
//funcion para centrar texto utilizando coordenadas	
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 	
	
//Funcion sodas() se utiliza para obtener los insumos de azucar
void calsodas(int p)
{
	//Declaracion de variable azucar se utilizara para la operacion de insumos de azucar 
	int azucar;
	//Declaracion de variable agua se utilizara para la operacion de insumos de agua 
	int agua;
	
	//La variable azucar almacena la operacion de para obtener la cantidad insumos de azucar 
	azucar = p * 800;
	//La variable agua almacena la operacion de para obtener la cantidad insumos de agua 
	agua = p * 500;
	
	//funcion que limpia la pantalla de los textos
	borrar();
	
	//Se imprime el resultado
	cout << "Insumos requeridos para la produccion de sodas "<<"Azucar:"<<azucar<<"g----"<<" Agua:"<<agua<<"ml" << endl;
	cout<<"GRACIAS VUELVA PRONTO"<<endl;

	pause();//para que el resultado no se cierre mientras no se presione una tecla
	

	main();//funcion para que el usuario regrese al menu
	
	
}	

void caljugos(int p)
//Funcion jugos() se utiliza para obtener los insumos de azucar
{
	//Declaracion de variable azucar se utilizara para la operacion de insumos de azucar 
	int azucar;
	//Declaracion de variable agua se utilizara para la operacion de insumos de agua 
	int agua;
	
	//La variable azucar almacena la operacion de para obtener la cantidad insumos de azucar 
	azucar = p * 700;
	//La variable agua almacena la operacion de para obtener la cantidad insumos de agua 
	agua = p * 600;
	
	//funcion que limpia la pantalla de los textos
	borrar();
	
	//Se imprime el resultado
	cout << "Ingredientes necesarios para la produccion de jugos." << endl;

	cout<<"Los ingredientes requeridos son "<<"Agua : "<<"Azucar:"<<azucar<<"g----"<<" Agua:"<<agua<<"ml" << endl;
	
	cout<<"\n                                                  GRACIAS VUELVA PRONTO"<<endl;

	pause();//para que el resultado no se cierre mientras no se presione una tecla
	
	main();//funcion para que el usuario regrese al menu

	
}
	
//funcion que evitara que el codigo presente errores al ingresar caracteres no validos
void noerror()
{
		//Ciclo while paraevitar datos incorrectos
		while(cin.fail()){
		
		//Limpia el buffer de los datos ingresados
		cin.clear();
		
		//Ignora los primeros 1000 caracteres o en este caso los numeros
		cin.ignore(1000,'\n');
		
		}
}	
	
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
	
//Cuerpo del programa
int main() 
{
	//Añade color a las letras y el fondo de la consola
	system("color 5C");
	int jugos;
	int sodas;
	
	//funcion que limpia la pantalla de los textos
	borrar();
	
	//Declaracion de la variable produccion almacenara la produccion diaria
	int produccion;
	//Declaracion de la variable opcion almacenara la opcion a elegir
	int opcion;
	//Variable cargar servira como contador
	int load = 1;
	
	//ciclo do-while para evitar numeros negativos o el cero
	do {
		
		//funcion que limpia la pantalla de los textos
		borrar();
		
		//Se imprimen las opciones	
		cout << "Opciones" << endl;
		cout << "1.Produccion diaria de Jugos" << endl;
		cout << "2.Produccion diaria de Sodas" << endl;
		cout << "3.Salir" << endl;
		
		//Imprime texto
		cout << "Ingrese una opcion: ";
		
		//Se ingresa la opcion
		cin >> opcion;
		
		//Funcion que se utiliza para evitar errores de datos
		noerror();
	
	} while(opcion <= 0);
	
	gotoxy(170,5); 
	cout << "                                              CARGANDO PLEASE WAIT" << endl;
	
	//ciclo while para generar un tiempo de carga en la interfaz
	do {
		//Funcion Sleep para permite el reposo de una funcion por un periodo de tiempo
		Sleep(1100);
	
		cout << "                             ---- ---- ";  
		
		//Variable carga se utiliza como contador
		load++;
	
	} while (load < 3);
	
	//Sentencia swicth para evaluar condiciones en le menu
	switch(opcion)
	{
		//case 1 se evualara en caso de cumplirse la condicion se ingresara aqui
		case 1:
			
			//ciclo do-while para evitar numeros negativos o el cero
			do {
				//funcion que limpia la pantalla de los textos
				borrar();
				
				//Imprime txeto
				cout << "Ingrese la produccion de jugos: ";
				
				//Se ingresa la produccion
				cin >> produccion;
		
			} while(produccion <= 0);
		
			//El caracter'\a' nos permite generar un sonido de campanilla
			cout << '\a';
			
			///Se utiliza la funcion jugos() para calcular los insumos a utilizar para la produccion
			caljugos(produccion);
			
			//Para evitar que se cierre la pantalla despues de haber realizados las acciones
			system("PAUSE");
			
			//Se utiliza para saltarse las demas condiciones
			break;
		
		//case 2 se evualara en caso de cumplirse la condicion se ingresara aqui
		case 2:	
			
			//ciclo do-while para evitar numeros negativos o el cero
			do {
				//funcion que limpia la pantalla de los textos
				borrar();
				
				//Imprime txeto
				cout << "Ingrese la produccion de sodas: ";
				
				//Se ingresa la produccion
				cin >> produccion;
				
				//Funcion que se utiliza para evitar errores de datos
				noerror();
			
			} while(produccion <= 0);
			
			//El caracter'\a' nos permite generar un sonido de windows
			cout << '\a';
			
			//funcion donde se calculara el total de ingredientes a usar
			calsodas(produccion);
			
		
			
			//Se utiliza para saltarse las demas condiciones	
			break;
		
		//Si se ingresa la opcion 3 se ingresara aqui
		default:
			//funcion que limpia la interfaz		
			borrar();
			
			//Se imprime texto
			cout << "                                                   GRACIAS POR PREFERIRNOS" << endl;
			
				
			
			//Se utiliza para saltarse las demas condiciones o cerrar un ciclo
			break;			
			
	}
	
}

   
void pause(){
	system ("pause");
} 
 

