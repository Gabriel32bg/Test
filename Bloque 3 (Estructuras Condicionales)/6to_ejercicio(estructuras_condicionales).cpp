//Escribe un programa que lea de la entrada estandar un carater e indique en la salida estandar si es una vocal mayuscula, minuscula o no es una vocal

#include <iostream>

using namespace std;

int main (){
	char letra;
	
	cout<<"Digite una vocal (Puede ser MAYUSCULA o minuscula): ";cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"\nEs una vocal minuscula";break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"\nEs una vocal MAYUSCULA";break;
		default: cout<<"\nNo es una vocal";break;
	}

	return 0;
}

