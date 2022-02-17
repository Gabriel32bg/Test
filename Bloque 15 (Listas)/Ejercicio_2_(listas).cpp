/*Ejercicio 2. Crear una lista que almacene n números enteros y calcule la suma y promedio de estos.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//Estructuras.
struct Nodo{
	float dato;
	Nodo *siguiente;
};

//Prototipo de Funciones.
void datos();
void ingresar(Nodo *&, float);
void mostrarDatos(Nodo *);
void operacion(Nodo *);

//Variables Globales.
Nodo *lista = NULL;
float dato, suma = 0, promedio = 0;
char rpt;
int count = 0;

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
	
	operacion(lista);
	
}
void ingresar(Nodo *&lista, float n){
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
void operacion(Nodo *lista){
	while(lista != NULL){
		suma += lista->dato;
		count++;
		lista = lista->siguiente;
	}
	
	promedio = suma/count;
	
	cout<<"\nResutado de la Suma: "<<suma<<endl;
	cout<<"Promedio: "<<promedio<<endl;
}
