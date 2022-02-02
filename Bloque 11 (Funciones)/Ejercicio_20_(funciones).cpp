/*Ejercicio 20. Recursividad- Serie de Fibonacci*/

#include <iostream>
#include <conio.h>

using namespace std;

int sumar(int);

int main(){
	int numero;
	
	do {
		cout<<"Digite el Número de elementos: ";cin>>numero;
	}while(numero <=0);
	
	for(int i=1;i<numero;i++){
		cout<<sumar(i)<<" ";
	}

	getch();
	return 0;
}
int sumar(int n){
	if(n<2){
		return n;
	}
	else if(n>=2){
		return sumar(n-1)+sumar(n-2);	
	}
}