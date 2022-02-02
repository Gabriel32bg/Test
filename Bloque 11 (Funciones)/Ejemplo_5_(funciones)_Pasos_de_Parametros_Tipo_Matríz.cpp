/*Pasos de Parámetros de tipo Matríz.*/
//Elevar al cuadrado todos los elementos de una matríz

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipos de Funciones
void matrizOriginal(int m[][3],int,int);
void cuadradoMatriz(int m[][3],int,int);
void matrizElevada(int m[][3],int,int);

int i, j;

int main(){
	const int Nfilas = 2, Ncol=3;
	int m[][3]={{4,7,9},{5,8,6}};
	
	cout<<"Mostrando Matríz Original: \n";
	matrizOriginal(m,Nfilas,Ncol);
	cuadradoMatriz(m,Nfilas,Ncol);
	cout<<"\nMostrando Matríz Elevada al Cuadrado: \n";
	matrizElevada(m,Nfilas,Ncol);

	getch();
	return 0;
}
void matrizOriginal(int m[][3],int filas,int columnas){
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}
void cuadradoMatriz(int m[][3],int filas,int columnas){
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			m[i][j]*=m[i][j];
		}
	}
}
void matrizElevada(int m[][3],int filas,int columnas){
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}