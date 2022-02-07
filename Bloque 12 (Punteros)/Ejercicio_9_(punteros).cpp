/*Ejercicio 9. Realice un programa que calcúle la suma de dos matrices dinámicas.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

/*Prototipos de Funciones.*/
void datos();
void suma(int **, int **, int, int);

int **puntero1, **puntero2, nFila, nCol;

int main(){
	datos();
	cout<<"\nResultado\n";
	suma(puntero1,puntero2,nFila,nCol);
	
	delete[] puntero1;
	delete[] puntero2;

	getch();
	return 0;
}
void datos(){
	cout<<"Digite el Número de Filas para ambas matrices: ";cin>>nFila;
	cout<<"Digite el Número de Columnas para ambas matrices: ";cin>>nCol;
	
	puntero1 = new int*[nFila];
	for(int i=0;i<nFila;i++){
		puntero1[i]=new int[nCol];
	}
	
	puntero2 = new int*[nFila];
	for(int i=0;i<nFila;i++){
		puntero2[i]=new int[nCol];
	}
	
	cout<<"\nPrimera Matriz\n";
	
	for(int i=0;i<nFila;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite el Elemento de la Posición ["<<i<<"] ["<<j<<"]: ";cin>>*(*(puntero1+i)+j);
		}
	}
	
	cout<<"\nSegunda Matriz\n";
	
	for(int i=0;i<nFila;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite el Elemento de la Posición ["<<i<<"] ["<<j<<"]: ";cin>>*(*(puntero2+i)+j);
		}
	}
}
void suma(int **puntero1, int **puntero2, int fila, int columna){
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<"| "<<*(*(puntero1+i)+j)+*(*(puntero2+i)+j);
			}
			cout<<"\n";
		}
	}