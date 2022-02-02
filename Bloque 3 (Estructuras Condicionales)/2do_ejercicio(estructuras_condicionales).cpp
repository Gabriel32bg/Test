//Escriba un programa que lea tres numeros y determine cual de ellos es el mayor

#include <iostream>

using namespace std;

int main (){
	int a, b, c;
	
	cout<<"Digite el primer numero: ";cin>>a;
	cout<<"\nDigite el segundo numero: ";cin>>b;
	cout<<"\nDigite el tercer numero: ";cin>>c;
	
	if(a>b&&a>c){
		cout<<"\nEl numero de mayor valor es: "<<a<<endl;
	}
	else if(b>a&&b>c){
		cout<<"\nEl numero de mayor valor es: "<<b<<endl;
	}
	else{
		cout<<"\nEl numero de mayor valor es: "<<c<<endl;
	}

	return 0;
}

