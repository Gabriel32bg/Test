//Escribe un programa que lea de la entrada estandar tres numeros. Despues debe leer un cuarto numero e indicar si coincide con alguno de los digitados anteriormente

#include <iostream>

using namespace std;

int main (){
	int a, b, c, d;
	
	cout<<"Digite el 1er numero: ";cin>>a;
	cout<<"\nDigite el 2do numero: ";cin>>b;
	cout<<"\nDigite el 3er numero: ";cin>>c;
	
	cout<<"\n\nDigite el 4to numero: ";cin>>d;
	
		if(d==a){
			cout<<"\nEl 4to numero coincide con el 1er numero";
		}
		else if (d==b){
			cout<<"\nEl 4to numero coincide con el 2do numero";
		}
		else if (d==c){
			cout<<"\nEl 4to numero coincide con el 3er numero";
		}
		else{
			cout<<"\nNinguno de los numero coincide";	
		}

	return 0;
}

