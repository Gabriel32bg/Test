/*Realize un programa que calcule el producto de dos matriz cuadrada de 3x3*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int A[3][3]={{2,3,4},{2,4,5},{8,9,1}}, B[3][3]={{2,5,9},{1,0,3},{2,9,7}}, C[3][3];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			C[i][j]=0;
			for(int k=0; k<3; k++){
				C[i][j]+= A[i][k]*B[k][j];
			}
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<C[i][j]<<" ";
		}
		cout<<"\n";
	}

	getch();
	return 0;
}

