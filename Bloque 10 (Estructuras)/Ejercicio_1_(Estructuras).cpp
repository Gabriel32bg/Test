/*Ejercicio 1. Realize una estructura llamada corredor, en el cual se tendrán los siguientes campos:
nombre, edad, sexo y club, pedir datos al usuario para un corredor y asignarle una categoría de competición:
juvenil <=18.
señor <=40.
veterano >40.
Posteriormente imprimir todos los datos del corredor, incluida su categoria de competición.*/

#include <iostream>
#include <conio.h>
#include<string.h>

using namespace std;

struct competicion{
	char nombre['#'];
	int edad;
	char sexo['#'];
	char club['#'];
}c1;

int main(){
	char categoria['#'];
	int i;
	
	cout<<"Digite Su Nombre: ";cin.getline(c1.nombre,'#','\n');
	cout<<"Digite Su Edad: ";cin>>c1.edad;
	fflush(stdin);
	cout<<"Digite Su Sexo: ";cin.getline(c1.sexo,'#','\n');
	cout<<"Digite el Club o Escuderia al que este Asociado: ";cin.getline(c1.club,'#','\n');
	
	if(c1.edad<=18){
		strcpy(categoria,"Juvenil");
	}else if(c1.edad<=40){
		strcpy(categoria,"Señor");
	}else if(c1.edad>40){
		strcpy(categoria,"Veterano");
	}
	
	cout<<"\n\nDatos del Corredor\n\n";
	cout<<"Nombre: "<<c1.nombre<<endl;
	cout<<"Edad: "<<c1.edad<<endl;
	cout<<"Sexo: "<<c1.sexo<<endl;
	cout<<"Club ó Escuderia: "<<c1.club<<endl;
	cout<<"Categoría: "<<categoria<<endl;
	
	getch();
	return 0;
}
