#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	
	int notas[5][7];
	
	for(int i=0; i<5; i++){
		for(int j=0; j<7; j++){
			cout<<"Ingresa las nota "<<j+1<<" del alumno No: "<<i+1<<endl;
			cin>>notas[i][j];
		}
	}

	for(int i=0; i<5; i++){
		for(int j=0; j<7; j++){
			cout<<notas[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0; i<5; i++ ){
		int sumafila=0;
		int prom=0;
		for(int j=0; j<7; j++ ){
		sumafila = sumafila + notas[i][j];		
		}
		prom=sumafila/7;
		cout<<"La suma del alumno es"<<sumafila<<endl;
		cout<<"El pormedio del alumno es"<<prom<<endl;
		
		if(prom=100){
			cout<<"Excelente"<<endl;
		}
		else{
			if(prom>=90){
			cout<<"Muy bien"<<endl;	
			}
			else{
			if(prom>=80){
			cout<<"Bien"<<endl;	
			}
			else{
			if(prom>=70){
			cout<<"Hay que mejorar"<<endl;	
			}	
			else{
				if(prom<70){
			    cout<<"Reprobado"<<endl;	
			}	
			else{
			}
			}
			}
			}
		}	
	}
	
	return 0;
	getch();
	
}
