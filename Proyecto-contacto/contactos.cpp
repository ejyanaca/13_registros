#include <iostream>
#include "correo.h"
#include "leer_contacto.h"
#include "imprime.h"

using namespace std;

int main() {
    int n = 0, op, conta;
    string nom, user, domain, dominioBusqueda;
    char sex, sal, r;
    int edad;
    correo email;
    contactoEmail cont, lista[100];

    do {
        system("cls");
        cout << "Menu de opciones -------------------------" << endl;
        cout << "1. Agregar un contacto" << endl;
        cout << "2. Modificar un contacto" << endl;
        cout << "3. Mostrar contactos" << endl;
        cout << "4. Mostrar lista de contactos por dominio" << endl;
        cout << "5. Eliminar un contacto" << endl;
        cout << "0. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> op;

        switch (op) {
            case 1:
                cin.ignore();
                cout << "Ingrese el nombre del contacto: ";
                getline(cin, nom);
                cout << "Ingrese el sexo (M/F): "; cin >> sex;
                cout << "Ingrese la edad: "; cin >> edad;
                cout << "Ingrese el correo electronico:" << endl;
                cout << "\tUsuario: "; cin >> user;
                cout << "\tDominio: "; cin >> domain;
                leerCorreo(email, user, domain);
                leerContacto(cont, nom, sex, edad, email);
                lista[n++] = cont;
                system("pause");
                break;

            case 2:
                imprimeTabla(lista, n);
                cout << "Ingrese el numero de contacto a modificar: ";
                cin >> conta;
                cin.ignore();

                cout << "Modificar nombre? (S/N): "; cin >> r;
                if (r == 'S' || r == 's') {
                    cin.ignore();
                    cout << "Nuevo nombre: ";
                    getline(cin, lista[conta - 1].nom);
                }

                cout << "Modificar sexo? (S/N): "; cin >> r;
                if (r == 'S' || r == 's') cin >> lista[conta - 1].sex;

                cout << "Modificar edad? (S/N): "; cin >> r;
                if (r == 'S' || r == 's') cin >> lista[conta - 1].edad;

                cout << "nModificar correo? (S/N): "; cin >> r;
                if (r == 'S' || r == 's') {
                    cout << "Nuevo usuario: "; cin >> lista[conta - 1].email.user;
                    cout << "Nuevo dominio: "; cin >> lista[conta - 1].email.domain;
                }

                system("pause");
                break;
            case 3:
                for (int i = 0; i < n; ++i) {
                    cout << "Contacto #" << i + 1 << endl;
                    imprimeContacto(lista[i]);
                    cout << endl;
                }
                system("pause");
                break;

            case 4:
                cout << "Ingrese el dominio: ";
                cin >> dominioBusqueda;
                for (int i = 0; i < n; ++i) {
                    if (lista[i].email.domain == dominioBusqueda) {
                        cout << "Contacto #" << i + 1 << endl;
                        imprimeContacto(lista[i]);
                        cout << endl;
                    }
                }
                system("pause");
                break;
            case 5:
                cout << "Ingrese el numero de contacto a eliminar: ";
                cin >> conta;
                for (int i = conta - 1; i < n - 1; ++i) {
                    lista[i] = lista[i + 1];
                }
                n--;
                break;

            case 0:
                cout << "Está seguro de salir? (S/N): ";
                cin >> sal;
                if (sal != 'S' && sal != 's') op = -1;
                break;

            default:
                cout << "Opcion no valida!" << endl;
                system("pause");
                break;
        }

    } while (op != 0);

    return 0;
}
