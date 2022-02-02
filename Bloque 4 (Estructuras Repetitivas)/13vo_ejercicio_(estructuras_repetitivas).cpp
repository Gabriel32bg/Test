//Hacer un programa que realize la serie Fibonacci

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numero, x=0, y=1, z=1;
	
	cout<<"Digite el numero de elementos: ";cin>>numero;
	
	cout<<"1 ";
	
	for(int i=1; i<numero; i++){
		z= x+y;
		cout<<z<<" ";
		x = y;
		y = z;
	}

	getch();
	return 0;
}

