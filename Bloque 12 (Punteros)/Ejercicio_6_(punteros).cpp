/*Ejercicio 6. Hacer una función para almacenar N números en un arreglo dinámico, posteriormente en otra función buscar un número en particular.
Nota: Puedes utilizar cualquier método de búsqueda (Secuencial ó Binaria).*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

/*Prototipos de Funciones*/

void Datos();
void Busqueda();

int Num, *Vec, opc, dato, pos;
char band ='F'; 

int main(){
	Datos();
	Busqueda();
	
	delete[] Vec;

	getch();
	return 0;
}
void Datos(){
	cout<<"Digite el Número de Elementos del Vector: ";cin>>Num;
	
	Vec = new int [Num];
	
	for(int i=0;i<Num;i++){
		cout<<"\nDigite el Elemento de la Posición #"<<i<<": ";cin>>*(Vec+i);
	}
}
void Busqueda(){
	cout<<"\nDigite el Elemento a Buscar Dentro del Array: ";cin>>dato;
	cout<<"\nPor Favor Escoja el Tipo de Búsqueda a Realizar: \n";
	cout<<"1. Búsqueda Secuencial"<<endl;
	cout<<"2. Búsqueda Binaria"<<endl;
	
	cout<<"Digite su Opción: ";cin>>opc;
	
	switch(opc){
		case 1: 
			int i;
			while((band=='F')&&(i<Num)){
				if(*(Vec+i)==dato){
					band = 'V';
					pos = i;
				}
				i++;
			}
			
			for(i=0;i<Num;i++){
				cout<<" | "<<*(Vec+i);
			}
			
			if(band=='F'){
				cout<<"\n\nElemento Inexistente"<<endl;
			}
			else{
				cout<<"\n\nElemento |"<<dato<<"| Encontrado en la Posición "<<pos<<endl;
			}
			break;
		case 2: 
			int aux;
			int inf=0, sup=Num, med;
			for(int i=0;i<Num;i++){
				for(int j=0;j<Num-1;j++){
					if(*(Vec+j)>*(Vec+j+1)){
						aux = *(Vec+j);
						*(Vec+j)=*(Vec+j+1);
						*(Vec+j+1)=aux;
					}
				}
			}
			
			for(i=0;i<Num;i++){
				cout<<" | "<<*(Vec+i);
			}
			
			while(inf<=sup){
				med=(inf+sup)/2;
				if(*(Vec+med)==dato){
					band='V';
					break;
				}
				if(*(Vec+med)>dato){
					sup = med;
					med =(inf+sup)/2;
				}
				if(*(Vec+med)<dato){
					inf = med;
					med=(inf+sup)/2;
				}
			}
			if(band=='V'){
				cout<<"\nEl Elemento fue Encontrado en la Posición: "<<med<<endl;
			}
			else{
				cout<<"\nElemento Inexistente en el Array"<<endl;
			}
			}
}
