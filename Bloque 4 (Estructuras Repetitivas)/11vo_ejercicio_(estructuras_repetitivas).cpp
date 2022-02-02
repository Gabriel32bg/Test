//Escriba un programa que calcule 2^1+2^2+2^3+...+2^n

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main (){
	int numero, suma = 0, elevado = 0;
	
	cout<<"Digite el numero de elementos: ";cin>>numero;
	
	for(int i=1; i<=numero; i++){
		elevado = pow(2,i);
		
		suma+=elevado;
	}
	
	cout<<"\nEl resultado de la sumatoria de elementos es: "<<suma<<endl;

	getch();
	return 0;
}

