/*Ejemplo 2. Archivos o Ficheros en C++.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

//Prototipos de Funciones.
void textReading();

//Variables Globales.
ifstream files;
string text;

int main(){
	textReading();
	
	getch();
	return 0;
}
void textReading(){
	files.open("ejemplo.txt",ios::in);
	
	if(files.fail()){
		cout<<"\nArchivo Dañado o Inexistente";
		exit(1);
	}
	
	while(!files.eof()){
		getline(files, text);
		cout<<text<<endl;
	}
	
	files.close();
}
