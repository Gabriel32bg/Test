/*Funcion strupr()*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char word[20]="Hola";
	
	strupr(word);
	
	cout<<word;

	getch();
	return 0;
}

