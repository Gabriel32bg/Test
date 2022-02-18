/*Ejercicio 2. Realice un programa que pida al usuario el nombre o ubicación de un fichero de texto y, a continuación de lectura a todo el fichero.*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

//Prototipos de Funciones.
void searchFile();

//Variables Globales.
ifstream files;
string fileName, fileText;

int main(){
	searchFile();
	
	getch();
	return 0;
}
void searchFile(){
	//Al momento de escribir una ubicación en consola todo debe estar escrito en minuscula y sin espacios o caracteres especiales.
	cout<<"Digite el Nombre ó Ubicacion del Archivo de Texto: ";getline(cin, fileName);
	
	files.open(fileName.c_str(),ios::in);
	
	if(files.fail()){
		cout<<"Fatal erro";
		exit(1);
	}
	
	while(!files.eof()){
		getline(files, fileText);
		cout<<fileText<<endl;
	}
	
	files.close();
	
}
