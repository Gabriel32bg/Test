/*Ordenamiendo Metodo burbuja*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int array['#'], i, j, aux, n;
	
	cout<<"Digite el un numero en un rago de 1-10: "<<endl;cin>>n;
	
	for(i=0; i<n; i++){
		cout<<"Digite un numero: ";cin>>array[i];
	}

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(array[j]>array[j+1]){
				aux=array[j];
				array[j]=array[j+1];
				array[j+1]=aux;
			}
		}
	}
	
	cout<<"\nOrden Ascendente: ";
	
	for(i=0; i<n; i++){
		cout<<array[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	
	for(i=n-1; i>=0; i--){
		cout<<array[i]<<" ";
	}
	
	

	getch();
	return 0;
}

