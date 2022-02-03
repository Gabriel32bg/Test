/*Correspondencia entre arrays y punteros*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int vec[]={1,2,3,4,5,6,7,8,9,10};
	int *dir_vec;
	
	//dir_vec = &vec[0]
	dir_vec= vec; 
	
	for(int i=0;i<10;i++){
		cout<<"Elemento del Vector ["<<i<<"]: "<<vec[i]<<endl;
		cout<<"Posicion de Memoria: "<<dir_vec++<<endl;
		cout<<"\n";
		
	}

	getch();
	return 0;
}
