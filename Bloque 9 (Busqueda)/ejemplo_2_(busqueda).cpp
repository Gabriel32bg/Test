/*Busqueda Binaria
Nota: El Array debe estar ordenado de forma ascendente o creciente para que este método de busqueda pueda utilizarse.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int vec[]={1,2,3,4,5};
	int inf, sup, med, dato;
	char band = 'F';
	
	dato = 6;
	
	inf = 0;
	sup = 5;
	
	while(inf<=sup){
		med=(inf+sup)/2;
		if(vec[med]==dato){
			band='V';
			break;
		}
		if(vec[med]>dato){
			sup = med;
			med =(inf+sup)/2;
		}
		if(vec[med]<dato){
			inf = med;
			med=(inf+sup)/2;
		}
	}
	
	if(band=='V'){
		cout<<"El Elemento fue Encontrado en la Posición: "<<med<<endl;
	}
	else{
		cout<<"Elemento Inexistente en el Array"<<endl;
	}
	
	getch();
	return 0;
}
