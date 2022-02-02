//Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos

#include <iostream>

using namespace std;

int main (){
	float a, b, c, d, promedio = 0;
	
	cout<<"Digite la primera nota: ";cin>>a;
	cout<<"\nDigite la segunda nota: ";cin>>b;
	cout<<"\nDigite la tercera nota: ";cin>>c;
	cout<<"\nDigite la cuarta nota: ";cin>>d;
	
	promedio = (a+b+c+d)/4;
	
	cout.precision(3);
	cout<<"\nEl promedio de notas obtenidas es: "<<promedio<<endl;

	return 0;
}

