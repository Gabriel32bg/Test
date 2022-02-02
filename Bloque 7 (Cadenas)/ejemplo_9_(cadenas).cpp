/*Funciones atoi(): convierte cadena de caracteres a numeros enteros o int 
			atof(): convierte cadena de caracteres en numeros flotantes o float
*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main (){
	char word['#']= "1234";
	int num;
	
	num=atoi(word);
	
	cout<<num<<endl;

	getch();
	return 0;
}

