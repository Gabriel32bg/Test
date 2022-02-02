/*Escriba un programa que defina un vector de numeros y calcule la multiplicacion de sus elementos*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numero[]={1,2,3,4,5,6,7,8,9,10}, multiplicacion=1;
	
	for (int i=0; i<10; i++){
		multiplicacion*=numero[i];
	}

	cout<<"El resultado es: "<<multiplicacion<<endl;
	
	getch();
	return 0;
}

