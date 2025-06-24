#include<iostream>
#include<string>
using namespace std;		 
struct EMP{
	string nom;
	string sex;
    double sul;
};
int main(){
    EMP EMPLEADOS[100];
	int n,may,men,num,nam;
	cout<<"Ingrese la cantidad de trabajadores : ";
	cin>>n;
	cout<<endl;
	for(int i=0; i<n; i++){
		cout<<"Ingrese el nombre del trabajador: ";
		cin>>EMPLEADOS[i].nom;
		cout<<"Ingrese su genero : ";
		cin>>EMPLEADOS[i].sex;
		cout<<"Ingrese el salario del empleado : ";
		cin>>EMPLEADOS[i].sul;
		cout<<endl;
	}
	cout<<endl<<endl;
	cout<<"TRABAJADORES DE LA EMPRESESA DATA TECH "<<endl;
	may=EMPLEADOS[0].sul;
	for(int i=1; i<n; i++){
		if(EMPLEADOS[i].sul > may){
			may=EMPLEADOS[i].sul;
			num=i;
		}
	}
	cout<<endl<<endl;
	cout<<"EMPLEADO CON MAYOR SUELDO: "<<endl;
	cout<<"Nombre: "<<EMPLEADOS[num].nom<<endl;
	cout<<"Sueldo: "<<EMPLEADOS[num].sul<<endl;
    cout<<endl<<endl;
    cout<<"EMPLEADO CON MENOR SUELDO: "<<endl;
    men=EMPLEADOS[1].sul;
    for(int i=0; i<n; i++){
		if(EMPLEADOS[i].sul < men){
			men=EMPLEADOS[i].sul;
			nam=i;
		}
	}
	cout<<"Nombre: "<<EMPLEADOS[nam].nom<<endl;
	cout<<"Sueldo: "<<EMPLEADOS[nam].sul<<endl;
    cout<<endl<<endl;
    return 0;	
}