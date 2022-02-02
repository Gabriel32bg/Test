/*Ecribe un programa que muestre los elementos de un arreglo en orden inverso*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numero[]={1,2,3,4,5};
	
	for (int i=4; i>=0; i--){
		cout<<i<<" -> "<<numero[i]<<endl;
	}


	getch();
	return 0;
}

