/*Metodo de comprobacion de longitud de cadena de caracteres strlen()*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char word['#'];
	int longitud=0;
	
	cout<<"Digite una frace u oracion: ";cin.getline(word, 100, '\n');
	
	longitud=strlen(word);
	
	cout<<"\nEl numero de caracteres ingresados fue: "<<longitud<<endl;
	
	getch();
	return 0;
}

