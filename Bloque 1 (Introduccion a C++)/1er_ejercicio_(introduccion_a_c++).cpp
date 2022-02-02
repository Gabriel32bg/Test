//1. escribir un programa que lea de la entrada estandar de dos numeros y muestre como resultado la suma, resta, multiplicacion y division de estos

#include <iostream>

using namespace std;

int main (){
	int a, b, suma=0, resta=0, multiplicacion=0, division=0;
	
	cout<<"Digite el Primer numero: "<<endl;cin>>a;
	cout<<"Digite el Primer numero: "<<endl;cin>>b;
	
	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;
	division = a / b;
	
	cout<<"\nEl Resultado de la Suma es: "<<suma<<endl;
	cout<<"\nEl Resultado de la Resta es: "<<resta<<endl;
	cout<<"\nEl Resultado de la Multiplicacion es: "<<multiplicacion<<endl;
	cout<<"\nEl Resultado de la Division es: "<<division<<endl;
	
	return 0;
}

