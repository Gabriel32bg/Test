/*Quitar Elementos de una Pila.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
//Estructuras.
struct Nodo{
	int dato;
	Nodo *siguiente;	
};

//Prototipo de Funciones.
void agregarPila(Nodo *&, int);
void dato();
void eliminarPila(Nodo *&, int &);

//Variables Globales.
Nodo *pila = NULL;
int num;
char opc;

int main(){
	dato();
	cout<<"\nEliminando datos de la Pila\n";
	while(pila != NULL){
		eliminarPila(pila,num);
		if(pila != NULL){
			cout<<num<<", "<<endl;
		}
		else{
			cout<<num<<" ."<<endl;
		}
	}

	getch();
	return 0;
}
void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente;
	pila = nuevo_nodo;
}
void dato(){
	cout<<"\t\tIngreso de Datos a Pilas\n\n";
	do{
		cout<<"Digite un Número: "<<num;
		agregarPila(pila,num);
		cout<<"\t\nDesea Agregar mas Elementos? (s/n): "<<opc;
		
	}while((opc == 'S')|| (opc == 's'));
}
void eliminarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}

