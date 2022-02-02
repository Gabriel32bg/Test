/*Ejercicio 16. Realize una función que dada una matríz y un numero de fila de la matríz devuelva el menor de los elementos almacenados en dicha matríz.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipos de Funciones
void pedirDatos();
void matriz(int m[]['#'],int,int);
int resultado(int m[]['#'],int,int);

int m[]['#']={{},{}},fila, columna;
int i, j;

int main(){
	pedirDatos();
	matriz(m,fila,columna);

	cout<<"\nEl Elemento de Menor Valor es: "<<resultado(m,fila,columna);

	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite el número de filas: ";cin>>fila;
	cout<<"Digite el número de columnas: ";cin>>columna;
}
void matriz(int m[]['#'],int filas,int columnas){
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<"\nDigite el Elemento del Rango ["<<i<<"] ["<<j<<"]: ";cin>>m[i][j];
		}
	}
}
int resultado(int m[]['#'],int filas, int columnas){
	int filaEspecifica;
	int menor= 9999;
	cout<<"Digite la Fila Especifica a Escanear: ";cin>>filaEspecifica;
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			if(i==filaEspecifica){
				if(m[i][j]<menor){
					menor=m[i][j];
				}
			}
		}
	}
	return menor;
}