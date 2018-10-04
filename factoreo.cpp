/* Herberth Antonio Portillo pc18022
inclucion de librerias y espacio de nombre estandar*/
#include<iostream>
#include<windows.h>

// declaracion del espacio de nombre std(estandar)
using namespace std;

// usando una funcion 

int factorial(int n)
{
	int fact = 1;
		for (int i=1;i<=n;i++){
			
			fact = fact * i;
			
		}
	return fact;
}

// Inicio o cuerpo del programa
int main (){

// Introduccion de variables del programa	
int n;
int fact = 1;

	cout <<"Ingrese dato que desee factorear: "<<endl;
	cin>>n;
	cout<<endl;

		
		cout<< "El resultado es: "<<factorial(n)<<endl;
		
		system("pause");
		return EXIT_SUCCESS;
		
	// fin programa
}
