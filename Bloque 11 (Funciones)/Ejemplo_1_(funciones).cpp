/*Funcion(es), Encontrar el Mayor de 2 numeros*/

#include <iostream>
#include <conio.h>

using namespace std;

//prototipo de funcion
int encontrarmax(int x, int y);

int main (){
	int x, y;
	
	cout<<"Digite dos Numeros: ";cin>>x>>y;
	
	cout<<"\nEl Mayor de los numeros es: "<<encontrarmax(x,y)<<endl;

	getch();
	return 0;
}

//definicion de funcion
int encontrarmax(int x, int y){
	int numMax;
	if (x>y){
		numMax = x;
	}
	else{
		numMax =y;
	}
	
	return numMax;
}

