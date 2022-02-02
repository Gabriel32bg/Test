//Escribe un programa que lea de la entrada estandar un numero en el rango de 1 - 12 y muestre en la salida estandar los meses del año dependiendo del numero correspondiente

#include <iostream>

using namespace std;

int main (){
	int numero;
	
	cout<<"Digite un numero entre 1 - 12: ";cin>>numero;
	
	switch(numero){
		case 1: cout<<"\nEl numero digitado corresponde al mes de Enero";break;
		case 2: cout<<"\nEl numero digitado corresponde al mes de Febrero";break;
		case 3: cout<<"\nEl numero digitado corresponde al mes de Marzo";break;
		case 4: cout<<"\nEl numero digitado corresponde al mes de Abril";break;
		case 5: cout<<"\nEl numero digitado corresponde al mes de Mayo";break;
		case 6: cout<<"\nEl numero digitado corresponde al mes de Junio";break;
		case 7: cout<<"\nEl numero digitado corresponde al mes de Julio";break;
		case 8: cout<<"\nEl numero digitado corresponde al mes de Agosto";break;
		case 9: cout<<"\nEl numero digitado corresponde al mes de Septiembre";break;
		case 10: cout<<"\nEl numero digitado corresponde al mes de Octubre";break;
		case 11: cout<<"\nEl numero digitado corresponde al mes de Noviembre";break;
		case 12: cout<<"\nEl numero digitado corresponde al mes de Diciembre";break;
		default: cout<<"\nEl numero digitado no esta en el rango solicitado";break;
	}

	return 0;
}

