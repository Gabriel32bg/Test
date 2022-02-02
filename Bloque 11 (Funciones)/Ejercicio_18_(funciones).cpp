/*Ejercicio 18. Escriba una función en C++ llamada mayor() que devuelva la fecha más reciente de cualquier par de fechas que se le transmitan.
Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015 a mayor sera devuelta la segunda fecha.*/

#include <iostream>
#include <conio.h>


using namespace std;

//Estructura
struct fecha{
	int year;
	int month;
	int day;
}f1,f2;

//Prototipo de Funciones
void pedirDatos();
fecha mayor(fecha, fecha);
void mostrar(fecha);

fecha mayorFecha;
char band='F';

int main(){
	pedirDatos();
	
	fecha x = mayor(f1,f2);
	
	mostrar(x);

	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Primera Fecha"<<endl;
	cout<<"\nDigite el Dia: ";cin>>f1.day;
	cout<<"Digite el Mes: ";cin>>f1.month;
	cout<<"Digite el Año: ";cin>>f1.year;
	cout<<"\n\n";
	cout<<"Segunda Fecha"<<endl;
	cout<<"\nDigite el Dia: ";cin>>f2.day;
	cout<<"Digite el Mes: ";cin>>f2.month;
	cout<<"Digite el Año: ";cin>>f2.year;
	

}

fecha mayor(fecha f1, fecha f2){
	
	if((f1.day>f2.day)&&(f1.month>f2.month)&&(f1.year>f2.year)){
		mayorFecha=f1;
	}else{
	mayorFecha=f2;
	}	

	return mayorFecha;
}

void mostrar(fecha x){
	cout<<"\nLa Fecha mas Actual es:"<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
}