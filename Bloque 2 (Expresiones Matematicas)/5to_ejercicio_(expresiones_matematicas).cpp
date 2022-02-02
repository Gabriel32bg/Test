//Escriba una fraccion de un programa que intercambie el valor de dos variables

#include <iostream>

using namespace std;

int main (){
	int x, y, aux;

	cout<<"Digite el valor de x: ";cin>>x;
	cout<<"\nDigite el valor de y: ";cin>>y;
	
	/*
	x=a
	y=b
	
	aux=x
	x=y
	y=aux
	*/
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nEl nuevo valor de 'x' es: "<<x;
	cout<<"\nEl nuevo valor de 'y' es: "<<y;
	
	return 0;
}

