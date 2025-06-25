#include<iostream>
#include<string>
using namespace std;

struct ATLETA{
    string nom;
    string pais;
    string dis;
    int num;
};

int main(){
    ATLETA DATOS[100];
    int n;
    string pas;
    cout<<"Ingrese la cantidad de atletas : ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Atleta #"<<i+1<<" : "<<endl;
        cout<<"Ingrese el nombre del atleta : "; 
        cin>>DATOS[i].nom;
        cout<<"Ingrese el pais : ";
        cin>>DATOS[i].pais;
        cout<<"Ingrese su disciplina : ";
        cin>>DATOS[i].dis;
        cout<<"Ingrese el numero de medallas: ";
        cin>>DATOS[i].num;
        cout<<endl;
    }
    int max=0,indice;
    cout<<"Ingrese un pais: "; cin>>pas;
    cout<<"\nAtletas de "<<pas<<" : "<<endl;
    for(int i=0; i<n; i++){
        if(DATOS[i].pais==pas){
              cout<<"Nombre : "<<DATOS[i].nom<<endl;
              cout<<"Disciplina: "<<DATOS[i].dis<<endl;
              cout<<"Numero de medallas : "<<DATOS[i].num<<endl;
              cout<<endl; 
              if(DATOS[i].num>max){
                    max=DATOS[i].num;
                    indice=i;
              }
        }
    }
    cout<<"Atleta con mayor medallas de "<<pas<<" : "<<endl;
    cout<<"Nombre : "<<DATOS[indice].nom<<endl;
    cout<<"Disciplina: "<<DATOS[indice].dis<<endl;
    cout<<"Numero de medallas : "<<DATOS[indice].num<<endl;
    return 0;
}