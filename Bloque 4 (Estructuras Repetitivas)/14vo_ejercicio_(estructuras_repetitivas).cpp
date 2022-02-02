/*En una clase de cinco alumnos se han realizado tres examenes y se requiere determinar que:
a) Que alumnos aprobaron todos los examenes
b) Que alumnos al menos un examen
c) Que alumnos aprobaron unicamente el ultimo examen
Realize un programa que permita la lectura de los datos y el calculo de las estadisticas
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int aprobadosTodos=0, aprobadosUno=0, aprobadosUltimo=0;
	float examen1, examen2, examen3;
	
	for(int i=1; i<=5; i++){
		cout<<i<<". Digite la calificacion del primer examen: ";cin>>examen1;
		cout<<i<<". Digite la calificacion del segundo examen: ";cin>>examen2;
		cout<<i<<". Digite la calificacion del tercer examen: ";cin>>examen3;
		cout<<"\n\n";
		
		if((examen1>10.5)&&(examen2>10.5)&&(examen3>10.5)){
			aprobadosTodos++;
		}
		if((examen1>10.5)||(examen2>10.5)||(examen3>10.5)){
			aprobadosUno++;
		}
		if((examen1<10.5)&&(examen2<10.5)&&(examen3>10.5)){
			aprobadosUltimo++;
		}
		
	}

		cout<<"El Total de Alumnos que aprobaron el todos los Examenes es: "<<aprobadosTodos<<endl;
		cout<<"El Total de Alumnos que aprobaron al menos Examen es: "<<aprobadosUno<<endl;
		cout<<"El Total de Alumnos que aprobaron solo el 3er Examen es: "<<aprobadosUltimo<<endl;

	getch();
	return 0;
}

