#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	int a, b;
	
	cout<<"Ingrese la cantidad de columnas a usar: ";
	cin>>a;
	cout<<"ingrese la cantidad de filas a usar: "<
	cin>>b;
	
	int Ruso[a][b];
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cout<<"Ingrese un numero para almacenar en la posicion "<<i+1<<", "<<j+1<<": ";
			cin>>Ruso[i][j];
		}
	}
	
	int maxsuma=0, columnamaxima=0;
	for(int i=0; i<a; i++){
		int sumacolumna=0;
		for(int j=0; j<b; j++){
            sumacolumna = sumacolumna+Ruso[j][i];

         	}
         	if(sumacolumna>maxsuma){
            	maxsuma=sumacolumna;
            	columnamaxima=i;
			}
         }
         
         
    for(int i=0; i<a; i++){
    	for(int j=0; j<b; j++){
    		cout<<Ruso[i][j]<<" ";
		}
    	cout<<endl;
	}
	cout<<"La suma maxima esta en la columna: "<<columnamaxima+1<<" es: "<<maxsuma;
	
	
	return 0;
	getch();
}
