/*Ejercicio 8. Defina una estructura que sirva para representar a una persona.
La estructura debe contener dos campos: el nombre de la persona y un valor de tipo lógico que indíca si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos vectores nuevos: uno que contenga a las personas que no tienen discapacidad y otro que contenga
las personas con discapacidad.*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

//Estructura

struct persona{
	char nombre['#'];
	bool discapacidad;
}person['N'], personConD['#'], personSinD['#'];

int main(){
	int N, i, j=0, k=0;

	cout<<"Digite el Número de Personas a Registrar: ";cin>>N;
	cout<<"\n\n";
	
	for(i=0;i<N;i++){
		fflush(stdin);
		cout<<"Digite el Nombre de la Persona N° "<<i+1<<": ";cin.getline(person[i].nombre,'#','\n');
		cout<<"Digite 1 para Si ó 0 para No, si la Persona N°"<<i+1<<" Posee Discapacidad: ";cin>>person[i].discapacidad;
		cout<<"\n";
		
		if(person[i].discapacidad==1){
			strcpy(personConD[j].nombre, person[i].nombre);
			j++;
		}
		else if(person[i].discapacidad==0){
			strcpy(personSinD[k].nombre, person[i].nombre);
			k++;
		}
	}
	
	cout<<"\nPersonas Con Discapacidad\n";
	for(i=0;i<j;i++){
		cout<<"Nombre: "<<personConD[i].nombre<<endl;
	}
	cout<<"\nPersonas Sin Discapacidad\n";
	for(i=0;i<k;i++){
		cout<<"Nombre: "<<personSinD[i].nombre<<endl;
	}

	getch();
	return 0;
}
