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
	Nodo *padre;
};

//Prototipos de Funciones.
void menuDatos();
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

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
		cout<<"7. Eliminar Elemento"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"\nDigite su Opción: ";cin>>opc;
		
		switch(opc){
			case 1: cout<<"\nDigite un Número: ";cin>>datos;
					insertarNodo(arbol,datos, NULL);
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
					cout<<"\n\n";
					system("pause");
					break;
			case 7: cout<<"\nDigite el Elemento a Eliminar: ";cin>>datos;
					eliminar(arbol,datos);
					system("pause");
					break;
			case 8: cout<<"\nFin del Programa Hasta Luego"<<endl;
					system("pause");
					break;
		}
		system("cls");
	}while(opc != 8);
}

//Función para Crear el Nodo Raíz.
Nodo *crearNodo(int n, Nodo *padre){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}

//Funciones.
//Insertar Nodo
void insertarNodo(Nodo *&arbol, int n, Nodo *padre){
	if(arbol == NULL){
		Nodo *nuevo_nodo = crearNodo(n, padre);
		arbol = nuevo_nodo;
	}
	else{
		int valorRaiz = arbol->dato;
		//Valores menores a la raiz van al puntero izquierdo, y valores mayores a la raiz van al puntero derecho.
		if(n < valorRaiz){
			insertarNodo(arbol->izq, n, arbol);
		}
		else{
			insertarNodo(arbol->der, n, arbol);
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
//Funcion para Eliminar Nodo del Arbol.
void eliminar(Nodo *arbol, int n){
	if(arbol == NULL){
		return;
	}
	else if(n < arbol->dato){
		eliminar(arbol->izq, n);
	}
	else if(n > arbol->dato){
		eliminar(arbol->der, n);
	}
	else{
		eliminarNodo(arbol);
	}
}
//Funcion *minimo().
Nodo *minimo(Nodo *arbol){
	if(arbol == NULL){
		return NULL;
	}
	else if(arbol->izq){
		return minimo(arbol->izq);
	}
	else{
		return arbol;
	}
}
//Funcion reemplazar().
void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
	if(arbol->padre){
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato){
			arbol->padre->der = nuevoNodo;
		}
	}
	if(nuevoNodo){
		nuevoNodo->padre = arbol->padre; 
	}
}
//Funcion destruirNodo().
void destruirNodo(Nodo *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	delete nodo;
}
//Funcion eliminarNodo().
void eliminarNodo(Nodo *nodoEliminar){
	if(nodoEliminar->izq && nodoEliminar->der){
		Nodo *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
	}
	else if(nodoEliminar->izq){
		reemplazar(nodoEliminar, nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}
	else if(nodoEliminar->der){
		reemplazar(nodoEliminar, nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}
	else{
		reemplazar(nodoEliminar, NULL);
		destruirNodo(nodoEliminar);
	}	
}
