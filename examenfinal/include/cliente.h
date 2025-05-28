
#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>

using namespace std;

class cliente
{
    private:
		string id, nombre, apellido, telefono, nit, direccion, correo, estatus;
	public:
		void menu();
		void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();
		void reporte();
		bool backupClientes ();
};

#endif // CLIENTE_H
