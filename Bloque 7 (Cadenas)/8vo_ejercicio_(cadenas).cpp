/**/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main (){
	char word1['#'], word2['#'];
	int num1;
	float  num2, suma=0;
	
	cout<<"Digite un valor entero: ";cin.getline(word1, 100, '\n');
	cout<<"Digute un valor decimal: ";cin.getline(word2, 100, '\n');
	
	num1=atoi(word1);
	num2=atof(word2);
	
	suma= num1+num2;
	
	cout<<"El resultado es: "<<suma<<endl;


	getch();
	return 0;
}

