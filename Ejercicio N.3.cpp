#include <iostream>
#include <conio.h>

using namespace std;

int main(){
   int Ruso[5][5];
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
		cout<< "Ingrese un numero para almacenar en la posicion " << i + 1<< ", " << j + 1 << ": ";
		cin>> Ruso [i][j];
		
    	}	
	}
	int maxsuma=0, filamaxima=0;
	
	for(int i=0; i<5; i++ ){
		int sumafila=0;
		for(int j=0; j<5; j++ ){
			
			sumafila = sumafila + Ruso[i][j];
		 
		}
		
		if(sumafila>maxsuma){
			maxsuma=sumafila;
			filamaxima=i;		
		}	
	}
	
	cout<< "\n Imprimiendo matriz...\n";	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
		
		cout<< Ruso[i][j] << " ";
		}	
    	cout<<endl;
	}
	
	cout<< "La fila " << filamaxima + 1 << " tiene una suma de " << maxsuma;
	
	  int Ceros=0, Positivos=0, Negativos=0;

    for (int i=0; i<5; i++) {	
        for (int j=0; j<5; j++) { 	
            if (Ruso[i][j]==0) {
                Ceros++;       
                
            } else if(Ruso[i][j]>0) {
              Positivos++;      
			    
            } else {	
              Negativos++;
               
            }
        }
    }
    
    cout << endl;
    
    cout << "Numero de ceros: " << Ceros << endl;
    cout << "Numero de positivos: " << Positivos << endl;
    cout << "Numero de negativos: " << Negativos << endl;
	
	return 0;
	
}
