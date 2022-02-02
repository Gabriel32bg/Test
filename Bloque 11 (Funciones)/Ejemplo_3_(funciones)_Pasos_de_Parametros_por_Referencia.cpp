/*Pasos de Parametros por Referencia*/

#include <iostream>
#include <conio.h>

//Prototipo de Funcion
void valNew (int&, int&);

using namespace std;

int main (){
	int num1, num2;
	
	cout<<"Digite los valores a guardar: ";cin>>num1>>num2;

	valNew(num1,num2);
	
	cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
	cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;
	
	getch();
	return 0;
}

void valNew (int& xnum, int& ynum){
	
	cout<<"El valor del primer numero es: "<<xnum<<endl;
	cout<<"El valor del segundo numero es: "<<ynum<<endl;
	
	xnum -= 3;
	ynum += 8;
	
}

