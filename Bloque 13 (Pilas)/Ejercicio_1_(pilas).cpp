/*Ejercicio 1. Hacer un programa para agregar números enteros a una pila, hasta que el usuario decida, después mostrar todos los números introducidos en la pila.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//Estructuras

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

//Prototipo de Funciones

void agregar(Nodo*&, int);
void eliminar(Nodo *&, int &);



int main(){
	Nodo *pila = NULL;
	int dato;
	char opc;
	
	do{
		cout<<"Digite un Número: ";cin>>dato;
		agregar(pila,dato);
		
		cout<<"\nDesea Agregar más Elementos? (s/n): "; cin>>opc;
	}while((opc == 'S')||(opc == 's'));
	
	cout<<"\nSacando Elementos"<<endl;
	
	while(pila != NULL){
		eliminar(pila,dato);
		
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}

	getch();
	return 0;
}
void agregar(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\t\nElemento Agregado";
}
void eliminar(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
