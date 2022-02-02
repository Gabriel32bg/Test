/*Realize un programa que le muestre al usuario las siguientes opciones y dependiendo dde cada una realize la funcion pertinente:
1. Cubo de un numero
2. Verfiicacion de un numero paar o impar
3. Salir*/

#include <iostream>
#include <math.h>

using namespace std;

int main (){
	float numero1, cubo=0;
	int numero2, opc;
		
		cout<<"\n1. Cubo de un Numero";
		cout<<"\n2. Validadr si el numero es Par o Impar";
		cout<<"\n3. Salir"; 
		
		cout<<"\nDigite una Opcion: ";cin>>opc;
		
	switch(opc){
		case 1:
			cout<<"\nDigite un numero: ";cin>>numero1;
			cubo=pow(numero1, 3);
			cout<<"\nEl valor al cuadrado del numero es: "<<cubo; 
			break;
		case 2:
			cout<<"\nDigite un numero: ";cin>>numero2;
			
			if(numero2%2==0){
				cout<<"\nEl numero digitado es par"; 
			}
			else{
				cout<<"\nEl numero digitado es impar"; 
			}
			break;
		case 3: 
			break;
	}

	return 0;
}

