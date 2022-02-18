/*Ejemplo de Arboles en C++.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//Estructuras.
struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
};

//Prototipos de Funciones.
void menuDatos();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void mostrarArbol(Nodo *, int);

//Variables Globales.
Nodo *arbol = NULL;

int main(){
	menuDatos();
	
	getch();
	return 0;
}
//Función de Menú.
void menuDatos(){
	int datos, opc, count = 0;
	
	do{
		fflush(stdin);
		cout<<"\t.MENÚ:.\n";
		cout<<"1. Insertar."<<endl;
		cout<<"2. Mostrar."<<endl;
		cout<<"3. Salir."<<endl;
		cout<<"\nDigite su Opción: ";cin>>opc;
		
		switch(opc){
			case 1: cout<<"\nDigite un Número: ";cin>>datos;
					insertarNodo(arbol,datos);
					system("pause");
					break;
			case 2: cout<<"\nArbol Completo\n";
					mostrarArbol(arbol,count);
			case 3: cout<<"\nFin del Programa Hasta Luego"<<endl;
					system("pause");
					break;
		}
		system("cls");
	}while(opc != 3);
}

//Función para Crear el Nodo Raíz.
Nodo *crearNodo(int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	
	return nuevo_nodo;
}

//Funciones.
void insertarNodo(Nodo *&arbol, int n){
	if(arbol == NULL){
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
	}
	else{
		int valorRaiz = arbol->dato;
		//Valores menores a la raiz van al puntero izquierdo, y valores mayores a la raiz van al puntero derecho.
		if(n < valorRaiz){
			insertarNodo(arbol->izq, n);
		}
		else{
			insertarNodo(arbol->der, n);
		}
	}
}
void mostrarArbol(Nodo *arbol, int count){
	if(arbol == NULL){
		return;
	}
	else{
		mostrarArbol(arbol->der, count+1);
		for(int i = 0; i < count; i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq, count+1);
	}
}
