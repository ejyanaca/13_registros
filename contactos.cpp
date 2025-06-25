#include<iostream>
using namespace std;
struct correo{
    string usuario;
    string domain;
};
struct contactoEmail{
    string nom;
    char sex;
    int edad;
    correo email;
};
int main(){
    int n,op;
    do{
         system("pause");
       cout<<"Menu de opciones: -----------------------------------"<<endl; 
       cout<<" 1. Agregar contactos"<<endl;
       cout<<" 0. Salir"<<endl;
       cout<<"Eliga una opcion: "; cin>>op;
       switch(op){
        case 1: 
            break;
        case 0: 
            cout<<"Saliendo del programa..."<<endl;
            break;
        default :
            cout<<"Opcion no valida.Intente nuevamente."<<endl;
            system("pause");
            break;
       }
    }while(op!=0);
    return 0;
}