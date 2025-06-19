#include<iostream>
#include<string>
using namespace std;

struct EMP{
    int num;
    string nom;
    float ven[12], sal;
};

int main(){
    EMP EMPLEADOS[100];
    int n,sum; 
    cout<<"Ingrese el numero de empleados: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Digite el numero del empleado: ";
        cin>>EMPLEADOS[i].num;
        cout<<endl; 
        cout<<"Escriba el nombre del empleado: ";
        cin.ignore();
        getline(cin,EMPLEADOS[i].nom);
        cout<<"Digite la venta de cada mes: "<<endl;
        for(int j=0; j<12; j++){
            cout<<"Mes "<<j+1<< " : ";
            cin>>EMPLEADOS[i].ven[j];
        }
        cout<<"Salario del empleado: ";
        cin>>EMPLEADOS[i].sal;
        cout<<endl;
        cout<<"-------------------------------------------------"<<endl;
    }
        for(int i=0; i<n; i++){
           cout<<"Empleado numero "<<i;
           cout<<EMPLEADOS[i].num;
           cout<<endl;  
           cin.ignore();
           cout<<"Nombre : ";
           cout<<(cin,EMPLEADOS[i].nom);
           cout<<endl;
           cout<<"La venta de cada mes es:  "<<endl;
           for(int j=0; j<12; j++){
            cout<<"Mes "<<j+1<<" : ";
               cout<<EMPLEADOS[i].ven[j]<<endl;
           }
        cout<<endl;
        cout<<"Salario : ";
        cout<<EMPLEADOS[i].sal<<endl;
    }

    return 0;
}