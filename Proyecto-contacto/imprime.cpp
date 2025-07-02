#include "imprime.h"

void imprimeContacto(const contactoEmail &c) {
    cout << "Nombre: " << c.nom << endl;
    cout << "Sexo: " << c.sex << endl;
    cout << "Edad: " << c.edad << endl;
    cout << "Email: " << c.email.user << "@" << c.email.domain << endl;
}

void imprimeTabla(contactoEmail lista[], int n) {
    cout << left << setw(5) << "Nro:"
         << setw(30) << "Nombres"
         << setw(6) << "Sexo"
         << setw(6) << "Edad"
         << "Correo electronico" << endl;

    for (int i = 0; i < n; ++i) {
        cout << left << setw(5) << i + 1
             << setw(30) << lista[i].nom
             << setw(6) << lista[i].sex
             << setw(6) << lista[i].edad
             << lista[i].email.user + "@" + lista[i].email.domain << endl;
    }
}