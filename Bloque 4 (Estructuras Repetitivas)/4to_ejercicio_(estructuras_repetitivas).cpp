//Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo de 24 horas. Calcule la temperatura promedio del dia, la temperatura mas alta y la temperatura mas baja

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	float sumatotal=0, mayor=0, menor=99, promedio=0, temperatura;
	
	for(int i=0; i<=24; i+=4){
		cout<<"Digite la temperatura de la hora "<<i<<": ";cin>>temperatura;
		
		sumatotal+=temperatura; // ==> sumatotal = sumatotal + temperatura
		
		if(temperatura > mayor){
			mayor=temperatura;
		}
		if(temperatura < menor){
			menor=temperatura;
		}
	}
	
	promedio = sumatotal/6;
	
	cout.precision(3);
	cout<<"\nLa Temperatura Promedio del dia fue: "<<promedio<<endl;
	cout<<"La Temperatura mas Alta: "<<mayor<<endl;
	cout<<"La Temperatura mas Baja: "<<menor<<endl;


	getch();
	return 0;
}

