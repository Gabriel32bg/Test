/*Pasos de Parámetros de Tipo Estructura.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Estructura

struct Persona{
	char nombre['#'];
	int edad;
}person;

//Prototipo de Funciones

void pedirDatos();
void mostrar(Persona);

int main(){
	pedirDatos();
	mostrar(person);	

	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite Su Nombre: ";cin.getline(person.nombre,'#','\n');
	cout<<"Digite Su Edad: ";cin>>person.edad;
}
void mostrar(Persona p){
	cout<<"\nNombre: "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
}