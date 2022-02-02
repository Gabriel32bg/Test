/**/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){
	int matriz1[100][100], fila, columna, matriz2[100][100],dato;
	
	cout<<"Digite el numero de filas: ";cin>>fila;
	cout<<"Digite el numero de columnas: ";cin>>columna;
	cout<<"\n";
	
	srand(time(NULL));
	
	//Rellenando matriz de numeros aleatorios
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
			dato= 1+rand()%(1000);
			matriz1[i][j]=dato;
		}
	}
	
	cout<<"\nMatriz Copia"<<endl;
	
	//Copiando contenido de la primera matriz original
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
			matriz2[i][j]=matriz1[i][j];
		}
	}
	
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}

	system("pause");
	getch();
	return 0;
}

