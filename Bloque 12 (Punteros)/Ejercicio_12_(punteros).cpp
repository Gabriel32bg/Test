/*Ejercicio 12. Defina una estructura que indique el tiempo empleado por un ciclista en correr una etapa. La estructura debe tener tres campos: horas, minutos y 
segundos. Escriba un programa que dado tres etapas calcule el tiempo total empleado en correr todas las etapas.
Nota: Usar punteros.*/

#include <iostream>
#include <conio.h>

using namespace std;

/*Estructuras*/
struct carrera{
	int hora;
	int minuto;
	int segundo;
}etapas[3], *puntero_etapa = etapas;

/*Prototipos de Funciones*/
void datos();
void muestra(carrera *);

/*Variables Globales*/
int hT=0, mT=0, sT=0;

int main(){
	datos();
	muestra(puntero_etapa);

	getch();
	return 0;
}
void datos(){
	cout<<"Tiempos p/Etapas\n";
	
	for(int i=0;i<3;i++){
		cout<<"Horas de Etapa #"<<i+1<<": ";cin>>(puntero_etapa+i)->hora;
		cout<<"Minutos de Etapa #"<<i+1<<": ";cin>>(puntero_etapa+i)->minuto;
		cout<<"Segundos de Etapa #"<<i+1<<": ";cin>>(puntero_etapa+i)->segundo;
		cout<<"\n";
		
		hT+=(puntero_etapa+i)->hora;
		mT+=(puntero_etapa+i)->minuto;
		if(mT>=60){
			mT-=60;
			hT++;
		}
		sT+=(puntero_etapa+i)->segundo;
		if(sT>=60){
			sT-=60;
			mT++;
		}
		cout<<"\n\n";
	}
}
void muestra(carrera *puntero_etapa){
		cout<<"\nTiempo Total\n";
	cout<<"Horas: "<<hT<<endl;
	cout<<"Minutos: "<<mT<<endl;
	cout<<"Segundos: "<<sT<<endl;
	
}
