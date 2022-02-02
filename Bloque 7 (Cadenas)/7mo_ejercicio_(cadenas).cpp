/*Pedir el nombre al usuario en mayusculas, si su nombre comienza con "A", convertir la cadena a minuscula, caso contrario no convertir*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char word['#'];
	
	cout<<"Digite su nombre en MAYUSCULA: ";cin.getline(word, 100, '\n');
	
	if(strncmp(word, "A", 1)==0){
		strlwr(word);
		cout<<word<<endl;
	}else{
		cout<<word<<endl;
	}

	getch();
	return 0;
}

