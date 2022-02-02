/*Metodo de Ordenamiento por Insersion*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int num[5]={4,3,2,1,5}, i, pos, aux;
	
	for(i=0; i<5; i++){
		pos=i;
		aux=num[i];
		while((pos>0)&&(num[pos-1])>aux){
			num[pos]=num[pos-1];
			pos--;
		}
		num[pos]=aux;
	}
	
	cout<<"Orden Ascendente"<<endl;
	
	for(i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	
	cout<<"\nOrden Descendente"<<endl;
	
	for(i=4;i>=0;i--){
		cout<<num[i]<<" ";
	}

	getch();
	return 0;
}

