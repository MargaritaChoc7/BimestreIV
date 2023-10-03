#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	char palabra [100];
	int longitud;
	
	cout<< "Ingrese una cadena: ";
	gets (palabra);
	
	longitud=strlen (palabra);
	if (longitud >=10){
		cout<< "La palabra es: "<<palabra<<endl;
	}
	
	return 0;
	getch ();
}
