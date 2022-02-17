/*Ejemplo de Listas en C++*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//Estructuras.
struct Nodo{
	int dato;
	Nodo *siguiente;	
};

//Prototipo de Funciones
void pedirDatos();
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);

//Variables Globales
Nodo *lista = NULL;

int main(){
	cout<<"Bienvenido\n";
	
	pedirDatos();
	
	getch();
	return 0;
}
void pedirDatos(){
	int opc;
	int dato;
	do{
		fflush(stdin);
		cout<<"\n1. Insertar"<<endl;
		cout<<"2. Mostrar"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"\nDigite su Opción: ";cin>>opc;
		
		switch(opc){
			case 1: cout<<"Digite un Número: ";cin>>dato;
					insertarLista(lista, dato);
					cout<<"\n";
					system("pause");
					break;
			case 2: mostrarLista(lista);
					cout<<"\n";
					system("pause");
					break;
		}
		system("cls");
	}while(opc != 3);
	cout<<"\nGracias por usar el Programa Hasta Luego"<<endl;
}
void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	} 
	
	if(lista == NULL){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
	
	cout<<"\t\nElemento "<<n<<" Agregado Exitosamente\n";
}
void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL){
		cout<<actual->dato<<" , ";
		actual = actual->siguiente;
	}
}
