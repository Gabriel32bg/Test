/*Crear una cadena de caracteres que tenga la siguiente frase "Hola que tal?", luego crear otra cadena de caracteres preguntandole al usuario su nombre,
por ultimo añadir el nombre al final de la primera cadena de caracteres y mostrar el mensaje completo en pantalla "Hola que tal? (NOMBRE DEL USUARIO)*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char word[30]={"Hola que tal? "}, word2['#'], word3['#'];
	
	cout<<"Por favor digite su Nombre: ";cin.getline(word2, 100, '\n');
	
	strcpy(word3,word);
	
	strcat(word3,word2);
	
	cout<<word3;

	getch();
	return 0;
}

