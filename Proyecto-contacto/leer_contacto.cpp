#include "leer_contacto.h"

void leerContacto(contactoEmail &c, const string &n, char s, int e, const correo &em) {
    c.nom = n;
    c.sex = s;
    c.edad = e;
    c.email = em;
}