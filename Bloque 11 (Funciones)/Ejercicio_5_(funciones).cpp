/*Ejercicio 5. Escriba una plantilla de funcion llamada despliegue() que despliegue el valor del argumento unico que se le transmite cuando es invocada la 
funcion*/

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de funcion
template <class TIPOD>
void despliegue (TIPOD dato);

int main (){
	int dato1= 2;
	float dato2=3.13;
	double dato3=3.5424322;
	char dato4 = 'a';
	
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);

	getch();
	return 0;
}
template <class TIPOD>
void despliegue (TIPOD dato){
	cout<<dato<<endl;
}
