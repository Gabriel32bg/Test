/*Eliminar Elementos de una Cola.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Estructuras
struct Nodo{
	char dato;
	Nodo *siguiente;	
};

//Prototipos de Funciones
void datos();
void insertarCola(Nodo *&, Nodo *&, char);
bool cola_vacia(Nodo *);
void eliminarCola(Nodo *&, Nodo *&, char &);

//Variables Globales
Nodo *frente = NULL, *fin = NULL;
char dato; 
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
	
	while(frente != NULL){
		eliminarCola(frente,fin,dato);
		if(frente != NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<".";
		}
	}
}
void insertarCola(Nodo *&frente, Nodo *&fin, char n){
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
void eliminarCola(Nodo *&frente, Nodo *&fin, char &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin == NULL;
	}else{
		frente = frente->siguiente;
	}
	delete aux;
}
