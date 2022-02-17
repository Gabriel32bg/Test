/*Ejemplo de Listas en C++.*/

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
void insertarLista(Nodo *&, int);

//Variables Globales
Nodo *lista = NULL;
int dato;
char rpt;

int main(){
	do{
		cout<<"\nDigite un Número: ";cin>>dato;
		
		cout<<"\nDesea Insertar más Elementos? (s/n): ";cin>>rpt;
		system("cls");
	}while((rpt == 'S') || (rpt == 's'));
	
	cout<<"\nGracias por usar el Programa Hasta Luego"<<endl;
	
	
	getch();
	return 0;
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
