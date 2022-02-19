/*Ejemplo Leer Archivos o Ficheros de tipo Binario.*/

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
void leer();

//Variables Globales.
ifstream archivoB;

int main(){
	leer();
	
	getch();
	return 0;
}
void leer(){
	archivoB.open("AgendaFechasNacimiento.dat", ios::in | ios::binary);
	
	if(archivoB.fail()){
		cout<<"Fatal erro 0x00001";
		exit(1);
	}
	
	fechaN persona;
	
		archivoB.read((char *)&persona, sizeof(fechaN));
		
		cout<<"Nombre: "<<persona.nombre<<endl;
		cout<<"Fecha de Nacimiento (DD/MM/AAAA): "<<persona.fechaNacimiento<<endl;

	archivoB.close();
}
