/*Ejercicio 1. Realice un programa que pida al usuario el nombre de un fichero de texto y, a continuación permita almacenar al usuario tantas frases como
el usuario desee.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

//Prototipos de Funciones.
void textWriting();

//Variables Globales.
ofstream files;
string fileName, fileText;
char rpt;

int main(){
	textWriting();
	
	getch();
	return 0;
}

//Funciones.
void textWriting(){

	cout<<"Digite el Nombre del Archivo: ";getline(cin, fileName);
	
	files.open(fileName.c_str(),ios::out);
	
	if(files.fail()){
		cout<<"\nFatal erro";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"\nDigite la Frase que Desea Agregar: ";getline(cin, fileText);
		files<<fileText<<"\n";
		cout<<"\nDesea Agregar mas Contenido? (S/N): ";cin>>rpt;
	}while(rpt == 's' || rpt == 'S');
		
	files.close();
}
