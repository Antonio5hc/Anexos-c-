/*/Herberth Antonio Portillo Cruz pc18022

inclucion de librerias y espacio de nombre estandar*/
#include<iostream>
#include<iostream>

// declaracion del espacio de nombre std(estandar)
using namespace std;

// Inicio o cuerpo del programa

main(){
	
// Introduccion de variables del programa(Matrices)
	int	mat[5][5];
	int	mat2[5][5];
	int	mat3[5][5];
	
//operador for para recorrer todos las filas de la matriz #1
	for (int fila = 0; fila < 5; fila++){

//operador for para recorrer todos las columnas de la matriz #1		
		for (int colum = 0; colum < 5; colum++){
			mat[fila][colum] = 0;
			
// operador if para rellenar la fila y la columna de 0 cuando estas concuerden con el operador for
			if (fila == 4 || colum==2){
			
			mat2[fila][colum] = 0;
			}
			
// si no se cumplen las filas se rellenaran de 1
			else {
			mat2[fila][colum] = 1;
			}
		
			mat2[4][colum] = 0;
			mat3[fila][colum] = mat[fila][colum]+ mat2 [fila][colum];
		}	
}

// operador for para mostrar los resultados
	for (int fila= 0; fila<5;fila++){
		for(int colum=0;colum<5;colum++){
			
			cout<<mat3[fila][colum]<<"\t";
		}
// salto para cada interaccion
		cout<<endl;
	}
	
	system("pause");
	// fin del programa
}
