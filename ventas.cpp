#include<iostream>
#include<string>
using namespace std;
struct PRODUCTO{
    string nom;
    float precio;
};
struct VENTA{
    int idVenta;
    string producto;
    int cantidad;
    float ptotal;
};
int main(){
    int op;
    do{
        cout<<"--------MENU-------"<<endl;
        cout<<"1. Registrar un nuevo producto."<<endl;
        cout<<"2. Listar los productos registrados."<<endl;
        cout<<"3. Buscar un por nombre."<<endl;
        cout<<"4. Actualizar los datos de un producto."<<endl;
        cout<<"5. Eliminar un ";
    }while(op!=9);

    return 0;
}