/*Ejercicio 1. Crear una lista que almacene n números enteros y calcule el mayor y el menor de ellos.*/

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
void datos();
void ingresar(Nodo *&, int);
void mostrarDatos(Nodo *);
void mayorMenor(Nodo *);

//Variables Globales.
Nodo *lista = NULL;
int dato;
char rpt;

int main(){
	cout<<"\t\nBienvenido\n\n";
	datos();
	
	getch();
	return 0;
}
void datos(){
	do{
		fflush(stdin);
		cout<<"Digite un Número: ";cin>>dato;
		ingresar(lista, dato);
		cout<<"\nDesea Agregar más Elementos? (S/N): ";cin>>rpt;
		cout<<"\n";
		system("cls");
	}while(rpt == 's' || rpt == 'S');
	
	mostrarDatos(lista);
	
	mayorMenor(lista);
	
}
void ingresar(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){
		lista = nuevo_nodo;
	}
	else{
		aux = lista;
		while(aux->siguiente != NULL){
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo_nodo;
	}
}
void mostrarDatos(Nodo *lista){
	while(lista != NULL){
		cout<<lista->dato<<" -> ";
		lista = lista->siguiente;
	}
}
void mayorMenor(Nodo *lista){
	int mayor = 0, menor = 99999;
	
	while(lista != NULL){
		if(lista->dato > mayor){
			mayor = lista->dato;
		}
		if(lista->dato < menor){
			menor = lista->dato;
		}
		lista = lista->siguiente;
	}
	
	cout<<"\nMayor Elemento de la Lista: "<<mayor<<endl;
	cout<<"Menor Elemento de la Lista: "<<menor<<endl;
}
