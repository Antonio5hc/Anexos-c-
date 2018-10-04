//Programa hecho por:
//Herberth Antonio Portillo Cruz pc18022

#include <iostream>
#include <stdio.h>

//en este programa vamos a realizar descuentos de productos de una empresa
//segun la cantidad que el cliente compre y el descueto que lleva y el iva del producto

using namespace std;

main () {
	int a,b;
	float c;
	float d;
	float descuento;
	float iva;
	float r;
	float e;
	
//saludo de bienvenida y la pregunta al cliente de cuantos sacos desea comprar
	
	cout<<"Bienvenido a Expo Cafe"<<endl;
	
	cout<<"¿cuantos sacos desea comprar?"<<endl<<endl;
	
	//iniciamos el programa y pedimos que introduzca la cantidad a comprar
	
	cout<<"Introduzca la cantidad de sacos a comprar: ";
	cin>>a;
	
	//declaramos el precio por saco
	
	b = a * 100;
	cout<<b<<endl;
	
	//aplicar descuentos siguiendo las condiciones

		//condicion para el primer descuento
	
		
		 
		
		if (a>100) {
			d = (b * 0.13);
			cout<<d<<endl;
			r = (b + a);
			cout<<r<<endl;
			c = r * 0.10;
			cout<<c<<endl;
			e = r - c;
			
			cout<<"El precio total es: $ "<<e<<endl;
		}	
	//condicion donde no se aplica descuento
	else {
		cout<<"No aplica descuento"<<endl;
			}
	
	//condicion para aplicar descuento
	if (b<200) {
		d = b * 0.13;
		r = (b + d);
		c = b * 0.15;
		e = r - c;
		cout<<"El precio total es: $ "<<e<<endl;
	}
	//condicion para aplicar descuento
	else if (b>250 & b<300) {
		d = b * 0.13;
		r = (b + d);
		c = b * 0.20;
		e = r - c;
		cout<<"El precio total es: $ "<<e<<endl;
		
	}
	//condicion para aplicar descuento
	else if (b>=300) {
		d = b * 0.13;
		r = (b + d);
		c = b * 0.25;
		e = r - c;
		cout<<"El precio total es: $ "<<e<<endl<<endl;
		
	}
	//mensaje al finalizar el programa
	cout<<"Gracias por su compra"<<endl;
	return 0;
}
