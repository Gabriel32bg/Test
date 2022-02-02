//Escribe un programa que calcule x^y donde tanto x como y son enteros positivos sin utilizar la funcion pow

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int x, y, resultado=1;
	
	cout<<"Ingrese el valor de X: ";cin>>x;
	cout<<"\nIngrese el valor de Y: ";cin>>y;
	
	for(int i=1; i<=y; i++){
		
		resultado*=x;
		
	}
	
	
	cout<<"\nEl Resultado es: "<<resultado<<endl;

	getch();
	return 0;
}

