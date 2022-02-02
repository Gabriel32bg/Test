//Escriba un programa que calcule la ecuacion de segundo grado de la forma ax^2+bx+c=0 teniendo en cuenta que:

#include <iostream>
#include <math.h>

using namespace std;

int main (){
	float a, b, c, x1=0, x2=0;
	
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"\nDigite el valor de b: ";cin>>b;
	cout<<"\nDigite el valor de c: ";cin>>c;
	
	x1=(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
	x2=(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
	
	cout.precision(3);
	cout<<"\nEl resuntado de -x es: "<<x1;
	cout<<"\nEl resuntado de +x es: "<<x2;
	
	return 0;
}

