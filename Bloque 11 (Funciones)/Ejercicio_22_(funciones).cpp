/*Ejercicio 22. Escriba un función escribeNumeros(int ini, int fin) que devuelva en la salida estándar los números del ini al fin. Escriba una versión que escriba los 
números en orden ascendente.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de función.

int escribeNumeros(int ini, int fin);

int main(){
	int inicio, final;
	
	cout<<"Digite el Número de inicio: ";cin>>inicio;
	cout<<"Digite el Número Final: ";cin>>final;
	
	escribeNumeros(inicio,final);
	
	for(int i=inicio;i<=final;i++){
		cout<<i<<", ";
	}
	
	getch();
	return 0;
}
int escribeNumeros(int ini, int fin){
	int count=0;
	if(ini==fin){
		count=ini;
	}
	else if(fin>ini){
		count=ini+escribeNumeros(ini,fin-1);
	}
	return count;
}