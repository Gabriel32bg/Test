//Realize un programa que calcule y muestre la salida estandar de la suma de los cuadrados de los 10 primeros enteros mayores a cero

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int suma = 0, cuadrado;
	
	for(int i= 1; i<=10; i++){
		cuadrado = i * i;
		suma += cuadrado; //es igual a colocar suma = suma + cuadrado
	}
	
	cout<<"El resultado es: "<<suma<<endl;
	
	getch();
	return 0;
}

