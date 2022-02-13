/*Ejercicio 2. Hacer un programa en C++, utilizando pilas que contenga el siguiente menu:

							1. Insertar un Caracter a la Pila.
							2. Mostrar Todos los Elementos de la Pila.
							3. Salir.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//Estructuras

struct Nodo{
	char dato;
	Nodo *siguiente;	
};

//Prototipos de Funciones

void datos();
void agregar(Nodo *&, char);
void eliminar(Nodo *&, char &);

//Variables Globales

Nodo *pila = NULL;
char dato;
int opc;
char rps;

int main(){
	datos();


	getch();
	return 0;
}
void datos(){
	cout<<"\t\tBienvenido al Menú de Pilas Interactivo\n\n";
	do{
		cout<<"\n1. Insertar un Caracter a la Pila."<<endl;
		cout<<"2. Mostrar Todos los Elementos de la Pila."<<endl;
		cout<<"3. Salir."<<endl;
		
		cout<<"\nDigite Su Opción: "; cin>>opc;
		cout<<"\n\n";
		switch(opc){
			case 1: 
				cout<<"Digite un Número: ";cin>>dato;
				agregar(pila,dato);
				break;
			case 2:
				while(pila != NULL){
					eliminar(pila,dato);
					if(pila != NULL){
						cout<<dato<<" , ";
					}else{
						cout<<dato<<"."<<endl;
					}
				}
				system("pause");//Permite mostrar los elementos de la pila
				break;
			case 3: 
			cout<<"Gracias Por Usar el Programa."<<endl;
			system("pause");
				break;
		}
		system("cls");//limpiar pantalla
	}while((opc != 3));
}
void agregar(Nodo *&pila, char n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
}
void eliminar(Nodo *&pila, char &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
