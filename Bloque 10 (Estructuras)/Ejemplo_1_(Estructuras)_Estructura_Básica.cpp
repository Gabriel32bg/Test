/*Estructuras Básicas en C++.*/

#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
	char nombre['#'];
	int edad;
}persona1;

int main(){
	cout<<"Digite el 1er Nombre: ";cin.getline(persona1.nombre, '#', '\n');
	cout<<"Digite la 1era Edad: ";cin>>persona1.edad;

	cout<<"\nImprimiendo Datos\n"<<endl;
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;


	getch();
	return 0;
}
