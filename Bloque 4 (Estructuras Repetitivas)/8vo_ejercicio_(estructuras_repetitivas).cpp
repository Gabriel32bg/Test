/*Escriba un programa que calcule el valor de 1+3+5+...+2n-1*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){

int numero, suma=0;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for(int i=1; i<=2*numero-1; i+=2){
		suma+=i;
	}
	
	cout<<"\nEl Resultado es: "<<suma<<endl;
	getch();
	return 0;
}

