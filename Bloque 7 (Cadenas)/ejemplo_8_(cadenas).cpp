/*funcion strlwr()*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char word['#']="HOLA MUNDO";
	
	strlwr(word);
	
	cout<<word<<endl;

	getch();
	return 0;
}

