/*Ejercicio 8. Pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces aparece la vocal a, e, i, o, u; en la cadena de carateres.
Nota: Usar punteros.*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

//Prototipo de Funciones

void Datos();
void contador(char *);

char word['#'];
int countA=0, countE=0, countI=0, countO=0, countU=0;

int main(){
	Datos();
	contador(word);
	
	cout<<"\nTotal de Vocales 'A' en la Oración: "<<countA<<endl;
	cout<<"\nTotal de Vocales 'E' en la Oración: "<<countE<<endl;
	cout<<"\nTotal de Vocales 'I' en la Oración: "<<countI<<endl;
	cout<<"\nTotal de Vocales 'O' en la Oración: "<<countO<<endl;
	cout<<"\nTotal de Vocales 'U' en la Oración: "<<countU<<endl;


	getch();
	return 0;
}
void Datos(){
	cout<<"Digite una Frase de su Preferencia"<<endl;cin.getline(word,'#','\n');
	
	strupr(word);
}
void contador(char *Word){
	while(*Word){
		switch(*Word){
			case 'A': countA++;break;
			case 'E': countE++;break;
			case 'I': countI++;break;
			case 'O': countO++;break;
			case 'U': countU++;break;
		}
		*Word++;
	}
}