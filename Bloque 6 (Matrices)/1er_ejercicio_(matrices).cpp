/*Realize un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas, posteriormente mostrar la matriz en pantalla*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int num[100][100], filas, columnas;
	
	cout<<"Digite el numero de filas de la matriz: ";cin>>filas;
	cout<<"\nDigite el numero de columnas de la matriz: ";cin>>columnas;
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"\nDigite el elemento del a pocision ["<<i<<"] ["<<j<<"] :";cin>>num[i][j];
		}
	}
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<num[i][j];
		}
		cout<<"\n";
	}		
	
	getch();
	return 0;
}

