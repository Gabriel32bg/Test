/*Ejercicio 13. Realize un programa que tome como parámetros un vector de números y su tamaño y cambie el signo de los elementos del vector.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipos de Funciones
void pedirDatos();
void vectorNum(int vec[],int);
void muestra(int vec[],int);

int vec['#'], tam;

int main(){
	pedirDatos();
	vectorNum(vec,tam);
	cout<<"\nEl Vector Ahora es: "<<endl;
	muestra(vec,tam);

	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite el número de elementos del vector: ";cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<"\nDigite el elemento de la posición "<<i+1<<": ";cin>>vec[i];
	}
}
void vectorNum(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i]*=-1;
	}
}
void muestra(int vec[],int tam){
	for(int i=0; i<tam; i++){
		cout<<" "<<vec[i]<<" ";
	}
}
