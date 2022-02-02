//Escriba un programa que lea dos numeros y determine cual de ellos es el mayor

#include <iostream>

using namespace std;

int main (){
	int a, b;
	
	cout<<"Digite el primer numero: ";cin>>a;
	cout<<"\nDigite el segundo numero: ";cin>>b;
	
	if(a>b){
		cout<<"\nEl numero de mayor valor es: "<<a<<endl;
	}
	else{
		cout<<"\nEl numero de mayor valor es: "<<b<<endl;
	}
	
	return 0;
}

