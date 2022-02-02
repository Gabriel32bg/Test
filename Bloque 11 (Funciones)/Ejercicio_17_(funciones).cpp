/*Ejercicio 17. Suma de Números Complejos.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Estructura

struct complejo{
	float real, imaginario;
}z1,z2;

//Prototipos de Funciones

void pedirDatos();
complejo suma(complejo, complejo);
void mostrar(complejo);

int main(){
	pedirDatos();
	
	complejo x = suma(z1,z2);
	
	mostrar(x);


	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Primer Número Complejo"<<endl;
	cout<<"Parte Real: ";cin>>z1.real;
	cout<<"Parte Imaginaria: ";cin>>z1.imaginario;
	
	cout<<"\nSegundo Número Complejo"<<endl;
	cout<<"Parte Real: ";cin>>z2.real;
	cout<<"Parte Imaginaria: ";cin>>z2.imaginario;
}
complejo suma(complejo z1, complejo z2){
	z1.real+=z2.real;
	z1.imaginario+=z2.imaginario;
	
	return z1;
}
void mostrar (complejo x){
	cout<<"\nResultado de la Suma de Números Complejos"<<endl;
	cout<<x.real<<", "<<x.imaginario<<endl;
}