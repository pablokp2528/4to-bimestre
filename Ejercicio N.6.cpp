#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	int fila, columna;
	cout<<"Ingrese la cantidad de filas: "<<endl;
	cin>>fila;
	cout<<"Ingrese la cantidad de columnas: "<<endl;
	cin>>columna;
	
	int matriz[fila][columna];
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
		cout<<"Ingrese el dato en la posicion "<<i+1<<", "<<j+1<<endl;
		cin>>matriz[i][j];
		}
	}
	

	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
		cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	getch();
}
