/*Realiza un programa que defina una matriz de 3x3 y escriba un ciclo que muestre la diagonal principal de la matriz*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int matriz[3][3]={{2,3,4},{5,6,7},{4,5,8}},suma=0;
	
	cout<<"\nMatriz Completa"<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\nDiagonal Principal de la Matriz"<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(i==j){
				cout<<matriz[i][j]<<endl;
			}
		}
	}

	
	getch();
	return 0;
}

