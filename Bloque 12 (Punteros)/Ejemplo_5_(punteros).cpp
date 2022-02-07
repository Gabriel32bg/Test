/*Transmisión de Arrays*/

#include <iostream>
#include <conio.h>

using namespace std;

int maximo(int *, int);

int main(){
	int vec['#'], N;
	
	cout<<"Digite el Número Total de Elementos del Array: ";cin>>N;
	
	for(int i=0;i<N;i++){
		cout<<"\nDigite el Elemento de la Posición #"<<i<<": ";cin>>vec[i];
	}
	
	cout<<"\nElemento de Mayor Valor del Array es: "<<maximo(vec,N)<<endl;
	
	getch();
	return 0;
}
int maximo(int *vec,int tam){
	int max=0;
	
	for(int i=0;i<tam;i++){
		if(*(vec+i)>max){
			max = *(vec+i);
		}
	}
	
	return max;
}
