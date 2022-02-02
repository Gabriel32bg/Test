/*Ejercicio 14. Realize una función que tome como parámetros un vector de números enteros y su tamaño e imprima un vector con los elementos impares del vector 
recibido.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipos de Funciones
void pedirDatos();
void impares(int vec[],int);
int vec['#'],tam;

int main(){
	pedirDatos();
	impares(vec, tam);

	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite el Número de Elementos del Vector: ";cin>>tam;
	
	for(int i=0; i<tam; i++){
		cout<<"\nDigite el Elemento de la Posición "<<i<<": ";cin>>vec[i];
	}
}
void impares(int vec[], int tam){
	int j=0;
	for (int i=0;i<tam;i++){
		if(vec[i]%2!=0){
			vec[j]=vec[i];
			j++;
		}
	}
	cout<<"El Nuevo Vector es: "<<endl;
	for(int i=0;i<j;i++){
		cout<<vec[i]<<" ";
	}
}
