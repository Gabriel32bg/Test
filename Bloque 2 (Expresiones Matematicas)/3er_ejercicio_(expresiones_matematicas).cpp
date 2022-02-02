//Escribe la siguiente expresion matematica en C++

#include <iostream>

using namespace std;

int main (){
	float a, b, c, d, e, f, resultado = 0;
	
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"\nDigite el valor de b: ";cin>>b;
	cout<<"\nDigite el valor de c: ";cin>>c;
	cout<<"\nDigite el valor de d: ";cin>>d;
	cout<<"\nDigite el valor de e: ";cin>>e;
	cout<<"\nDigite el valor de f: ";cin>>f;
	
	resultado = (a+(b/c))/(d+(e/f));
	
	cout.precision(2);
	cout<<"\nEl Resultado es: "<<resultado;

	return 0;
}

