/*Ejercicio 21. Escriba una función recursiva que calcule un número elevado a una potencia entera mayor o igual a cero: y^x 

     potencia(x,y )=x                     , y=1
	               = x*potencia(x,y-1)    , y>1*/

#include <iostream>
#include <conio.h>

using namespace std;

int potencia(int, int);

int main(){
	int base, exponente;
	
	cout<<"Digite el valor de x: ";cin>>base;
	cout<<"Digite el valor de y: ",cin>>exponente;
	
	cout<<"\nEl Resultado de "<<base<<" elevado a la "<<exponente<<" es: "<<potencia(base, exponente)<<endl;
	
	getch();
	return 0;
}
int potencia(int x, int y){
	int elevacion=0;
	
	if(y==1){
		elevacion=x;
	}
	else{
		elevacion=x*potencia(x,y-1);
	}
	return elevacion;
}
