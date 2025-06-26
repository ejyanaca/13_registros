#include<iostream>
#include<string>
using namespace std;

struct EMP{
    int num;
    string nom;
    float ven[12], sal;
    float ventt;
};

int main(){
    EMP EMPLEADOS[100];
    int n; 
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
        EMPLEADOS[i].ventt=0;
        for(int j=0; j<12; j++){
            cout<<"Mes "<<j+1<< " : ";
            cin>>EMPLEADOS[i].ven[j];
            EMPLEADOS[i].ventt=EMPLEADOS[i].ventt + EMPLEADOS[i].ven[j];
        }
        cout<<"Salario del empleado: ";
        cin>>EMPLEADOS[i].sal;
        cout<<endl;
        cout<<"-------------------------------------------------"<<endl;
    }
    for(int i=0; i<n; i++){
           cout<<"Empleado numero : ";
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
           cout<<"Venta total: "<<EMPLEADOS[i].ventt<<endl;
           cout<<"Salario : ";
           cout<<EMPLEADOS[i].sal<<endl;
           cout<<"-------------------------------------------------"<<endl;
    }
    for(int i=0; i<n; i++){
        if(EMPLEADOS[i].ventt > 100){
            float aumento=EMPLEADOS[i].sal * 0.10;
            EMPLEADOS[i].sal=EMPLEADOS[i].sal+aumento;
            cout<<endl;
            cout<<"Aumento aplicado al empleado: "<<EMPLEADOS[i].nom<<endl;
            cout<<"Venta totales : "<<EMPLEADOS[i].ventt<<endl;
            cout<<"Nuevo salario : "<<EMPLEADOS[i].sal<<endl;
        }
    }
    int num_t=0;
    float ven_max= EMPLEADOS[0].ventt;
    for(int i=1; i<n; i++){
        if(EMPLEADOS[i].ventt > ven_max){
            ven_max= EMPLEADOS[i].ventt; 
            num_t=i;
        }
    }
    cout<<"---------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"EMPLEADO CON MAYOR VENTAS ANUALES : "<<endl;
    cout<<"Empleado numero : "<<EMPLEADOS[num_t].num<<endl;
    cout<<"Nombre: "<<EMPLEADOS[num_t].nom<<endl;
    cout<<"Ventas totales: "<<EMPLEADOS[num_t].ventt<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"EMPLEADOS CON VENTAS MENORES A TREINTA EN DICIEMBRE:"<<endl;
    for(int i=0; i<n; i++){
        if(EMPLEADOS[i].ven[11]<30){
            cout<<"Numero : "<<EMPLEADOS[i].num<<endl;
            cout<<"Nombre : "<<EMPLEADOS[i].nom<<endl;
            cout<<"Ventas en diciembre: "<<EMPLEADOS[i].ven[11]<<endl;
            cout<<"---------------------------------------------------------"<<endl;
        }
    }
    return 0;
}
