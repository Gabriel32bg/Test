/*Ejercicio 5. Pedir al usuario N números, almacenarlos en un arreglo, posteriormente ordenar los números de forma ascendente y mostrarlos en pantalla.
Nota: Utilizar cualquier método de ordenamiento.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

/*Prototipos de Funciones*/

void pedirDatos();
void ordenamiento(int *, int);
void muestra();

int Num, *Array;

int main(){
	pedirDatos();
	ordenamiento(Array,Num);
	muestra();
	
	delete[] Array;

	getch();
	return 0;
}
/*Funciones*/

void pedirDatos(){
	cout<<"Digite el Número Total de Elementos del Array: ";cin>>Num;
	
	Array = new int[Num];
	
	for(int i=0;i<Num;i++){
		cout<<"\nDigite el Elemento de la Posición #"<<i<<": ";cin>>*(Array+i);//es lo mismo que Array[i]
	}
}
void ordenamiento(int *Array,int Num){
	int aux;
	
	//Método Burbuja 
	for(int i=0;i<Num;i++){
		for(int j=0;j<Num-1;j++){
			if(*(Array+j)>*(Array+j+1)){
				aux = *(Array+j);
				*(Array+j)=*(Array+j+1);
				*(Array+j+1)=aux;
			}
		}
	}
}
void muestra(){
	cout<<"\nImpresión en Pantalla de Array Ordenado de Forma Ascendente\n";
	
	for(int i=0;i<Num;i++){
		cout<<" | "<<*(Array+i);
	}
}