#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	
	int matriz[3][3];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Ingresa el dato en la posicion "<<i+1<<", "<<j+1<<endl;
			cin>>matriz[i][j];
		}
	}
	
	for(int i=0; i<3; i++){
		cout<<matriz[i][i]<<" ";
	}
	return 0;
	getch();
}
