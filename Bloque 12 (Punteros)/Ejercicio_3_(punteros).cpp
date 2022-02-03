/*Ejercicio 3. Rellenar un array con 10 números, posteriormente, utilizando punteros indicar cuales son los números pares y su posición en memoria.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int vec[10];
	int *dir_vec;
	
	for(int i=0;i<10;i++){
		cout<<"De 10 Elementos Digite el Elemento de la Posición "<<i<<": ";cin>>vec[i];
	}
	
	dir_vec=vec;
	
	for(int i=0;i<10;i++){
		if(*dir_vec%2==0){
			cout<<"\nElementos Pares: "<<endl;
			cout<<*dir_vec<<" | "<<"Posición en Memoria: "<<dir_vec<<endl;
		}
		dir_vec++;
	}
	

	getch();
	return 0;
}
