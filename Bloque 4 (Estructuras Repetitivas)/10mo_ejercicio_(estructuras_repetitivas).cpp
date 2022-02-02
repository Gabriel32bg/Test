/*Escriba un programa que calcule el valor de 1!+2!+3!+...+n!*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numero, factorial=1, suma=0;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for(int i=1; i<=numero; i++){
		factorial*=i;
		suma+=factorial;
	}
	
	cout<<"\nEl resultado de la suma de factoriales es: "<<suma<<endl;

	getch();
	return 0;
}

