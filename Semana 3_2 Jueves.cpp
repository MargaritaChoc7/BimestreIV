#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char palabra []= "Hola";
	char palabra2 [30];
	
	strcpy (palabra2,palabra);
	cout<<palabra2;
	
	getch();
	return 0;
}
