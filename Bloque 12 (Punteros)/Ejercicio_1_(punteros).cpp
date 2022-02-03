/*Ejercicio 1. Comprobar si un número es par o impar, y señalar la posición en memoria donde esta guardado el número. Con punteros.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num, *pos;
	
	pos=&num;
	
	cout<<"Digite un Número: ";cin>>num;
	
	if(*pos%2==0){
		cout<<"\nEl Número "<<*pos<<" es par"<<endl;
		cout<<"Posición: "<<pos<<endl;
	}
	else{
		cout<<"\nEl Número "<<*pos<<" NO es par"<<endl;
		cout<<"Posición: "<<pos<<endl;
	}


	getch();
	return 0;
}
