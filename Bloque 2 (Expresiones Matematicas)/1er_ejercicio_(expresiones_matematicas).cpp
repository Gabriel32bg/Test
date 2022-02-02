//Escribe la siguiente expresion matematica en C++

#include <iostream>

using namespace std;

int main (){
	float a, b, resultado = 0;
	
	cout<<"Digite el valor de a: "<<endl;cin>>a;
	cout<<"\nDigite el valor de b: "<<endl;cin>>b;
	
	resultado = (a/b)+1;
	
	
	cout.precision(2);//se utiliza para redondear el resultado de un numero flotante a solamente 2 decimales o el valor que es colocado en el "()"
	cout<<"\nEl Resultado es: "<<resultado<<endl;

	return 0;
}

