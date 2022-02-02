/*Realize un programa que calcule la suma de dos matrices cuadradas de 3x3*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	 int matriz1[3][3] = {{2,5,6},{8,7,1},{9,0,1}}, matriz2[3][3] = {{3,4,5},{9,1,6},{8,7,9}};
	 
	 cout<<"Matrices a Sumar:"<<endl;
	 
	cout<<"\n";
	 
	 for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
	 		cout<<matriz1[i][j]<<" ";
	 	}
	 	cout<<"\n";
	 }	
	 
	cout<<"\n";
	 
	 for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
	 		cout<<matriz2[i][j]<<" ";
	 	}
	 	cout<<"\n";
	 }
	 
	cout<<"\nSuma de Matrices:"<<endl;
	 
	cout<<"\n";
	 
	 for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
	 		cout<<matriz1[i][j]+matriz2[i][j]<<" ";
	 	}
	 	cout<<"\n";
	 }	

	getch();
	return 0;
}

