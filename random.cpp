
//inclucion de librerias y espacio de nombre estandar
//Herberth Antonio Portillo Cruz Pc18022
#include<iostream>
#include<stdlib.h> // Libreria ramdom
#include<time.h>

// declaracion del espacio de nombre std(estandar)
using namespace std;

// Inicio o cuerpo del programa
int main(){
	
// semilla para desplegar num aleatorios
	srand(time(NULL));

// Introduccion de variables del programa	
	int matriz[3][3];
	int matriz2[3][3];
	int resultado[3][3];
	
// for para llenar los espacios de matriz con mun aleatorios
	for(int i=0;i<=2;i++){
		
		for(int j=0;j<=2;j++){
			
			matriz[i][j] = rand()%101;
		}
	}

// impresion de resultados
	for(int i=0;i<3;i++){
	
	for(int j=0;j<3;j++){
		
	cout<<matriz[i][j]<<"   ";
	}
	cout<<endl;
}

	cout<<endl;
	
// for para llenar los espacios de matriz #2 con mun aleatorios
	for(int i=0;i<=2;i++){
		
		for(int j=0;j<=2;j++){
			
			matriz2[i][j] = rand()%101;
		}
	}
	
// impresion de resultados
	for(int i=0;i<3;i++){
	
	for(int j=0;j<3;j++){
		
	cout<<matriz2[i][j]<<"   ";
	}
	cout<<endl;
}

cout<<endl;
cout<<"RESULTADO"<<endl;
cout<<endl;

// suma de matrices con num aleatorios
	for(int i=0;i<3;i++){
	
	for(int j=0;j<3;j++){
		
	resultado[i][j] = matriz[i][j]+matriz2[i][j];
	cout << resultado[i][j]<<"   ";
	}
	cout<<endl;
}

	return 0;
// fin programa
}
