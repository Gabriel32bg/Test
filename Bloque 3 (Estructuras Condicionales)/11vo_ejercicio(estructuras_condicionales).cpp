//Realize un programa que simule un cajero automatico con un saldo inicial de 1000 dolares

#include <iostream>

using namespace std;

int main (){
	float saldoInicial=1000, saldoIngresado=0, saldoTotal=0, saldoRetirado=0;
	int opc;
	
	cout<<"\tBienvenido a su Cajero Automatico Virtual"<<endl;
	
	cout<<"\n1. Ingresar dinero";
	cout<<"\n2. Retirar dinero";
	cout<<"\n3. Salir";
	
	cout<<"\nDigite la Operacion a Realizar: ";cin>>opc;
	
	switch(opc){
		case 1: 
			cout<<"\nDigite el monto a Depositar en Cuenta: ";cin>>saldoIngresado;
			saldoTotal = saldoInicial + saldoIngresado;
			cout<<"\t\nOperacion Realizada Exitosamente";
			cout<<"\nSaldo en Cuenta: "<<saldoTotal;
			break;
		case 2: 
			cout<<"\nDigite el monto a Depositar en Cuenta: ";cin>>saldoRetirado;
			saldoTotal = saldoInicial - saldoRetirado;
			cout<<"\t\nOperacion Realizada Exitosamente";
			cout<<"\nSaldo en Cuenta: "<<saldoTotal;
			break;
		case 3:
			cout<<"\n\tGracias Por Utilizar Su Cajero Automatico Virtual"<<endl;
			break;
	}
	

	return 0;
}

