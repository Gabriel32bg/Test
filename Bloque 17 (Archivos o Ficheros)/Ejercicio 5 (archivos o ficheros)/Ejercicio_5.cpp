/*Ejercicio 5. Crear un archivo binario donde almacenar un registro que contenga las pulsaciones de un atleta en una determinada hora, el programa debe tener
el siguiente menú de opciones:
				1. Comenzar a Digitar las Pulsaciones.
				2. Añadir más Pulsaciones.
				3. Mostrar Pulsaciones Registradas.
				4. Salir.*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

//Estructuras.
struct Registro{
	float hora;
	int pulsaciones;
}pulso;

//Prototipos de Funciones.
void menu();
void crear();
void actualizar();
void mostrar();

int main(){
	menu();


	getch();
	return 0;
}
void menu(){
	int opc;
	
	do{
		fflush(stdin);
		cout<<"\t\t.:Menú:.\n\n";
		
		cout<<"1. Comenzar a Digitar las Pulsaciones."<<endl;
		cout<<"2. Añadir más Pulsaciones."<<endl;
		cout<<"3. Mostrar Pulsaciones Registradas."<<endl;
		cout<<"4. Salir."<<endl;
		
		cout<<"\nDigite su Opción: ";cin>>opc;
		
		switch(opc){
			case 1:	crear();
					system("pause");
					break;
			case 2: actualizar();
					system("pause");
					break;
			case 3: mostrar();
					system("pause");
					break;
			case 4: cout<<"Gracias por Todo HASTA LUEGO"<<endl;
					system("pause");
					break;
		}
		system("cls");
	}while(opc != 4);
}
void crear(){
	ofstream archivoB;
	
	archivoB.open("pulsaciones.dat", ios::out | ios::binary);
	
	if(archivoB.fail()){
		cout<<"Fatal erro 0x00001";
		exit(1);
	}	
	
	Registro pulso;
	
	cout<<"\nDigite la Hora: ";cin>>pulso.hora;
	cout<<"Digite las Pulsaciones: ";cin>>pulso.pulsaciones;
	
	archivoB.write((char *)&pulso, sizeof(Registro));
	
	archivoB.close();
}
void actualizar(){
	ofstream archivoB;
	
	archivoB.open("pulsaciones.dat", ios::app | ios::binary);
	
	if(archivoB.fail()){
		cout<<"Fatal erro 0x00001";
		exit(1);
	}	
	
	Registro pulso;
	
	cout<<"\nDigite la Hora: ";cin>>pulso.hora;
	cout<<"Digite las Pulsaciones: ";cin>>pulso.pulsaciones;
	
	archivoB.write((char *)&pulso, sizeof(Registro));
	
	archivoB.close();
}
void mostrar(){
	ifstream archivoB;
	
	archivoB.open("pulsaciones.dat", ios::in | ios::binary);
	
	if(archivoB.fail()){
		cout<<"Fatal erro 0x00001";
		exit(1);
	}	
	
	Registro pulso;
	
	cout<<"\nMostrando Registro de Pulsaciones"<<endl;
	
	while(!archivoB.eof()){
		archivoB.read((char *)&pulso, sizeof(Registro));
		
		if(!archivoB.eof()){
			cout<<"\nHora: "<<pulso.hora<<endl;
			cout<<"Pulsaciones: "<<pulso.pulsaciones<<endl;
			cout<<"\n\n";
		}
	}
	
	archivoB.close();
}