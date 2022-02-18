/*Ejemplo 3. Editar una archivo o fichero.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

//Prototipo de Funciones.
void fileEdit();

//Variables Globales.
ofstream files;
string fileName, fileText;

int main(){
	fileEdit();
	
	getch();
	return 0;
}
void fileEdit(){
	cout<<"Digite el Nombre o Ubicación del Archivo: ";getline(cin, fileName);
	
	files.open(fileName.c_str(),ios::app);
	
	if(files.fail()){
		cout<<"Fatal erro";
		exit(1);
	}
	
	cout<<"\nDigite el Contenido que Desea Agregar al Archivo: ";getline(cin, fileText);
	
	files<<fileText<<endl;
	
	files.close();
}
