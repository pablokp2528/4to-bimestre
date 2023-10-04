#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main() {
	char palabra[20];
	int longitud;
	
	cout<<"Ingrese una cadena de palabras"<<endl;
	gets(palabra);

	
	longitud = strlen(palabra);
	if(longitud>10){
	cout<<palabra<<" supera los 10 caracteres con exactamente "<<longitud<<" caracteres"<<endl;
    }
	return 0;
	getch();
}
