//Escriba un programa que lea un numero y determine si es par o impar

#include <iostream>

using namespace std;

int main (){
	int numero;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	if(numero == 0 ){
		cout<<"\nEl numero digitado es cero";
	}
	else if (numero%2==0){
		cout<<"\nEl numero digitado es par";
	}
	else{
		cout<<"\nEl numero digitado es impar";
	}

	return 0;
}

