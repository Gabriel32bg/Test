/*Ejercicio 2. Determinar si un número es primo ó no; con punteros y además indicar en que posición de memoria se guardo el número.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num, *pos;
	int count;
	pos = &num;

	cout<<"Digite un Número: ";cin>>num;
	
	for(int i=1;i<*pos;i++){
		if(*pos%i==0){
			count++;
		}
	}
	
	if(count>2){
		cout<<"\nEl numero "<<*pos<<" No es primo"<<endl;
		cout<<"Posición: "<<pos<<endl;
	}
	else if (count<=2){
		cout<<"\nEl numero "<<*pos<<" es primo"<<endl;
		cout<<"Posición: "<<pos<<endl;
	}
	
	return 0;
}
