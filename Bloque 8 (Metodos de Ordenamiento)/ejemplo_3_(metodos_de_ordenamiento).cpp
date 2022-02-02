/*Metodo de Ordenamieno por Seleccion*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int num[]={2,4,1,5,3}, i, j, aux, min;
	
	for(i=0;i<5;i++){
		min=i;
		for(j=i;j<5;j++){
			if(num[j]<num[min]){
				min=j;
				
			}
		}
		aux=num[i];
		num[i]= num[min];
		num[min]=aux;
	}
	
	cout<<"Ordenamiento Ascendente: ";
	
	for(i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	
	cout<<"\nOrdenamiento Descendente: ";
	
	for(i=4;i>=0;i--){
		cout<<num[i]<<" ";
	}

	getch();
	return 0;
}

