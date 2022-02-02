/*Copiar contenido de una cadena con la Funcion strcpy()*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char nombre['#'], nombre2['#'];
	
	cout<<"Digite una frace de su preferencia: ";cin.getline(nombre, 100, '\n');
	
	//strcpy(variable_en_la_cual_queremos_pegar_el_contenido , variable_de_la_cual_queremos_copiar_el_contenido);
	strcpy(nombre2, nombre);
	
	cout<<nombre2<<endl;
	
	getch();
	return 0;
}

