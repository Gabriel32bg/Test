/*Introduccion a cadena de caracteres y metodo de entrada y almacenamiento de datos de tipo caracter a cadenas de caracteres*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char palabra[20], palabra2[20];
	
	//la forma de guardado gets: almacena cadenas de caracteres, la desventaja de esta forma es que consume espacio en memoria mas alla de lo estipulado en el tamaño preestablecido o declarado de la variable
	cout<<"Digite una palabra: ";gets(palabra2);
	
	//la forma de guardado cin.getline(): solamente almacenara la cantidad de caracteres que esten estipulados en la longitud maxima de espacio en memoria 
	cout<<"Digite una palabra: ";cin.getline(palabra, 20, '\n');
	
	cout<<palabra2<<endl;
	cout<<palabra<<endl;

	getch();
	return 0;
}

