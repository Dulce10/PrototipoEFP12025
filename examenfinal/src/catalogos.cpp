#include "catalogos.h"
#include "cliente.h"
#include "usuarios.h"

#include <iostream>
using namespace std;

extern usuarios usuariosrRegistrado;

//Declaracion de objetos
cliente clientes;
proveedor proveedores;
acreedor acreedores;

Catalogos::Catalogos()
{
    //ctor
}

void Catalogos::menuCatalogos(){
    int opciones;
    do{
        system("cls"); // Limpia la pantalla
        cout << "\t\t\tUsuario en linea: " << usuariosrRegistrado.getNombre() << "\n" << endl;
        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"\t\t\t |   Menu de catalogos        |"<<endl;
        cout<<"\t\t\t-------------------------------"<<endl;
        cout <<"\t\t\t1. Catalogo de Clientes" << endl;
        cout <<"\t\t\t2. Volver al menu principal" << endl;

        cout<<"\t\t Opcion a escoger:[1/2]"<<endl;
        cout << "\n\t\t Ingrese una opcion: ";
        cin >> opciones;

        switch (opciones) {
            case 1:
                clientes.menu();
                break;
            case 2:
                break;
            default:
                cout << "n\t\tOpción no válida. Intente de nuevo" << endl;
                system("pause");
        }
    } while (opciones != 2); // Repite el menú hasta que el usuario quiera salir
}
