/*Plantillas de Funciones*/

#include <iostream>
#include <conio.h>

using namespace std;

//prototipo de funcion
template <class TIPOD>
void mostrarABS (TIPOD num);

int main (){
	int num1 =-41;
	float num2 =-357.19;
	double num3 = -946.184823;
	
	mostrarABS(num1);
	mostrarABS(num2);
	mostrarABS(num3);
	
	getch();
	return 0;
}

template <class TIPOD>
void mostrarABS (TIPOD num){
	if(num<0){
		num*=-1;
	}
	cout<<"\nEl Valor Absoluto del numero es: "<<num<<endl;
}
