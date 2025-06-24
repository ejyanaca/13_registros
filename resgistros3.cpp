#include<iostream>
using namespace std;
struct personas{
    string nom;
    int fecha[3];
};
int mai(){
    int n,mes;
    personas lista[100];
    cout<<"Ingrese la cantidad de personas: "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Person #"<<i+1<<" : "<<endl;
        cout<<"Ingrese los nombres: ";
        cin.ignore();
        getline(cin, lista[i].nom);
        cout<<"Ingrese la fecha (dd mm aaaaa): ";
        cin>>lista[i].fecha
    }
}