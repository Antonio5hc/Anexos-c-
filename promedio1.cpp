
//inclucion de librerias y espacio de nombre estandar
//Herberth Antonio Portillo PC18022
#include<iostream>

// declaracion del espacio de nombre std(estandar)
using namespace std;

// Inicio o cuerpo del programa

main (){
	
// Introduccion de variables del programa	
	float nota[5]; // arreglo 5 datos desimales 
	float suma = 0;
	float promedio;
	
// for para contar las notas y guardarlas en los arreglos
	for (int i=0;i<=4;i++) {
		
		do{ // verificacion de dato en el rango requerido y sobre tipo de dato
		system("cls");
		cout<<"Ingrese la nota: "<<i+1<<endl;
		cin>> nota[i];
		
	} while (nota[i]<0 || nota[i]>10 || cin.fail());
	
	// acumulador
		suma = suma + nota[i];
		
	// si nota > 6 aprobada sino reprobada
		if (nota[i]<6){
			cout<< "nota reprobada"<<endl<<endl;}
						
			else{
				cout<<"Nota aprobada \n\n";
			}

	}
	
	// impresion de resultados
		cout<<"Las notas son: \n";
	
	for (int i=0;i<=4;i++){
		cout << nota[i]<<endl;
	}
	
	// resultado del promedio
	promedio = suma/5;
	cout <<endl;
	
	cout<<"El promedio es de: "<<promedio<<endl;
	
// no retorna valor
	return 0;
	
	// fin programa
}
