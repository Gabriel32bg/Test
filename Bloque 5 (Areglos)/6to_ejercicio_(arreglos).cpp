/*Escribe un programa que defina un vector de numeros enteros y calcule si existe algun numero en el vector cuyo valor equivale a la suma del resto de numeros 
del vector*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int num[5]={1,2,4,7,14}, suma=0,mayor=0, equivalencia;
	
	for (int i=0; i<5; i++){
		
		suma+=num[i];
			
		if(num[i]>mayor){
			mayor = num[i];
		}

	}
	
	if(mayor == suma-mayor){
		cout<<"\nEl numero: "<<mayor<<" es el equivalente a la suma del resto de los elementos del vector"<<endl;
	}else{
		cout<<"\nEl numero: "<<mayor<<" no es el equivalente a la suma del resto de los elementos del vector"<<endl;
	}
		
	getch();
	return 0;
}

