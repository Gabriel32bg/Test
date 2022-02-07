/*Matrices Dinámicas.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

/*Prototipos de Funciones.*/
void datos();
void muestra(int **,int,int);

/*Variables Globales.*/
int **puntero_matriz, nFila, nCol;

int main(){
	datos();
	muestra(puntero_matriz,nFila,nCol);
	
	delete[] puntero_matriz;
	
	getch();
	return 0;
}
void datos(){
	cout<<"Digite el Número de Filas de la Matriz: ";cin>>nFila;
	cout<<"Digite el Número de Columnas de la Matriz: ";cin>>nCol;
	
	puntero_matriz = new int *[nFila];//Reserva de memoria para las filas de la matriz
	for(int i=0;i<nFila;i++){
		puntero_matriz[i] = new int [nCol];//Reserva de memoria para las columnas de la matriz
	}
	
	//Rellenando matriz
	for(int i=0;i<nFila;i++){
		for(int j=0;j<nCol;j++){
			cout<<"\nDigite el Elemento del Rango ["<<i<<"] ["<<j<<"]: ";cin>>*(*(puntero_matriz+i)+j);
		}
	}
}
void muestra(int **matriz, int fila, int columna){
	cout<<"\n\nImpresión de Datos en Pantalla de la Matriz\n\n";
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<" | "<<*(*(matriz+i)+j);
		}
		cout<<"\n";
	}
}