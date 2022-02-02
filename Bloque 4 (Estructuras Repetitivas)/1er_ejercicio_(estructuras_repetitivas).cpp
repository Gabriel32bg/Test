//Realize un programa que lea de la entrada estandar un numero entero entre 1 - 10, y que muestre en la salida estandar su tabla de multiplicar

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numero;
	
	do{
		cout<<"Digite un numero entero entre 1 - 10: ";cin>>numero;	
	}while((numero<1)||(numero>10));
	
	for(int i=1; i<=20; i++){
		cout<<numero<<"*"<<i<<" = "<<numero*i<<endl; 
	}
	
	getch();
	return 0;
}

