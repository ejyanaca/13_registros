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
    int n;
    cout<<"Ingrese el numero de empleados."<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Digite el numero del empleado: ";
        cin>>EMPLEADOS[i].num;
        cout<<"Escriba el nombre del empleado: ";
        cin.ignore();
        getline(cin,EMPLEADOS[i].nom);
        cout<<"Digite la venta de cada mes: ";
        for(int j=0; j<12; j++){
            cin>>EMPLEADOS[i].ven[j];
        }
        cout<<"Salario del empleado: ";
        cin>>EMPLEADOS[i].sal;
    }
        for(int i=0; i<n; i++){
           cout<<"Empleado numero "<<i;
           cout<<EMPLEADOS[i].num;
           cout<<" "; 
           cin.ignore();
           cout<<(cin,EMPLEADOS[i].nom);
           cout<<" ";
           cout<<"Venta por cada mes: ";
           for(int j=0; j<12; j++){
               cout<<EMPLEADOS[i].ven[j]<<" ";
           }
           cout<<endl;
        cout<<EMPLEADOS[i].sal;
    }

    return 0;
}