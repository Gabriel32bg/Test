/*Hacer un programa que pida al usuario que digite una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de caracteres*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char word['#'], word2['#'];
	
	cout<<"Digite la frace que desea copiar: ";cin.getline(word, 100, '\n');
	
	strcpy(word2, word);
	
	cout<<word2<<endl;

	getch();
	return 0;
}

