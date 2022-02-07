/*Ejercicio 10. Realice un programa que lea una matriz dinámica NxM y cree su matriz traspuesta.
Nota: La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

/*Prototipo de Funciones*/
void datos();
void muestra(int **, int, int);

/*Variables Globales*/
int **puntero, nFila, nCol;

int main(){
	datos();
	muestra(puntero,nFila,nCol);
	
	delete[] puntero;

	getch();
	return 0;
}
void datos(){
	cout<<"Digite el Número de Filas de la Matriz: ";cin>>nFila;
	cout<<"Digite el Número de Columnas de la Matriz: ";cin>>nCol;
	
	puntero = new int*[nFila];
	for(int i=0;i<nFila;i++){
		puntero[i] = new int[nCol];
	}
	cout<<"\n\n";
	
	for(int i=0;i<nFila;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite el Elemento del Rango ["<<i<<"] ["<<j<<"]: ";cin>>*(*(puntero+i)+j);
		}
	}
}
void muestra(int **puntero, int fila, int columna){
	cout<<"\nMatriz Original\n";
	
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<" | "<<*(*(puntero+i)+j);
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz Traspuesta\n";
	
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<"| "<<*(*(puntero+j)+i);
		}
		cout<<"\n";
	}
	

}