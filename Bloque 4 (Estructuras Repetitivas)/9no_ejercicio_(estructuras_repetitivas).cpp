/*Escriba un programa que calcule el valor de 1*2*3*...*n (factorial de un entero)*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numero, total=1;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for(int i=1; i<=numero; i++){
		total*=i;
	}
	
	cout<<"\nEl Resultado es: "<<total<<endl;

	getch();
	return 0;
}

