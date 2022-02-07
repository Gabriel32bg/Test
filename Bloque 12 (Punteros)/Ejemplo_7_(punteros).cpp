/*Punteros a Estructuras.*/

#include <iostream>
#include <conio.h>

using namespace std;

/*Estructuras*/
struct Persona{
	char nombre['#'];
	int edad;
}persona, *puntero_persona = &persona;

/*Prototipo de Funciones*/
void datos();
void mostrar(Persona *);

int main(){
	datos();
	mostrar(puntero_persona);

	getch();
	return 0;
}

void datos(){
	cout<<"Digite Su Nombre: ";cin.getline(puntero_persona->nombre,'#','\n');
	cout<<"Digite Su Edad: ";cin>>puntero_persona->edad;
}
void mostrar(Persona *puntero_persona){
	cout<<"\nSus Datos son:\n";
	cout<<"\nNombre: "<<puntero_persona->nombre<<endl;
	cout<<"\nEdad: "<<puntero_persona->edad<<endl;
}