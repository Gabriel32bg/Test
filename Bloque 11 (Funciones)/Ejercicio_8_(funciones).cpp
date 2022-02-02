/*Ejercicio 8. Escriba una funcion llamada cambio() que tenga un parametro en numero entero y seis parametros de referencia en numero entero nombrados: 
cien, cincuenta, veinte, diez, cinco, uno, respectivamente. La funcion tiene que considerar el valor entero transmitido y convertir el valor en el numero menor de
billetes equivalentes.*/

#include <iostream>
#include <conio.h>

void cambio(int, int&, int&, int&, int&, int&, int&);

using namespace std;

int main (){
	int valor,cien,cincuenta,veinte,diez,cinco,uno;
	
	cout<<"Digite el Valor a Convertir: "<<endl;cin>>valor;
	
	cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);
	
	cout<<"\nCantidad de Billetes a Retirar: "<<endl;
	
	cout<<"Billetes de 100: "<<cien<<endl;
	cout<<"Billetes de 50: "<<cincuenta<<endl;
	cout<<"Billetes de 20: "<<veinte<<endl;
	cout<<"Billetes de 10: "<<diez<<endl;
	cout<<"Billetes de 5: "<<cinco<<endl;
	cout<<"Billetes de 1: "<<uno<<endl;
	
	getch();
	return 0;
}
void cambio(int valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
	cien = valor/100; valor%=100;
	cincuenta = valor/50; valor%=50;
	veinte = valor/20; valor%=20;
	cinco = valor/5; valor%=5;
	uno = valor/1; valor%=1;
	
}
