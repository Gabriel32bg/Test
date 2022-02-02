/*Ejercicio 11. Realize una función que tome como parámetros un vector de números enteros y devuelva la suma de sus elementos*/

#include <iostream>
#include <conio.h>

using namespace std;

int suma(int vec[], int);
int muestra(int vec[], int);

int sumaT = 0;

int main(){
	const int TAM = 5;
	int vec[TAM]={2,5,3,7,8};

	suma(vec, TAM);
	muestra(vec, TAM);
	
	getch();
	return 0;
}
int suma(int vec[], int tam){
	for(int i=0;i<tam; i++){
		sumaT += vec[i];
	}
}
int muestra(int vec[], int tam){
	cout<<"El Resultado es: "<<sumaT<<endl;
}
		