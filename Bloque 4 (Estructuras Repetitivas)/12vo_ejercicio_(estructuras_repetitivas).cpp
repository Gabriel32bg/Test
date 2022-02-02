//Escriba un programa que calcule la siguiente expresion 1-2+3-4+5-6...n

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numero, par, suma1=0, suma2=0, sumaTotal=0;
	
	cout<<"Digite el numero de elementos a sumar: ";cin>>numero;
	
	for(int i=1; i<=numero; i++){
		if(i%2==0){
			par = i*-1;
			suma1 += i;
		}else{
			suma2+=i;
		}
	}
	
	sumaTotal = suma1 + suma2;
	
	cout<<"el resultado de la suma es: "<<sumaTotal<<endl;

	getch();
	return 0;
}

