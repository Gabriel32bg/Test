/*Ejercicio 6. Escriba una Planilla de funcion llamada maximo() que devuelva el valor maximo de tres argumentos que se le transmitan a la funcion cuando es 
llamada. Suponga que los tres argumentos seran del mismo tipo de dato*/

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipos de fnciones
template <class T>
T maximo( T dato1, T dato2, T dato3);

int main (){
	int dato1=3, dato2=4, dato3=1;
	
	cout<<"El mayor de los argumentos es: "<<maximo(dato1,dato2,dato3)<<endl;

	getch();
	return 0;
}
template <class T>
T maximo( T dato1, T dato2, T dato3){
	T max;
	
	if((dato1>=dato2)&&(dato1>=dato3)){
		max = dato1;
	}else if((dato2>=dato1)&&(dato2>=dato3)){
		max = dato2;
	}else if((dato3>=dato1)&&(dato3>=dato2)){
		max = dato3;
	}
	
	return max;
}

