/*Ejercicio 2. Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado la funcion debera ser
capaz de elevar al cuadrado numeros flotantes*/

#include <iostream>
#include <conio.h>
#include <math.h>

//Prototipo de Funcion
void pedirDatos();
void al_cuadrado(float x);

float num;

using namespace std;

int main (){
	pedirDatos();
	al_cuadrado(num);

	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Por favor Digite un numero: ";cin>>num;
}
void al_cuadrado(float x){
	float cubo= pow(num,2);
	
	cout<<"\nEl Resultado es: "<<cubo<<endl;
}
