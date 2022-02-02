//Escriba un programa que calcule el valor que toma la siguiente funcion para valores dados de 'x' y 'y'

#include <iostream>
#include <math.h>

using namespace std;

int main (){
	float x, y, f=0;
	
	cout<<"Digite el valor de 'x': ";cin>>x;
	cout<<"\nDigite el valor de 'y': "; cin>>y;
	
	f=((sqrt(x))/(pow(y,2)-1));
	
	cout.precision(2);
	cout<<"\nEl Resultado de la funcion es: "<<f<<endl;

	return 0;
}

