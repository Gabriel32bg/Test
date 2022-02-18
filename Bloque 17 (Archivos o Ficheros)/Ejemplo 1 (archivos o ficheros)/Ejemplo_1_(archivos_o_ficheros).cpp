/*Ejemplo de Archivos creación de un archivo .txt.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribir();

int main(){
	escribir();
	
	getch();
	return 0;
}
void escribir(){
	ofstream archivo; //ofstream vendria a ser el tipo de dato al igual que lo seria int o float, archivo es el nombre de la variable.
	string nombreArchivo, frase;
	
	cout<<"Digite el Nombre del Archivo: ";getline(cin, nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::out);
	
	if(archivo.fail()){
		cout<<"Error al crear el archivo";
		exit(1);
	}
	
	cout<<"Digite la Oración o Frase a Guardar dentro del Archivo .txt: ";getline(cin, frase);
	
	archivo<<frase;
	
	archivo.close();
}
