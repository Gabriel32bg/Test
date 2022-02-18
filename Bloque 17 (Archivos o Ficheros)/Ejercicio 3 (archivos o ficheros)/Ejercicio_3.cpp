/*Ejercicio 3. Realice un programa que pida al usuario el nombre ó ubicación de un fichero de texto y, a continuación añada texto en el hasta que el usuario lo 
decida.*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

//Prototipo de Funciones.
void fileEdit();

//Variables Globales.
ofstream files;
string fileName, fileText;
char rpt;

int main(){
	fileEdit();
	
	getch();
	return 0;
}
void fileEdit(){
	cout<<"Digite el Nombre o Ubicación del Archivo: ";getline(cin, fileName);
	
	files.open(fileName.c_str(),ios::app);
	
	if(files.fail()){
		cout<<"Fatal erro 0x00001";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"\nDigite el Texto que Desea Añadir al Archivo: ";getline(cin,fileText);
		files<<fileText<<endl;
		cout<<"\nDesea Agregar más Texto? (S/N): ";cin>>rpt;
	}while(rpt == 's' || rpt == 'S');
	
	files.close();
}
