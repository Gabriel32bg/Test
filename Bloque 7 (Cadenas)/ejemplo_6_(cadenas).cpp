/*Invertir una cadena de caracteres fucion strrec()*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char word[30]={"reconocer"};
	
	strrev(word);
	
	cout<<word;

	getch();
	return 0;
}

