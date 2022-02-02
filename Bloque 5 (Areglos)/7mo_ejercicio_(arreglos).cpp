/*Realize un programa que defina dos vectores de caracteres y despues almacene el valor de ambos en un nuevo vector situando en primer lugar los elementos del 
primer vector seguido de los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estandar*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	char letras1[]={'a','b','c','d','e'}, letras2[]={'f','g','h','i','j'}, letras3[10];
	
	for(int i=0; i<5; i++){
		letras3[i]=letras1[i];
	}
	
	for(int i=5; i<10; i++){
		letras3[i]=letras2[i-5];
	}
	
	for(int i=0; i<10; i++){
		cout<<i<<" -> "<<letras3[i]<<endl;
	}
	
	cout<<"\n\n\n";
	
	for(int i=9; i>-1; i--){
		cout<<i<<" -> "<<letras3[i]<<endl;
	}

	getch();
	return 0;
}

