/*Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango de [20-30] o se introduzca el valor 0.
El programa debe entregar la suma de los valores mayores a 0 introducidos.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numero, suma=0; 
	
	do{
		cout<<"Ingrese un valor: ";cin>>numero;
		
		suma+=numero;
		
	}while((numero!=0 && numero<20)||(numero>30));
	
	cout<<"\nEl resultado de la suma total es: "<<suma<<endl;

	getch();
	return 0;
}

