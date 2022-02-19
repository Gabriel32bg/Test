/*Ejercicio 4. Hacer un programa en C++. Para guardar números telefónicos que muestre un menú con las siguientes opciones:
							1. Crear (Nombre, Apellido, Teléfono).
							2. Agregar más Contactos (Nombre, Apellido, Teléfono).
							3. Visualizar los Contactos Existentes.
							4. Salir.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

//Estructuras.
struct Agenda{
	string nombre, apellido, telef;
}contacto;

//Prototipo de Funciones.
void menu();
void crear();
void agregar();
void mostrar();

//Variables Globales.
char rpt;
int opc;

int main(){
	menu();

	getch();
	return 0;
}
void menu(){
	cout<<"\tBienvenido al Menú Principal\n";
	
	do{
		fflush(stdin);
		cout<<"1. Crear Agenda Telefónica"<<endl;
		cout<<"2. Agregar Nuevos Contactos"<<endl;
		cout<<"3. Visualizar Contactos Guardados"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"\nDigite una Opción: ";cin>>opc;
		
		switch(opc){
			case 1: crear();
					system("pause");
					break;
			case 2: agregar();
					system("pause");
					break;
			case 3: mostrar();
					system("pause");
					break;
			case 4: cout<<"\nGracias Por Usar El Programa HASTA LUEGO"<<endl;
					system("pause");
					break;
		}
		system("cls");
	}while(opc != 4);
}

void crear(){
	ofstream files;
	
	files.open("AgendaTelefonica.txt", ios::out);
	
	if(files.fail()){
		cout<<"Fatal erro 0x00001";
		exit(1);
	}
	
	files<<"\tAgenda Telefónica\n\n";
	
	do{
		fflush(stdin);
		cout<<"\nNombre: ";getline(cin, contacto.nombre);
		cout<<"\nApellido: ";getline(cin, contacto.apellido);
		cout<<"\nTeléfono: ";getline(cin, contacto.telef);
		
		files<<"Nombre: "<<contacto.nombre<<endl;
		files<<"Apellido: "<<contacto.apellido<<endl;
		files<<"Teléfono: "<<contacto.telef<<endl;
		files<<"\n";
		cout<<"\nDesea Agregar mas Contactos? (s/n): ";cin>>rpt;
		system("pause");
		system("cls");
	}while(rpt == 'S' || rpt == 's');
	
	files.close();
}
void agregar(){
	ofstream files;
	
	files.open("AgendaTelefonica.txt", ios::app);
	
	if(files.fail()){
		cout<<"Fatal erro 0x00002";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"\nNombre: ";getline(cin, contacto.nombre);
		cout<<"\nApellido: ";getline(cin, contacto.apellido);
		cout<<"\nTeléfono: ";getline(cin, contacto.telef);
		
		files<<"Nombre: "<<contacto.nombre<<endl;
		files<<"Apellido: "<<contacto.apellido<<endl;
		files<<"Teléfono: "<<contacto.telef<<endl;
		files<<"\n";
		cout<<"\nDesea Agregar más Contactos? (s/n): ";cin>>rpt;
		system("pause");
		system("cls");
	}while(rpt == 'S' || rpt == 's');
	
	files.close();
}
void mostrar(){
	ifstream files;
	string text;
	
	files.open("AgendaTelefonica.txt",ios::in);
	
	if(files.fail()){
		cout<<"Fatal erro 0x00003";
		exit(1);
	}
	
	while(!files.eof()){
		getline(files, text);
		cout<<text<<endl;
	}
	
	files.close();
	
}