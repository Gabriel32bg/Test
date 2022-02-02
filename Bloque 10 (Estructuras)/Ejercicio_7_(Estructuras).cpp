/*Ejercicio 7. Defina una estructura que indique el tiempo empleado por un ciclista en completar una etapa. La estructura debe tener los siguientes campos:
horas, minutos y segundo. 
Escriba un programa que dado N etapas calcule el tiempo total empleado en correr todas las etapas.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Estructura

struct tiempo{
	int horas;
	int minutos;
	int segundos;
}etapas['N'];

int main(){
	int N, i, horasT=0, minutosT=0, segundosT=0;
	
	cout<<"Digite el Número de Etapas de la Carrera: ";cin>>N;
	
	for(i=0;i<N;i++){
		cout<<"Etapa #"<<i+1<<endl;
		cout<<"\nHoras: ";cin>>etapas[i].horas;
		cout<<"Minutos: ";cin>>etapas[i].minutos;
		cout<<"Segundos: ";cin>>etapas[i].segundos;
		
		horasT= horasT + etapas[i].horas;
		minutosT= minutosT + etapas[i].minutos;
		if(minutosT>=60){
			minutosT-=60;
			horasT++;
		}
		segundosT= segundosT + etapas[i].segundos;
		if(segundosT>=60){
			segundosT-=60;
			minutosT++;
		}
		cout<<"\n\n";
	}

	cout<<"\nTiempo Total\n";
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
	
	getch();
	return 0;
}
