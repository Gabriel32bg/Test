/*Ejercicio 9. Escriba una funcion llamada tiempo() que tenga un parametro llamado totalSeg y tres parametros de referencia llamados horas, min y seg. La funcion
es convertir el numero de segundos transmitidos en un equivalente de horas, minutos y segundos.*/

#include <iostream>
#include <conio.h>

//Prototipos de funciones
void tiempo (int totalSeg, int&, int&, int&);

using namespace std;

int main (){
	int tiempoT, hrs, min, seg;

	cout<<"Digite el valor a trasformar: "<<endl;cin>>tiempoT;
	
	tiempo(tiempoT, hrs, min, seg);
	
	cout<<"Horas: "<<hrs<<endl;
	cout<<"Minutos: "<<min<<endl;
	cout<<"Segundos: "<<seg<<endl;

	getch();
	return 0;
}
void tiempo (int totalSeg, int& horas, int& min, int& seg){
	horas = totalSeg/3600; totalSeg%=3600;
	min = totalSeg/60; totalSeg%=60;
	seg = totalSeg/1; totalSeg%=1;
}

