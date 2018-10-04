//Herberth Antonio Portillo Cruz pc18022
#include<iostream>
using namespace std;
	
// definicion de variables globales(matriz)
	int	mat3[5][5];
	
// Declaracion de funciones
	void llenarMat();
	void imprimirMat();
	void limpiar();
	
// Definicion de funcion #1
	void llenarMat(){
		
// For para llenar los espacio de la matriz con 1 los numeros pares y si la fila con la columna concuerdan
	for (int fila = 0; fila < 5; fila++){
	for (int colum = 0; colum < 5; colum++){
	
	if(fila==colum || fila%2==0 && colum%2==0 || fila%2==1 && colum%2==1){
		mat3[fila][colum] = 0;
	}
	
// si no se cumple el if los espacios se rellenaran de 0
	else{
		mat3[fila][colum]=1;}
	  }	
   }
}

// Definicion funcion 2: Imprimir los resultados
void imprimirMat(){
	limpiar();
	for (int fila= 0; fila<5;fila++){
	for(int colum=0;colum<5;colum++){
			
	cout<<mat3[fila][colum]<<"\t";
	}
		
	cout<<endl;
	}

	
	system("pause");
}

// inicio del programa
int main(){
	
// LLamada a funciones
	llenarMat();
	imprimirMat();
	
// Fin del programa
	return 0;
}

// Funcion 2: limpieza de la consola
void limpiar(){
	system("cls");
}
