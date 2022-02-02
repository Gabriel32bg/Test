//Escribe un programa que lea de la entrada estandar el precio de un producto y muestre a la salida estandar el precio del producto al aplicarle el IVA 

#include <iostream>

using namespace std;

int main (){
	float producto, iva = 0, precio = 0;
	
	cout<<"Digite el Precio del Producto: ";cin>>producto;
	
	iva = producto * 0.12;
	precio = producto + iva;
	
	cout<<"\nEl subtotal es: "<<precio;

	return 0;
}

