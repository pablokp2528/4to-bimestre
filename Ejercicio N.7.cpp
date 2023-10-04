#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//ERP

using namespace std;

struct Empleado{
	
	char nombre[20];
	float salario;
	char identificacion[30];
	
}emp[100];


int main() {
int n_empleados,posM=0,posm=0;
float mayor=0, menor = 999999;
int m;
int encontrado;


cout<<"Primero ingresa el numero de empleados que hay en el Caldazo"<<endl;
cin>>n_empleados;

while(m!=4){
cout << ".............Menu...........\n";
cout << "1. Ingresar Los datos de los Empleados (nombre, salario, identificacion)\n";
cout << "2. Muestra los empleados con salarios mas altos y mas bajos\n";
cout << "3. busca si esta el empleado por su nombre\n";
cout << "4. Salir\n\n";
cin>>m;

switch(m){
	
case 1:
for (int i=0; i<n_empleados; i++){
	fflush(stdin); //Hace que el for sirva
	
	cout<<"Digite el nombre: ";
	cin.getline(emp[i].nombre,20,'\n');
	
	cout<<"Digite su salario: ";
	cin>>emp[i].salario;
	
    fflush(stdin);
	cout<<"Digite su identificacion: ";
	cin.getline(emp[i].identificacion,30,'\n');
    
	//Empleado de mayor salario 
	if(emp[i].salario > mayor){
		mayor = emp[i].salario;
		posM = i;
		
	}
	if(emp[i].salario < menor){
		menor = emp[i].salario;
		posm = i;
	}
	cout<<"\n"<<"\n";	
}
break;

case 2:	
	cout<<"\nDatos del empleado con mayor salario:. \n";
	cout<<"Nombre: "<<emp[posM].nombre<<endl;
	cout<<"Salario: "<<emp[posM].salario<<endl;
	cout<<"Identificacion: "<<emp[posM].identificacion<<endl;
	
	cout<<"\nDatos del empleado con menor salario:. \n";
	cout<<"Nombre: "<<emp[posm].nombre<<endl;
	cout<<"Salario: "<<emp[posm].salario<<endl;	
	cout<<"Identificacion: "<<emp[posm].identificacion<<endl<<endl;	
break;	

case 3:
	
    char nombreBuscado[20];
    cout << "Ingrese el nombre del empleado que desea buscar: ";
    cin.ignore(); 
    cin.getline(nombreBuscado, 20, '\n');

    bool encontrado = false;

    for (int i = 0; i < n_empleados; i++) {
        if (strcmp(nombreBuscado, emp[i].nombre) == 0) {
            cout << "\nEmpleado encontrado:\n";
            cout << "Nombre: " << emp[i].nombre << endl;
            cout << "Salario: " << emp[i].salario << endl;
            cout << "Identificacion: " << emp[i].identificacion << endl;
            encontrado = true;
            cout<<"\n\n";
            break; // Se encontró el empleado, sal del bucle
        }
    }

    if (!encontrado) {
        cout << "Empleado no encontrado.\n\n";
    }

break;	
	
	
getch();
return 0;
}
}
}
