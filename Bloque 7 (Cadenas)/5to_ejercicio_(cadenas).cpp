/*Hacer un programa que reconozca si una palabra es polindroma*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char word['#'], word2['#'];
	
	cout<<"Digite una Frase o Palabra: ";cin.getline(word, 100, '\n');
	
	strcpy(word2, word);
	
	strrev(word2);
	
	if(strcmp(word,word2)==0){
		cout<<word<<" Es una palabra Polindroma"<<endl;
	}else{
		cout<<word<<" NO es una palabra Polindroma"<<endl;
	}

	getch();
	return 0;
}

