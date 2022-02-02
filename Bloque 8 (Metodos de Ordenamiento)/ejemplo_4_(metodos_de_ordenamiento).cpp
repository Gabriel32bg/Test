/*Ordenamiento Shell*/

#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
void intercambio(int&, int&);
void shell(int vec[],int);

int vec['#'],n;

int main(){
	pedirDatos();	
	shell(vec,n);
	cout<<"\nArrelo Ordenado en forma Ascendente"<<endl;
	for(int i=0; i<n; i++){
		cout<<vec[i]<<" | ";
	}

	getch();            
	return 0;
}	
void pedirDatos(){
	cout<<"Digite el tamaño del Array: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"\nDigite el valor del rango "<<i<<": ";cin>>vec[i];
	}
}
void intercambio(int& x, int& y){
int aux;
	aux=x;
	x=y;
	y=aux;
}
void shell(int vec[], int n){
	int salto, i, j, k;
	salto=n/2;
	while(salto>0){
		for(i=salto;i<n;i++){
			j=i-salto;
			while(j>=0){
				k=j+salto;
				if(vec[j]<=vec[k]){
					j=-1;
				}
				else{
					intercambio(vec[j],vec[k]);
					j-=salto;
				}
			}
		}
		salto/=2;
	}
}