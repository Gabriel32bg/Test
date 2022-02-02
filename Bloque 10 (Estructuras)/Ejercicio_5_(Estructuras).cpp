/*Ejercicio 5. Hacer dos estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3; y otra llamada alumno que tendrá los siguientes 
campos: nombre, sexo, edad; hacer que la estructura promedio este anidada dentro de la estructura alumno, luego pedir todos los datos de un alumno al usuario, 
luego calcular su promedio, por último imprimir todos sus datos incluido el promedio.*/

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
}a1;

int main(){
	float promedioAlumno=0;
	
	cout<<"Digite el Nombre del Alumno: ";cin.getline(a1.nombre,'#','\n');
	cout<<"Digite el Sexo del Alumno: ";cin.getline(a1.sexo,'#','\n');
	cout<<"Digite la Edad del Alumno: ";cin>>a1.edad;
	cout<<"\nA continuación Digite las Calificaciones Correspondientes\n";
	cout<<"Digite la 1era Calificación: ";cin>>a1.prom_alumno.nota1;
	cout<<"Digite la 2da Calificación: ";cin>>a1.prom_alumno.nota2;
	cout<<"Digite la 3ra Calificación: ";cin>>a1.prom_alumno.nota3;
	
	promedioAlumno = (a1.prom_alumno.nota1+a1.prom_alumno.nota2+a1.prom_alumno.nota3)/3;
	
	cout<<"\nResultados\n";
	cout<<"Datos Personales del Alumno"<<endl;
	cout<<"Nombre: "<<a1.nombre<<endl;
	cout<<"Sexo: "<<a1.sexo<<endl;
	cout<<"Edad: "<<a1.edad<<endl;
	cout<<"Datos Académicos del Alumno"<<endl;
	cout<<"1era Calificación: "<<a1.prom_alumno.nota1<<endl;
	cout<<"2da Calificación: "<<a1.prom_alumno.nota2<<endl;
	cout<<"3ra Calificación: "<<a1.prom_alumno.nota3<<endl;
	cout<<"Promedio: "<<promedioAlumno<<endl;

	cout.precision(2);
	getch();
	return 0;
}
