/*Escribe un programa que lea de la entrada estandar un vector de numeros y muestre en la salida estandar sus elementos con sus indices asociados*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numero[100], n;

	cout<<"Digite el numero de elementos del vector: ";cin>>n;
	
	for (int i=0; i<n; i++){
		cout<<"\nDigite un numero: ";cin>>numero[i];
	}
	
	for (int i=0; i<n; i++){
		cout<<i<<" -> "<<numero[i]<<endl;
	}

	getch();
	return 0;
}

