/*Ejercicio 10. Escriba una función nombrada calc_año() que tenga un parámetro entero que represente el número total de días desde la fecha 1/1/2000 y parámetros
nombrados año, mes, día. La función es calcular el año, mes y día actual para el número d días que se le transmitan. Usando las referencias la función deberá 
alterar en forma directa los argumentos respectivos en la función que llama. Para éste problema suponga que cada año tiene 365 días y cada mes tiene 30 días.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipos de Funciones
void calc_anos(int, int&, int&, int&);

int main(){
	int totalDias, year, month, day;
	
	cout<<"Digite el número total de días: ";cin>>totalDias;
	
	calc_anos(totalDias, year, month, day);
	
	cout<<"\nFecha Actual: "<<day+1<<"/"<<month+1<<"/"<<year+2000<<endl;

	getch();
	return 0;
}
void calc_anos(int totalDias, int& year, int& month, int& day){
	year = totalDias/=365; totalDias%=365;
	month= totalDias/30;
	day= totalDias%30;
	
}
