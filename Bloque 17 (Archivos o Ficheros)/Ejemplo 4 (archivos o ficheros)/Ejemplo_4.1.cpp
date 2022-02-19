/*Archivos de tipo Binario.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

//Estructuras.
struct fechaN{
	char nombre[20];
	char fechaNacimiento[10];
}persona;

//Prototipo de Funciones.
void agregar();

//Variables Globales.
ofstream archivoB;

int main(){
	agregar();
	
	getch();
	return 0;
}
void agregar(){
	archivoB.open("AgendaFechasNacimiento.dat", ios::out | ios::binary);
	
	if(archivoB.fail()){
		cout<<"Fatal erro 0x00001";
		exit(1);
	}
	
	fechaN persona;
	
		cout<<"Nombre: ";cin.getline(persona.nombre, 20, '\n');
		cout<<"Fecha de Nacimiento (DD/MM/AAAA): ";cin.getline(persona.fechaNacimiento, 10, '\n');
		archivoB.write((char *)&persona, sizeof(fechaN));	
	

	archivoB.close();
}
