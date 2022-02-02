/*Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena, y si esta supera los 10 caracteres mostrarla
en pantalla, caso contratio no mostrarla*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char word['#'];
	int size=0;
	
	cout<<"Digite una frace: ";cin.getline(word, 100, '\n');
	
	size=strlen(word);
	
	if(size>=10){
		cout<<word<<endl;
	}else{
		cout<<"...............";
	}

	getch();
	return 0;
}

