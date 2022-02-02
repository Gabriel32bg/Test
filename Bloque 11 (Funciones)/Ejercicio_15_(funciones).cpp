/*Ejercicio 15. Realizar una función que determine sí una matríz es simétrica o no.*/

#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
void cargarMatriz(int m[]['#'],int,int);
void mostrarMatriz(int m[]['#'],int,int);
void verificarMatriz(int m[]['#'],int,int);

int matriz[]['#']={{},{}};
int i, j;
int  Nfilas='#', Ncolumnas='#';
char band = 'F';

int main(){
	pedirDatos();
	cargarMatriz(matriz,Nfilas,Ncolumnas);
	mostrarMatriz(matriz,Nfilas,Ncolumnas);
	verificarMatriz(matriz,Nfilas,Ncolumnas);	

	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite el número de Filas: ";cin>>Nfilas;
	cout<<"Digite el número de columnas: ";cin>>Ncolumnas;
}
void cargarMatriz(int m[]['#'],int filas,int columnas){
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<"\nDigite el valor del rango ["<<i<<"] ["<<j<<"] ";cin>>m[i][j];
		}
	}
}
void mostrarMatriz(int m[]['#'],int filas,int columnas){
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}
void verificarMatriz(int m[]['#'],int filas, int columnas){
	if(filas==columnas){
		for(i=0;i<filas;i++){
			for(j=0;j<columnas;j++){
				if(m[i][j]==m[j][i]){
					band = 'V';
				}
			}
		}	
	}
	if(band=='V'){
		cout<<"\nLa Matríz Digitada Es Simétrica. Porque tanto el número de Filas como número de Columnas es IGUAL.";
	}
	else{
		cout<<"\nLa Matríz Digitada Es NO Simétrica. Porque tanto el número de Filas como número de Columnas es NO IGUAL.";
	}
}