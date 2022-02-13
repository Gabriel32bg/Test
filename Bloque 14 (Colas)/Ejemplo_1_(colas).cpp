/*Insertar Elementos en una Cola.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//Estructuras
struct Nodo{
	int dato;
	Nodo *siguiente;	
};

//Prototipos de Funciones
void datos();
void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);

//Variables Globales
Nodo *frente = NULL, *fin = NULL;
int dato; 
char rpt;

int main(){
	datos();

	getch();
	return 0;
}
void datos(){
	cout<<"\tBienvenido al Ejemplo de Colas en C++\n";
	do{
		cout<<"\nDigite un Número: ";cin>>dato;
		insertarCola(frente,fin,dato);
		cout<<"\nDesea Agregar más Elementos a la Cola? (s/n): ";cin>>rpt;
	}while((rpt=='s')||(rpt=='S'));
}
void insertarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	
	cout<<"\nElemento "<<n<<" Agregado Correctamente";
}
bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false;
}
