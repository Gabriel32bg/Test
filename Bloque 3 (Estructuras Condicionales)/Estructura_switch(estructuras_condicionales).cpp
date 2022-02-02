//Sentencia o condicional Switch

#include <iostream>

using namespace std;

int main (){
	int numero;
	
	cout<<"Por Favor Digite un Numero entre 1 - 5: ";cin>>numero;
	
	switch(numero){
		case 1: cout<<"\nEl numero digitado es: 1"; break;
		case 2: cout<<"\nEl numero digitado es: 2"; break;
		case 3: cout<<"\nEl numero digitado es: 3"; break;
		case 4: cout<<"\nEl numero digitado es: 4"; break;
		case 5: cout<<"\nEl numero digitado es: 5"; break;
		default: cout<<"\nEl numero digitado no esta en el rango de 1 - 5"; break;
	}

	return 0;
}

