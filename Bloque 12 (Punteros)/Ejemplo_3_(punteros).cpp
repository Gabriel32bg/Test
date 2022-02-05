/*Asignación Dinámica de Arreglos.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mostrarNotas();

int N, *Ncalif;

int main(){
	pedirDatos();
	mostrarNotas();

	delete[] Ncalif;

	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite el Número de Calificaciones: ";cin>>N;
	
	Ncalif = new int[N]; //Creando arreglo
	
	for(int i=0;i<N;i++){
		cout<<"Ingrese la Nota #"<<i+1<<": ";cin>>Ncalif[i];
	}
}
void mostrarNotas(){
	cout<<"\n\nTotalidad de Notas Cargadas\n\n";
	
	for(int i=0;i<N;i++){
		cout<<Ncalif[i]<<endl;
	}
}