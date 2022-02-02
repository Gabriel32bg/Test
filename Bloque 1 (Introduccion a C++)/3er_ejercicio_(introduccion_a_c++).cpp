/*Escribe un programa que lea de la entrada estandar los siguientes datos de una persona:
sexo: dato de tipo caracter
edad: dato de tipo entero
altura: dato de tipo flotante
Tras leer los datos el programa debe mostralos en la salida estandar*/

#include <iostream>

using namespace std;

int main (){
	int edad;
	float altura;
	char sexo[10];
	
	cout<<"Digite su edad: ";cin>>edad;
	cout<<"\nDigite su sexo: ";cin>>sexo;
	cout<<"\nDigite su altura: ";cin>>altura;
	
	cout<<"\nSu edad es: "<<edad;
	cout<<"\nSu sexo es: "<<sexo;
	cout<<"\nSu altura es: "<<altura;
	
	return 0;
}

