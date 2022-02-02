/*Realize un programa que lea una cadena de caracteres de la entrada estandary muestre en la salida estandar cuantas ocurrencias de cada vocal existen en la 
cadena*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main (){
	char word['#'];
	int count_a=0, count_e=0, count_i=0, count_o=0, count_u=0,n;
	
	cout<<"Digite una frase: ";cin.getline(word, 1000, '\n');
	
	n=strlen(word);
	
	strlwr(word);
	
	for(int i=0; i<n; i++){
		switch(word[i]){
			case 'a': count_a++; break;
			case 'e': count_e++; break;
			case 'i': count_i++; break;
			case 'o': count_o++; break;
			case 'u': count_u++; break;
		}
	}
	
	cout<<"\nLa vocal a aparece: "<<count_a<<" veces"<<endl;
	cout<<"La vocal e aparece: "<<count_e<<" veces"<<endl;
	cout<<"La vocal i aparece: "<<count_i<<" veces"<<endl;
	cout<<"La vocal o aparece: "<<count_o<<" veces"<<endl;
	cout<<"La vocal u aparece: "<<count_u<<" veces"<<endl;

	getch();
	return 0;
}

