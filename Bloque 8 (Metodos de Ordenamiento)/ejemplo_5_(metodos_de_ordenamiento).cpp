/*Ordenamiento QuickSort*/

#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(int&, int&);
void quickSort(int vec[],int, int);


int main(){
	int vec[]={2,6,3,8,3,36,6,5,9,6,2,54,3,8,0,3,234,6,5,-1,349,-2,-6,-7,-4,-3,-9};
	quickSort(vec,0,25);
	
	for(int i=0; i<25; i++){
		cout<<vec[i]<<"|";
	}

	getch();
	return 0;
}
void intercambio(int& x, int& y){
	int aux;
	
	aux = x;
	x = y;
	y = aux;
}
void quickSort(int vec[], int primero, int ultimo){
	int i, j, centro;
	int pivote;
	
	centro = (primero + ultimo)/2;
	pivote = vec[centro];
	i = primero;
	j = ultimo;

	do{
		while(vec[i]<pivote) i++;
		while(vec[j]>pivote) j--;
		if(i<=j){
			intercambio(vec[i],vec[j]);
			i++;
			j--;
		}
	}while(i<=j);
	
	if(primero<j){
		quickSort(vec,primero,j);
	}
	if(i<ultimo){
		quickSort(vec,i,ultimo);
	}
}