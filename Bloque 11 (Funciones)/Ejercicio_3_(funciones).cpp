/*Ejercicio 3. Escriba una funcion llamada funpot() que eleve un numero entero que se le transmita a una potencia en numero entero positivo y despliegue el 
resultado. El numero entero positivo debera ser el segundo valor transmitido a la funcion.*/

#include <iostream>
#include <conio.h>


//Prototipo de funcion
void pedirDatos();
void funpot(int x, int y);

int num1, num2;

using namespace std;

int main (){
	pedirDatos();
	funpot(num1,num2);

	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite el valor de 'X': ";cin>>num1;
	cout<<"Digite el valor de 'Y': ";cin>>num2;
}
void funpot(int x, int y){
	long resultado = 1;
	for(int i=1; i<=num2; i++){
		resultado*=num1;
	}
	cout<<"\nEl numero Resultado del numero: "<<num1<<", Elevado a: "<<num2<<" es: "<<resultado<<endl;
}
