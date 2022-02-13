/*Ejercicio 1. Hacer un programa en C++, utilizando colas que contenga el siguiente menú:
					1. Ingresar un Caracter a la Cola.
					2. Mostrar Todos los Elementos de la Cola.
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
void agregar(Nodo *&, Nodo*&, char);
bool cola_vacia(Nodo *);
void eliminar(Nodo *&, Nodo *&, char &);

//Variables Globales

Nodo *frente = NULL, *fin = NULL;
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
				cout<<"Digite un Caracter: ";cin>>dato;
				agregar(frente,fin,dato);
				break;
			case 2:
				while(frente != NULL){
					eliminar(frente,fin,dato);
					if(frente != NULL){
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
void agregar(Nodo *&frente, Nodo *&fin, char n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}else{
		fin->siguiente= nuevo_nodo;
	}
	fin=nuevo_nodo;
}
bool cola_vacia(Nodo *frente){
	return (frente==NULL)? true : false;
}
void eliminar(Nodo *&frente, Nodo *&fin, char &n){
	n = frente->dato;
	Nodo *aux = frente;
	if(frente==fin){
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente->siguiente;
	}
	delete aux;
}