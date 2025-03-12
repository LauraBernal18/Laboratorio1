#include "Cuenta.h"
#include <iostream>
using namespace std;

Cuenta::Cuenta()
{
    //ctor
}

int Cuenta::getNumCuenta()
{
    return numCuenta;
}

void Cuenta::setNumCuenta(int newNumCuenta)
{
    numCuenta = newNumCuenta;
}

double Cuenta::getSaldo()
{
    return saldo;
}

void Cuenta::retirarDinero(double cantidad)
{
    if(cantidad > saldo){
        cout << "Saldo insuficiente" << endl;
    }
    else{
        saldo = saldo - cantidad;
    }
}
void Cuenta::consignarDinero(double cantidad)
{
    saldo = saldo + cantidad;
    cout << "Nuevo saldo: " << saldo << endl;

}

void Cuenta::mostrarClientes()
{
    for(int i = 0; i < clientes.size(); i++){
        cout << clientes[i] << endl;
    }
}


Cuenta::~Cuenta()
{
    //dtor
}
