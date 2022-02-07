/*Ejercicio 7. Pedir su nombre al usuario y devolver el número de vocales que hay en el.
Nota: Recuerda que debes utilizar punteros.*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

//Prototipo de Funciones

void Datos();
int contador(char *);

char Username['#'];
int counter=0;

int main(){
	Datos();
	
	cout<<"\nNúmero Total de Vocales en el Nombre: "<<contador(Username)<<endl;

	getch();
	return 0;
}
void Datos(){
	cout<<"Por Favor Digite Su Nombre: ";cin.getline(Username,'#','\n');
	
	strupr(Username);
}
int contador(char *Name){
	while(*Name){
		switch(*Name){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': counter++;
		}
		*Name++;
	}
	
	return counter;
}
