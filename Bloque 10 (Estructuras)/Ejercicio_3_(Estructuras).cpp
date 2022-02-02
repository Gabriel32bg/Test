/*Ejercicio 3. Realize un programa que lea en un arreglo de estructuras los datos N empleados de la empresa y que imprima los datos del empleados con 
mayor y menor salario.*/

#include <iostream>
#include <conio.h>

using namespace std;

struct info_empleados{
	char nombre['#'];
	char apellido['#'];
	int edad;
	char cargo['#'];
	double salario;
	
}empleados['N'];

int main(){
	int N, i, pos1, pos2;
	float menor=99999999999, mayor=0;
	cout<<"Por Favor Digite el Número de Empleados Registrados: ";cin>>N;
	
	for(i=0;i<N;i++){
		fflush(stdin);
		cout<<"\nDigite el Nombre del Empleado "<<i+1<<": ";cin.getline(empleados[i].nombre,'#','\n');
		cout<<"\nDigite el Apellido del Empleado "<<i+1<<": ";cin.getline(empleados[i].apellido,'#','\n');
		cout<<"\nDigite la Edad del Empleado "<<i+1<<": ";cin>>empleados[i].edad;
		fflush(stdin);
		cout<<"\nDigite el Cargo del Empleado "<<i+1<<": ";cin.getline(empleados[i].cargo,'#','\n');
		cout<<"\nDigite el Salario del Empleado "<<i+1<<": ";cin>>empleados[i].salario;
		cout<<"\n";
		
		if(empleados[i].salario>mayor){
			mayor=empleados[i].salario;
			pos1=i;
		}
		if(empleados[i].salario<menor){
			menor=empleados[i].salario;
			pos2=i;
		}
	}
	
	cout<<"\nDatos del Empleado con El Menor Salario\n"<<endl;
	cout<<"Nombre: "<<empleados[pos2].nombre<<endl;
	cout<<"Apellido: "<<empleados[pos2].apellido<<endl;
	cout<<"Edad: "<<empleados[pos2].edad<<endl;
	cout<<"Cargo: "<<empleados[pos2].cargo<<endl;
	cout<<"Salario: "<<empleados[pos2].salario<<endl;
	
	cout<<"\nDatos del Empleado con El Mayor Salario\n"<<endl;
	cout<<"Nombre: "<<empleados[pos1].nombre<<endl;
	cout<<"Apellido: "<<empleados[pos1].apellido<<endl;
	cout<<"Edad: "<<empleados[pos1].edad<<endl;
	cout<<"Cargo: "<<empleados[pos1].cargo<<endl;
	cout<<"Salario: "<<empleados[pos1].salario<<endl;

	getch();
	return 0;
}
