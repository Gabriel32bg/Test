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
bool busqueda(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);

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
		cout<<"3. Buscar Elemento"<<endl;
		cout<<"4. Recorrido en PreOrden."<<endl;
		cout<<"5. Recorrido en InOrden"<<endl;
		cout<<"6. Recorrido en PostOrden"<<endl;
		cout<<"7. Salir"<<endl;
		cout<<"\nDigite su Opción: ";cin>>opc;
		
		switch(opc){
			case 1: cout<<"\nDigite un Número: ";cin>>datos;
					insertarNodo(arbol,datos);
					system("pause");
					break;
			case 2: cout<<"\nArbol Completo\n";
					mostrarArbol(arbol,count);
					system("pause");
					break;
			case 3: cout<<"\nDigite el Elemento a Buscar en el Arbol: ";cin>>datos;
					if(busqueda(arbol,datos)== true){
						cout<<"\nElemento "<<datos<<" encontrado";
					}
					else{
						cout<<"\nElemento no encontrado";
					}
					cout<<"\n";
					system("pause");
					break;
			case 4: cout<<"\nRecorrido en PreOrden"<<endl;
					preOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
			case 5: cout<<"\nRecorrido en InOrden"<<endl;
					inOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
			case 6: cout<<"\nRecorrido en PostOrden"<<endl;
					postOrden(arbol);
					system("pause");
					break;
			case 7: cout<<"\nFin del Programa Hasta Luego"<<endl;
					system("pause");
					break;
		}
		system("cls");
	}while(opc != 7);
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
//Insertar Nodo
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
//Mostrar Arbol en Pantalla
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
//Buscar Elemento en el Arbol
bool busqueda(Nodo *arbol, int n){
	if(arbol == NULL){
		return false;
	}
	else if(arbol->dato == n){
		return true;
	}
	else if(n < arbol->dato){
		return busqueda(arbol->izq, n);
	}
	else{
		return busqueda(arbol->der, n);
	}
}
//Recorrido en PreOrden.
void preOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}
	else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}
//Recorrido en InOrden.
void inOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}
	else{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}

}
//Recorrido en PostOrden.
void postOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}
	else{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}
