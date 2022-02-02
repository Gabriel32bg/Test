//Sentencia if e if else

#include <iostream>

using namespace std;

int main (){
	int numero, dato = 5;
	
	cout<<"Digite un numero: "<<endl;cin>>numero;
	
	if(numero == dato){
		cout<<"\nEl numero digitado coincide";
	}
	else{
		cout<<"\nEl numero digitado no coincide";
	}
	
	return 0;
}

