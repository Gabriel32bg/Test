/*Ejercicio 4. Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento del arreglo.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int vec['#'], n, menor=100000000000000, pos;
	int *dir_vec;
	
	dir_vec=&vec[0];
	
	cout<<"Digite el Tamaño del Array: ";cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite el Valor del Rango ["<<i<<"]: ";cin>>vec[i];
	}
	
	for(int i=0;i<n;i++){
		if(*dir_vec<menor){
			menor = *dir_vec;
			pos = i;
		}
		dir_vec++;
	}
	
	cout<<"\nNúmero de Menor Valor en el Array"<<endl;
	cout<<menor<<"| Posicion en Memoria: "<<dir_vec++<<" | Posicion en el Array: "<<pos<<endl;
	
	getch();
	return 0;
}
