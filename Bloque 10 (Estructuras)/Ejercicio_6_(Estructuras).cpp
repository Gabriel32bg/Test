/*Ejercicio 6. Utilizar las dos estructuras del Ejercicio 5, pero ahora pedir los datos para N alumnos, y calcular cúal de ellos tiene el mejor promedio, e 
imprimir sus datos.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Estructuras
struct promedio{
	float nota1;
	float nota2;
	float nota3;	
};
struct alumno{
	char nombre['#'];
	char sexo['#'];
	int edad;
	struct promedio prom_alumno;
}alumnos['N'];

int main(){
	float promedioAlumno=0, mayor=0;
	int i, N, pos;
	
	cout<<"Digite el Número Total de Alumnos: ";cin>>N;
	cout<<"\n\n";
	
	for(i=0;i<N;i++){
		fflush(stdin);
		cout<<"Digite el Nombre del Alumno #"<<i+1<<": ";cin.getline(alumnos[i].nombre,'#','\n');
		cout<<"Digite el Sexo del Alumno #"<<i+1<<": ";cin.getline(alumnos[i].sexo,'#','\n');
		cout<<"Digite la Edad del Alumno #"<<i+1<<": ";cin>>alumnos[i].edad;
		cout<<"\nA continuación Digite las Calificaciones Correspondientes\n";
		cout<<"Digite la 1era Calificación del Alumno #"<<i+1<<": ";cin>>alumnos[i].prom_alumno.nota1;
		cout<<"Digite la 2da Calificación del Alumno #"<<i+1<<": ";cin>>alumnos[i].prom_alumno.nota2;
		cout<<"Digite la 3ra Calificación del Alumno #"<<i+1<<": ";cin>>alumnos[i].prom_alumno.nota3;
		
		promedioAlumno = (alumnos[i].prom_alumno.nota1+alumnos[i].prom_alumno.nota2+alumnos[i].prom_alumno.nota3)/3;
		
		if(promedioAlumno>mayor){
			mayor=promedioAlumno;
			pos=i;
		}
		cout<<"\n\n";
	}
	
	cout<<"\nResultados\n"<<endl;
	cout<<"\nDatos Personales del Alumno"<<endl;
	cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
	cout<<"Sexo: "<<alumnos[pos].sexo<<endl;
	cout<<"Edad: "<<alumnos[pos].edad<<endl;
	cout<<"\nDatos Académicos del Alumno"<<endl;
	cout<<"1era Calificación: "<<alumnos[pos].prom_alumno.nota1<<endl;
	cout<<"2da Calificación: "<<alumnos[pos].prom_alumno.nota2<<endl;
	cout<<"3ra Calificación: "<<alumnos[pos].prom_alumno.nota3<<endl;
	cout<<"Promedio: "<<mayor<<endl;
	
	getch();
	return 0;
}
