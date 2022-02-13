/**Ejercicio 2. Hacer un programa que guarde datos de clientes de un banco, los almacene en cola, y por último muestre los clientes en el orden correcto.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//Estructuras
struct Cliente{
	char nombre['#'];
	int id;
	char tipoCta[2];
	int cta;	
};
struct Nodo{
	Cliente c;
	Nodo *siguiente;
};

//Prototipos de Funciones
void datos(Cliente &);
void agregarCola(Nodo *&, Nodo *&, Cliente);
bool cola_vacia(Nodo *);
void eliminarCola(Nodo *&, Nodo *&, Cliente &);


int main(){
	Nodo *frente = NULL, *fin = NULL;
	char rpt;
	Cliente c;
	cout<<"\t\bBienvenido A Su Sistema Bancario Virtual\n\n";

	do{
		cout<<"\t\nAgregar Cliente"<<endl;
		datos(c);
		agregarCola(frente,fin,c);
		cout<<"\nDesea Agregar más Clientes al Sistema? (s/n): ";cin>>rpt;
		system("cls");
	}while((rpt=='S')||(rpt=='s'));
	
	cout<<"\t\n===========Carga de Datos Efectuada Exitosamente================\n";
	
	cout<<"\t\n===================Clientes Totales====================\n";
	
	while(frente!=NULL){
		eliminarCola(frente,fin,c);
		
		cout<<"Nombre: "<<c.nombre<<endl;
		cout<<"ID: "<<c.id<<endl;
		cout<<"N° CTA: "<<c.cta<<endl;
		cout<<"Tipo: "<<c.tipoCta<<endl;
		cout<<"\n";
	}
	getch();
	return 0;
}
void datos(Cliente &c){
		fflush(stdin);
		cout<<"Digite el Nombre del Cliente: ";cin.getline(c.nombre,'#','\n');
		cout<<"Digite el ID del Cliente: ";cin>>c.id;
		cout<<"Digite el Número de Cuenta del Cliente: ";cin>>c.cta;
		cout<<"Digite el Tipo de Cuenta del Cliente (ct/ca): ";cin>>c.tipoCta;
	
}
void agregarCola(Nodo *&frente, Nodo *&fin, Cliente n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->c = n;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
}
bool cola_vacia(Nodo *frente){
	return (frente==NULL)? true : false;
}
void eliminarCola(Nodo *&frente, Nodo *&fin, Cliente &n){
	n = frente->c;
	Nodo *aux = frente;
	if(frente==fin){
		frente=NULL;
		fin=NULL;
	}else{
		frente = frente->siguiente;
	}
	delete aux;
}