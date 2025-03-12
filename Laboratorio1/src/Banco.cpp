#include "Banco.h"
#include <iostream>
using namespace std;

Banco::Banco()
{
    //ctor
}

void Banco::crearCliente(int id, string nombre, int telefono)
{
    Cliente nuevoCliente;
    nuevoCliente.setId(id);
    nuevoCliente.setNombre(nombre);
    nuevoCliente.setTelefono(telefono);
    clientesBanco.push_back(nuevoCliente);
}

void Banco::crearCuenta(int numCuenta,double saldo)
{
    Cuenta nuevaCuenta;  // Se crea una cuenta vacía
    nuevaCuenta.setNumCuenta(numCuenta);
    nuevaCuenta.consignarDinero(saldo);
    cuentasBanco.push_back(nuevaCuenta);  // Se agrega al vector
}



Banco::~Banco()
{
    //dtor
}
