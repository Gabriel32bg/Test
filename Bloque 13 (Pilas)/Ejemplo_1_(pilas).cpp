/*Insertar Elementos en una Pila.*/

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

//Variables Globales.
Nodo *pila = NULL;
int ite, num;

int main(){
	dato();
	agregarPila(pila,num);

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
	cout<<"Digite la cantidad de Datos a Agregar: ";cin>>ite;
	for(int i=0;i<ite;i++){
		cout<<"Digite un Valor: ";cin>>num;
		cout<<"\nValor "<<num<<" Agregado con Exito"<<endl;
	}	
}
