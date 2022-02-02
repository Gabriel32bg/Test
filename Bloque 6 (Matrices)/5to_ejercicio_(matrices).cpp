/*Realize un programa que lea una matriz de 3x3 y cree su matriz traspuesta*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int matriz1[3][3]={{2,4,6},{1,9,7},{0,12,1}};
	cout<<"Matriz Original"<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz Traspuesta"<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz1[j][i]<<" ";
		}
		cout<<"\n";
	}
	

	getch();
	return 0;
}

