//Escribe un programa que compruebe si el numero digitado es positivo o negativo

#include <iostream>

using namespace std;

int main (){
	int numero;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	if (numero >= 0){
		cout<<"\nEl numero es positivo";
	}
	else{
		cout<<"\nEl numero es negativo";
	}

	return 0;
}

