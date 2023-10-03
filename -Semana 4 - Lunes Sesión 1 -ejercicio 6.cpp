#include <iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main (){
	string a[5];
    string dato;
	char band = 'F';
	
	cout<<"ingrese un nombre: "<<endl;
	
	for(int i=0;i<5;i++){
		
		cin>>a[i];
	}
	
	cout<<"\nIngrese el nombre a buscar: ";
	cin>>dato;
	
	int j;
	while((band == 'F')&&(j<5)){
		if(a[j]==dato){
			band = 'V';
		}
		j++;
	}
	 if(band == 'F'){
	 	cout<<"\El nombre a buscar no existe en el vector";
	 }
	 else if(band == 'V'){
	 	cout<<"El nombre"<<dato<<"fue encontrado en la pos "<<j;
	 }


 getch();
 return 0;
}
