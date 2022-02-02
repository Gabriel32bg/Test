/*Ejercicio 4. Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier numero introducido. 
Por ejemplo, si se introduce el numero 256.879, deberia despplegar el numero 0.879.*/

#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
float fraccion(float x);

float numero;

int main (){
	pedirDatos();
	
	cout<<"El Resultado es: "<<fraccion(numero)<<endl;

	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite un numero: ";cin>>numero;
}
float fraccion(float x){
	int entero = x;
	float resultado = numero - entero;
	
	return resultado;
}
