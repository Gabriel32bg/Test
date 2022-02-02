/*Ejercicio 7. Intercambiar 2 valores utilizando el paso de parametros por referencias.*/

#include <iostream>
#include <conio.h>

void valNew(int&,int&);

using namespace std;

int main (){
	int num1, num2;
	
	cout<<"\nDigite el Valor del Primer Numero : ";cin>>num1;
	cout<<"\nDigite el Valor del Segundo Numero : "<<endl;cin>>num2;
	
	valNew(num1,num2);
	
	cout<<"\nValores Intercambiados"<<endl;
	cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
	cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;

	getch();
	return 0;
}
void valNew(int& xnum, int& ynum){
	int aux;
	
	aux = xnum;
	xnum = ynum;
	ynum = aux;
}

