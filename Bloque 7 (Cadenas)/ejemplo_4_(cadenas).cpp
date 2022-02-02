/*Comparar dos cadenas strcmp()*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char word['#'], word2['#'];
	
	cout<<"Digite una primera palabra: ";cin.getline(word, 100, '\n');
	cout<<"Digite una segunda palabra: ";cin.getline(word2, 100, '\n');
	
	if((strcmp(word, word2) == 0)&&(strcmp(word, word2)>0)){
		cout<<"\nAmbas palabras son iguales, siendo "<<word<<" alfabeticamente mayor que "<<word2<<endl;
	}else if((strcmp(word, word2) == 0)&&(strcmp(word, word2)<0)){
		cout<<"\nAmbas palabras son iguales, siendo "<<word2<<" alfabeticamente mayor que "<<word<<endl;
	}else if((strcmp(word, word2) != 0)&&(strcmp(word, word2)>0)){
		cout<<"\nAmbas palabras NO son iguales, siendo "<<word<<" alfabeticamente mayor que "<<word2<<endl;
	}else if((strcmp(word, word2) != 0)&&(strcmp(word, word2)<0)){
		cout<<"\nAmbas palabras NO son iguales, siendo "<<word2<<" alfabeticamente mayor que "<<word<<endl;
	}else{
		cout<<"Ambas palabras Son Totalmente Identicas"<<endl;
	}
	getch();
	return 0;
}

