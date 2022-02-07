/*Transmisión de Direcciones
Ejemplo: Intercambio de valores de dos variables.*/

#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(float *, float *);

int main(){
	float n1, n2;
	
	cout<<"Digite el 1er Número: ";cin>>n1;
	cout<<"Digite el 2do Número: ";cin>>n2;
	
	cout<<"\nAntes del Intercambio\n";
	
	cout<<"1er Número: "<<n1<<endl;
	cout<<"2do Número: "<<n2<<endl;

	intercambio(&n1, &n2);

	cout<<"\nDespues del Intercambio\n";
	
	cout<<"1er Número: "<<n1<<endl;
	cout<<"2do Número: "<<n2<<endl;

	getch();
	return 0;
}
void intercambio(float *num1, float *num2){
	float aux;
	
	aux = *num1;
	*num1 = *num2;
	*num2 = aux;
}