//Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo y muestre en la salida estandar su hipotenusa

#include <iostream>
#include<math.h>
using namespace std;

int main (){
	float catop, catad, hip = 0;
	
	cout<<"Digite el valor del Catero Opuesto: ";cin>>catop;
	cout<<"\nDigite el valor del Cateto Adyacente: ";cin>>catad;
	
	hip = sqrt(pow(catop,2)+pow(catad,2));
	
	cout.precision(3);
	cout<<"\nEl valor obtenido de la Hipotenusa del triangulo rectangulo es: "<<hip<<endl;

	return 0;
}

