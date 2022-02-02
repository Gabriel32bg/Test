/*Realize un programa que solicite al usuario que piense un numero entre 1 y 100. El programa debe generar un numero aleatorio en ese mismo rango (1-100),
e indicarle al usuario di el numero digitado es mayor o menor al numero aleatorio asi hasta que adivine. Por ultimo debe mostrar al usuario cuantos intentos
le llevo adivinarlo

variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior)*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){
	int numero, dato, count=0;
	
	srand(time(NULL));
	
	dato = 1 + rand()%+(100);
	
	do{
		cout<<"Digite un numero: ";cin>>numero;
		
		if(numero<dato){
			cout<<"\nDigite un numero mayor: \n";
		}
		if(numero>dato){
			cout<<"\nDigite un numero menor: \n";
		}
		count++;
		
	}while(numero != dato);
	
	cout<<"\nFELICIDADES LO HAS CONSEGUIDO\n";
	cout<<"\nEl numero de intentos fue: "<<count<<endl;

	system("pause");
	return 0;
}

