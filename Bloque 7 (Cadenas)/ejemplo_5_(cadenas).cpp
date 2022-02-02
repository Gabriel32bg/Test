/*Concatenacion de dos cadenas de caracteres con la funcion strcat()*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char word1['#'], word2['#'], word3['#'];
	
	cout<<"Digite una primera frase: ";cin.getline(word1, 100, '\n');
	cout<<"Digite una segunda frase: ";cin.getline(word2, 100, '\n');
	
	strcpy(word3,word1);
	strcat(word3,word2);
	
	cout<<word3<<endl;

	getch();
	return 0;
}

