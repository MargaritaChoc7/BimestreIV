#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;
int x;
int a;
char buscarnombre[20];
float aux;
string dato;
char band = 'F';
int main() {
	
	cout<<"Ingrese el n�mero de compa�eros de trabajo de la empresa."<<endl;
	cin>>x;
	
	struct datos{
	
	char nombre[20];
	int id;
	float salario;
	
}persona[x];

	cout<<"Ingresa los datos de los compa�eros de trabajo."<<endl;
	for(int i=0; i<x; i++){
		
	cin.ignore();	
	cout<<"Ingresa el nombre del compa�ero de trabajo "<<i+1<<endl;	
	cin.getline(persona[i].nombre,20,'\n');	
	
	cout<<"Ingresa la identificaci�n del compa�ero de trabajo "<<i+1<<endl;
	cin>>persona[i].id;
	
	cout<<"Ingresa el salario del compa�ero de trabajo "<<i+1<<endl;
	cin>>persona[i].salario;
	}
	
	
	while(a!=4){
	cout<<"�Qu� acci�n le gustar�a hacer ahora?"<<endl;
	cout<<"1. Encontrar al compa�ero de trabajo con el salario m�s alto."<<endl;
	cout<<"2. Encontrar al compa�ero de trabajo con el salario m�s bajo."<<endl;
	cout<<"3. Buscar un compa�ero de trabajo por nombre."<<endl;
	cout<<"4. SALIR"<<endl;
	cin>>a;
		
	switch(a){
	case 1: 
	for(int i=0; i<1; i++){
		
	if(persona[i].salario > persona[i+1].salario){
	aux = persona[i].salario;
	persona[i].salario = persona[i+1].salario;	
	persona[i].salario = aux;
	cout<<"El compa�ero de trabajo con el salario m�s alto es el al compa�ero de trabajo "<<i+1<<", de nombre "<<persona[i].nombre<<endl;
	}	
	}
	; break;
	case 2:
	for(int i=0; i<1; i++){
		
	if(persona[i].salario > persona[i+1].salario){
	aux = persona[i].salario;
	persona[i].salario = persona[i+1].salario;	
	persona[i+1].salario = aux;
	}
	cout<<"El compa�ero con el salario m�s bajo es compa�ero de trabajo "<<i+2<<", de nombre "<<persona[i+1].nombre<<endl;	
	}	
	; break;
	case 3:	
	cout<<"Ingrese el nombre del compa�ero de trabajo."<<endl;
	cin>>dato;
	
	int j;
	while((band == 'F')&&(j<x)){
		
		if(persona[j].nombre == dato){
			
		band = 'V';	
		
		}		
	j++;	
	}
	
	if(band == 'F'){
	cout<<"El nombre no se encuentra en la lista."<<endl;
	}
	else{
	cout<<"Los datos personales son:"<<endl;
	for(int j=0; j<1; j++){
	cout<<"Nombre: "<<persona[j].nombre<<endl;
	cout<<"Identificaci�n: "<<persona[j].id<<endl;
	cout<<"Salario: "<<persona[j].salario<<endl;
			
	}
	}
	; break;		
	
	case 4:
	cout<<"Usted ha salido del programa."<<endl;
	; break;	
	
	default: cout<<"Esta opci�n no es v�lida."<<endl; break;	
}
}
}
