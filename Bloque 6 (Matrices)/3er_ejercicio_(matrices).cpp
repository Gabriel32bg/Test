/*Hacer una matriz de tipo entero de 2x2, llenarla de numeros y luego copiar todo su contenido en otra matriz*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int matriz1[2][2], matriz2[2][2];
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<"Digite el elemento del rango ["<<i<<"] ["<<j<<"]: ";cin>>matriz1[i][j];
		}
	}
	
	cout<<"\nMatriz Original"<<endl;
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<matriz1[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz Copia"<<endl;
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			matriz2[i][j]=matriz1[i][j];
		}
	}
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<matriz2[i][j];
		}
		cout<<"\n";
	}

	getch();
	return 0;
}

