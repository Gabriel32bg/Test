/*Escriba un progarma que calcula la suma de valores de 1+2+3...+n*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int numero, suma=0;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for(int i=1; i<=numero; i++){
		suma+=i;
	}
	
	cout<<"\nEl Resultado es: "<<suma<<endl;

	getch();
	return 0;
}

