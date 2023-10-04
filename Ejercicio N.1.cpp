#include <iostream>


using namespace std;
int main() {
	
	int vectorN[4];
	int vectorR[4];
	int a;
	for(int i=0; i<=4; i++){
		cout<<"Por favor, ingresa un número en la posicion "<<i+1<<" "<<endl;
		cin>>vectorN[i];
	}
	for(int i=0; i<=4; i++){
		cout<<vectorN[i]<<" ";
	}
	for(int i=0; i<=4; i++){
		vectorR[i]=vectorN[i]*2;
	}
	cout<<endl;
	for(int i=0; i<=4; i++){
		cout<<vectorR[i]<<" ";	
	}
	return 0;
}
