/*Ejercicio 12. Realize una función que tome como parámetros un vector y su tamaño y diga si esta ordenado de manera creciente. Sugerencia: compruebe que para todas
las posiciones del vector, salvo para la 0, el elemento del vector al elemento que le precede en el vector.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipos de funciones
void pedirDatos();
void comprobarOrdenamiento(int vec[],int);

int vec[100], tam;

int main(){
	pedirDatos();
	comprobarOrdenamiento(vec,tam);


	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite el número de elementos del Array: ";cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<i+1<<" Digite un número: ";cin>>vec[i];
	}
}
void comprobarOrdenamiento(int vec[],int tam){
	char band = 'F';
	int i = 0;
	while((band =='F')&&(i<tam-1)){
		if(vec[i]>vec[i+1]){
			band = 'V';	
		}
		i++;
	}	
	if (band=='V'){
		cout<<"El Array no esta Ordenado de forma Ascendente"<<endl;
	}
	else{
		cout<<"El Array esta Ordenado de forma Ascendente"<<endl;
	}
}