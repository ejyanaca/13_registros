#ifndef LEER_CONTACTO_H
#define LEER_CONTACTO_H

#include "correo.h"
struct contactoEmail {
    string nom;
    char sex;
    int edad;
    correo email;
};

void leerContacto(contactoEmail &, const string &, char, int, const correo &);

#endif