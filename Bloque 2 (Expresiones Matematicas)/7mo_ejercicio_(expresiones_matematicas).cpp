/*La calificacion de un estudiane es la media ponderada de tres notas:
la nota de practica es el 30% del total de la nota final
La nota de teoria es el 60% del total de la nota final 
La nota de participacion es el 10% del total de la nota final
Escriba un programa que lea de la entrada estandar las tres notas del alumno y muestre en la salida estandar la nota final del alumno*/

#include <iostream>

using namespace std;

int main (){
	float nota1, nota2, nota3, notaFinal=0;
	
	cout<<"Digite la nota de Practica: ";cin>>nota1;
	cout<<"\nDigite la nota de Teoria: ";cin>>nota2;
	cout<<"\nDigite la nota de Participacion: ";cin>>nota3;
	
	nota1 *= 0.3;
	nota2 *= 0.6;
	nota3 *= 0.1;
	
	notaFinal = (nota1+nota2+nota3);
	
	cout.precision(3);
	cout<<"\nLa nota final del alumno es: "<<notaFinal<<endl;

	return 0;
}

