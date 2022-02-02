/*Hacer un programa que lea 5 numeros de un arreglo y los copie a otro multiplicandolos por 2*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int array1[]={2,3,4,5,6}, array[5];
	
	for(int i=0; i<5; i++){
		array[i]=array1[i]*2;
	}
	for(int i=0; i<5; i++){
		cout<<i<<" -> "<<array[i]<<endl;
	}

	getch();
	return 0;
}

