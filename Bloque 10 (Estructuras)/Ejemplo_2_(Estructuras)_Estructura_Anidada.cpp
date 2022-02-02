/*Estructuras Anidadas en C++.*/
//fflush(stdin): se utiliza para vaciar el buffer de una arreglo de estructura y permitir ingresar datos.

#include <iostream>
#include <conio.h>

using namespace std;

struct info_direcciones{
	char direccion['#'];
	char ciudad['#'];
	char estado['#'];
};
struct empleado{
	char nombre['#'];
	struct info_direcciones dir_empleado;
	double salario;	
}empleados['n'];

int n, i;

int main(){
	cout<<"Por Favor Digite el Número Toral de Empleados: ";cin>>n;
	
	for(i=0;i<n;i++){
		fflush(stdin);
		cout<<"Digite Su Nombre: ";cin.getline(empleados[i].nombre,'#','\n');
		cout<<"Digite Su Dirección: ";cin.getline(empleados[i].dir_empleado.direccion,'#','\n');
		cout<<"Digite Su Ciudad: ";cin.getline(empleados[i].dir_empleado.ciudad,'#','\n');
		cout<<"Digite Su Estado: ";cin.getline(empleados[i].dir_empleado.estado,'#','\n');
		cout<<"Digite Su Salario: ";cin>>empleados[i].salario;
		cout<<endl;
	}
	
	for(i=0;i<n;i++){
		cout<<i+1<<". Nombre: "<<empleados[i].nombre<<endl;
		cout<<i+1<<". Dirección: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<i+1<<". Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<i+1<<". Estado: "<<empleados[i].dir_empleado.estado<<endl;
		cout<<i+1<<". Salario"<<empleados[i].salario<<endl;
		cout<<endl;
	}

	getch();
	return 0;
}
