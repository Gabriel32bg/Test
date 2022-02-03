/*Punteros- Declaración de un Puntero*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num, *dir_num;
	
	cout<<"Digite un Número: ";cin>>num;
	
	dir_num=&num;

	cout<<"Número: "<<*dir_num<<endl;
	cout<<"Dirección en Memoria: "<<dir_num<<endl;
	
	getch();
	return 0;
}
