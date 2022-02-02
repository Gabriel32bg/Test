/*Ejercicio 4. Hacer un arreglo de estructura lamado atleta para N atletas que contenga los siguientes campos: nombre, pais, numero_medallas; y devuelva los datos
(nombre, pais) del atleta que ha ganado el mayor número de medallas.*/

#include <iostream>
#include <conio.h>

using namespace std;

//Estructura

struct atleta{
	char nombre['#'];
	char pais['#'];
	int numero_medallas;
}atletas['N'];

int main(){
	int N, i, pos, mayor=0;
	
	cout<<"Digite el Número Total de Atletas Participantes: ";cin>>N;
	
	for(i=0;i<N;i++){
		fflush(stdin);
		cout<<"Digite el Nombre del Atleta # "<<i+1<<": ";cin.getline(atletas[i].nombre,'#','\n');
		cout<<"Digite el Pais del Atleta # "<<i+1<<": ";cin.getline(atletas[i].pais,'#','\n');
		cout<<"Digite el Número de Medallas Ganadas por el Atleta # "<<i+1<<": ";cin>>atletas[i].numero_medallas;
		cout<<"\n\n\n";
		if(atletas[i].numero_medallas>mayor){
			mayor=atletas[i].numero_medallas;
			pos=i;
		}
	}
	
	cout<<"\nAtleta con Mayor Número de Medallas Ganadas\n"<<endl;
	cout<<"Nombre: "<<atletas[pos].nombre<<endl;
	cout<<"Pais: "<<atletas[pos].pais<<endl;
	
	getch();
	return 0;
}
