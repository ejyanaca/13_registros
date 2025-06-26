#include<iostream>
#include<iomanip>
using namespace std;

struct correo{
    string user;
    string domain;
};

struct contactoEmail{
    string nom;
    char sex;
    int edad;
    correo email;
};

void leerCorreo(correo &, string, string);
void leerContacto(contactoEmail &, string, char, int, correo);
void imprimeContacto(contactoEmail &);
void imprimeTabla(contactoEmail[],int);


int main(){
    int n, op,conta;
    string nom, user, domain;
    char sex;
    int edad;
    correo email;
    contactoEmail cont, lista[100];
    n = 0;
    do{
        system("cls");
        cout<<"Menu de opciones -------------------------"<<endl;
        cout<<"1. Agregar un contacto"<<endl;
        cout<<"2. Modificar un contacto"<<endl;
        cout<<"3. Mostrar contactos"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Elige una opcion: "; cin>>op;
        switch(op){
            case 1:
                cout<<"Ingrese los datos de un usuario: "<<endl;
                cin.ignore();
                cout<<"Ingrese el nombre del contacto: "; getline(cin,nom);
                cout<<"Ingrese el sexo (M/F): "; cin>>sex;
                cout<<"Ingrese la edad: "; cin>>edad;
                cout<<"Ingrese el correo electronico (usuario@dominio): "<<endl;
                cout<<"\tIngrese el usuario: "; cin>>user;
                cout<<"\tIngrese el dominio: "; cin>>domain;
                
                leerCorreo(email,user,domain);
                leerContacto(cont,nom,sex,edad,email);
                //imprimeContacto(cont);

                lista[n] = cont;
                n++;
                system("pause");
                break;
            case 2:
            	imprimeTabla(lista, n);
                cout<<"Ingrese el numero del contacto que quiere modificar: "; cin>>conta;
                char r; 
                cin.ignore();
				cout<<"Modificar el nombre? (S/N): "; cin>>r;
				if(r=='S'||r=='s'){
					cin.ignore();
					cout<<"Ingrese el nuevo nombre: ";
                    getline(cin,lista[conta-1].nom);
				}
      			cout<<"Modificar sexo? (S/N): "; cin>>r;
      			if(r=='S'||r=='s'){
					cout<<"Ingrese el sexo: "; cin>>lista[conta-1].sex;
				}
                cout<<"Modificar la edad? (S/N): "; cin>>r;
                if(r=='S'||r=='s'){
					cout<<"Ingrese la edad: "; cin>>lista[conta-1].edad;
				}
                cout<<"Modificar el correo electronico? (S/N): "; cin>>r;
                if(r=='S'||r=='s'){
					cout<<"Ingrese el nuevo usuario: "; cin>>lista[conta-1].email.user;
                	cout<<"Ingrese el nuevo dominio: "; cin>>lista[conta-1].email.domain;
				}
                system("pause");
                break;
            case 3:
                for(int i = 0; i < n; i++){
                    cout<<"Contacto #"<<i+1<<endl;
                    imprimeContacto(lista[i]);
                    cout<<endl;
                }
                system("pause");
                break;
            case 0:
                char sal;
                cout<<"Esta seguro de salir? (S/N): "; cin>>sal;
                if(sal=='S'||sal=='s'){
                    op=0;
                }
                else{
                    op=-1;
                }
                break;
            default:
                cout<<"Opcion no valida!"<<endl;
                system("pause");
                break;
        }
    } while(op != 0);
    return 0;
}

void leerContacto(contactoEmail &c, string n, char s, int e, correo em){
    c.nom = n;
    c.sex = s;
    c.edad = e;
    c.email = em;
}

void leerCorreo(correo &c, string u, string d){
    c.user = u;
    c.domain = d;
}

void imprimeContacto(contactoEmail &c){
    cout<<"Nombre: "<<c.nom<<endl;
    cout<<"Sexo: "<<c.sex<<endl;
    cout<<"Edad: "<<c.edad<<endl;
    cout<<"Email: "<<c.email.user<<"@"<<c.email.domain<<endl;
}
void imprimeTabla(contactoEmail lista[],int n){
    cout<<left<<setw(5)<<"Nro:"
        <<setw(30)<<"Nombres"
        <<setw(6)<<"Sexo"
        <<setw(6)<<"Edad"
        <<"Correo electronico"<<endl;
    for (int i = 0; i < n; ++i) {
        cout << left << setw(5) << i + 1
             << setw(30) << lista[i].nom
             << setw(6) << lista[i].sex
             << setw(6) << lista[i].edad
             << lista[i].email.user + "@" + lista[i].email.domain << endl;
    }

}

