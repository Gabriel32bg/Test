/*Busqueda Secuencial*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int vec[]={8,4,10,-2,40,5,12,18,49,70};
	int i=0, pos, dato;
	char band = 'F';
	
	cout<<"Digite el Elemento a Buscar: ";cin>>dato;
	
	while((band=='F')&&(i<10)){
		if(vec[i]==dato){
			band='V';
			pos=i;
		}
		i++;
	}	
	
	if(band=='F'){
		cout<<"\nElemento No Encontrado ó Inexistente"<<endl;
	}
	else{
		cout<<"\nElemento Encontrado en la Posición "<<pos<<" con el Valor: "<<dato<<endl;
	}

	getch();
	return 0;
}