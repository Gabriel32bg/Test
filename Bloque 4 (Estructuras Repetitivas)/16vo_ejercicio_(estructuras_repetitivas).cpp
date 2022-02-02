/*Escriba un programa que realize la descomposicion de numeros primos de un entero*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int numero;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for(int i=2; i>1; i++){
		while(numero%i==0){
			cout<<i<<" ";
			numero/=i;
		}	
	}
	
	system("pause");
	return 0;
}

