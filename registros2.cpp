#include<iostream>
#include<string>
using namespace std;		 
struct PERSONA{
	string nom;
	string dni;
    int edad;
};
int main(){
	int n,cont=0,cant=0,prom;
	cout<<"Ingrese la cantidad de personas: ";
	cin>>n;
	PERSONA PER[100];
	cout<<endl;
	for (int i=0; i<n; i++){
		cout<<"PERSONA "<<i+1<<" : "<<endl;
		cout<<"Ingrese los nombres: ";
		cin>>PER[i].nom; 
		cout<<"Ingrese su DNI: ";
		cin>>PER[i].dni;
		cout<<"Ingrese su edad: ";
		cin>>PER[i].edad;
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<n; i++){
		if(PER[i].edad > 50){
			cant=cant+1;
		}
	}
	cout<<"La cantidad de personas mayores a cincuenta año es: "<<cant<<endl;
    cout<<endl;
	for(int i=0; i<n; i++){
		cont=cont + PER[i].edad;
	}
	prom=cont/n;
	cout<<"El promedio de las edades es: "<<prom<<endl<<endl;
	cout<<"DATOS DE LAS PERSONAS INGRESADAS: "<<endl<<endl;
	for (int i=0; i<n; i++){
		cout<<"PERSONA "<<i+1<<" : "<<endl;
		cout<<"Nombre: "<<PER[i].nom<<endl;
		cout<<"DNI: "<<PER[i].dni<<endl;
		cout<<"EDAD: "<<PER[i].edad<<endl;
		cout<<endl;
	}
	return 0;	
}