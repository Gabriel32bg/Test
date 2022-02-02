/*Ejercicio 19. Realice una función recursiva que sume los n primeros números enteros positivos 
Nota: Para plantear la función recursiva tenga en cuenta que la suma puede expresarse mediante la siguiente recurrenci:

	suma(n)=1            ,sí  n=1
			n+suma(n-1)  ,sí   n>1*/

#include <iostream>
#include <conio.h>

using namespace std;

int sumar(int);

int main(){
	int n;
	
	do{
		cout<<"Digite el numero de elementos a sumar: ";cin>>n;
	}while(n<=0);
	
	cout<<"\nResultado: "<<sumar(n)<<endl;
	
	getch();
	return 0;
}
int sumar(int n){
	int suma=0;
	if(n==1){
		suma=1;
	}else{
		suma= n+sumar(n-1);
	}
	return suma;
}
