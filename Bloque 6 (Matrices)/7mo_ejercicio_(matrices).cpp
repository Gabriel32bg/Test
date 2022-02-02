/*Desarrollar un programa que determine si una matriz es simetrica o no. Una matriz es simetrica si cadrada e igual a su matriz traspuesta*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int matrizOriginal[100][100], filas, columnas;
	char band = 'F';
	
	 
	cout<<"Digite el numero de Filas para la Matriz: ";cin>>filas;
	cout<<"Digite el numero de Columnas para la Matriz: ";cin>>columnas;
	
	 for(int i=0; i<filas; i++){
	 	for(int j=0; j<columnas; j++){
	 		cout<<"\nDigite el numero del rango ["<<i<<"] ["<<j<<"]: ";cin>>matrizOriginal[i][j];
	 	}
	 }	
	 
	 cout<<"\n";
	 
	 cout<<"\nRespuesta"<<endl;
	
	if(filas==columnas){
		for(int i=0; i<filas; i++){
		 	for(int j=0; j<columnas; j++){
		 		if(matrizOriginal[i][j]==matrizOriginal[j][i]){
		 			band='V';
		 		}
		 	}
		 }	
	}
	
	if(band == 'V'){
		cout<<"\nLa Matriz es Simetrica";
	}else{
		cout<<"\nLa Matriz NO es Simetrica";
	}
	
	 
		
	getch();
	return 0;
}

