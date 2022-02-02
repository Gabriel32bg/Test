/*Ejercicio 2. Realize una estructura llamada alumno, en el cual se tendrán los siguientes campos:
nombre, edad, promedio, pedir los datos al usuario para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.*/

#include <iostream>
#include <conio.h>

using namespace std;

struct alumno{
	char nombre['#'];
	int edad;
	float promedio;
}alumnos[3];

int main(){
	float mayor=0;
	int pos, i;
	
	for(i=0;i<3;i++){
		fflush(stdin);
		//Guardando datos
		cout<<"Digite el Nombre del Alumno "<<i+1<<": ";cin.getline(alumnos[i].nombre,'#','\n');
		cout<<"Digite la Edad del Alumno "<<i+1<<": ";cin>>alumnos[i].edad;
		cout<<"Digite el Promedio del Alumno "<<i+1<<": ";cin>>alumnos[i].promedio;
		cout<<endl;
		//Comprobando datos
		if(alumnos[i].promedio>mayor){
			mayor=alumnos[i].promedio;
			pos=i;
		}
	}
	//Imprimiendo datos del mejor alumno
	cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
	cout<<"Edad: "<<alumnos[pos].edad<<endl;
	cout<<"Promedio: "<<alumnos[pos].promedio<<endl;

	getch();
	return 0;
}
