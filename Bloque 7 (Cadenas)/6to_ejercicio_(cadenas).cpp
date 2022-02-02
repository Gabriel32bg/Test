/*Convertir dos palabras en minuscula a MAYUSCULAS, luego compararlas y ver si son iguales o no*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char word1['#'], word2['#'];
	
	cout<<"Digite una palabra: ";cin.getline(word1, 100, '\n');
	cout<<"Digite otra palabra: ";cin.getline(word2, 100, '\n');

	strupr(word1);
	strupr(word2);
	
	cout<<word1<<endl;
	cout<<word2<<endl;
	
	if(strcmp(word1,word2)==0){
		cout<<"Ambas palabras son iguales"<<endl;
	}else{
		cout<<"Son palabras diferentes"<<endl;
	}

	getch();
	return 0;
}

