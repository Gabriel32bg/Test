/*Ejercicio 11. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos: nombre, edad, promedio; pedir datos al usuario para tres alumnos,
comprobar cuál de los tres tiene el mejor promedio y posteriormente imprimir los datos del alumno.
Nota: Usar punteros a estructuras.*/

#include <iostream>
#include <conio.h>

using namespace std;

/*Estructuras*/
struct Alumno{
	char nombre['#'];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = alumno;

/*Prototipo de Funciones*/
void datos();
void muestra(Alumno *);

/*Variables Globales*/
float mayor=0.0;
int pos;

int main(){
	datos();
	muestra(puntero_alumno);

	getch();
	return 0;
}
void datos(){
	cout<<"Almacenamiento de Datos de los Alumnos"<<endl;
	
	cout<<"\n\n";
	
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Digite el Nombre del Alumno #"<<i+1<<": ",cin.getline((puntero_alumno+i)->nombre,'#','\n');
		cout<<"Digite la Edad del Alumno #"<<i+1<<": ";cin>>(puntero_alumno+i)->edad;
		cout<<"Digite el Promedio del Alumno #"<<i+1<<": ";cin>>(puntero_alumno+i)->promedio;
		
		if((puntero_alumno+i)->promedio > mayor){
			mayor = (puntero_alumno+i)->promedio;
			pos = i;
		}
		cout<<"\n\n";
	}	
}
void muestra(Alumno *puntero_alumno){
	cout<<"\n\nDatos del Alumno con Mayor Promedio\n\n";
	
	cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	cout<<"Promedio: "<<mayor<<endl;
}
