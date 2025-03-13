#include "Banco.h"
#include <iostream>
using namespace std;

Banco::Banco()
{
    //ctor
}

// Crear un nuevo cliente y agregarlo al banco
void Banco::crearCliente(int id, string nombre, int telefono)
{
    Cliente nuevoCliente(id, nombre, telefono);
    clientesBanco.push_back(nuevoCliente);
}

// Crear una nueva cuenta y agregarla al banco
void Banco::crearCuenta(int numCuenta,double saldo)
{
    Cuenta nuevaCuenta(numCuenta, saldo);
    cuentasBanco.push_back(nuevaCuenta);
    cout << "Cuenta creada con exito.\n"<<endl;
}

// Retirar dinero de una cuenta específica
void Banco::retirarDinero(int numCuenta, double cantidad)
{
    for (int i = 0; i < cuentasBanco.size(); i++) {
        if (cantidad > cuentasBanco[i].getSaldo()) {
            cout << "Saldo insuficiente.\n"<<endl;
        }
        else if(cuentasBanco[i].getNumCuenta() == numCuenta) {
            cuentasBanco[i].setSaldo(cuentasBanco[i].getSaldo() - cantidad);
            cout << "Retiro exitoso. Nuevo saldo: " << cuentasBanco[i].getSaldo()<< "\n"<<endl;
            return;
        }
    }
    cout << "Cuenta no encontrada.\n"<<endl;
}

// Consignar dinero en una cuenta específica
void Banco::consignarDinero(int numCuenta, double cantidad)
{
    for (int i = 0; i < cuentasBanco.size(); i++) {
        if(cantidad <= 0){
            cout << "Cantidad no valida.\n"<<endl;
        }
        else if (cuentasBanco[i].getNumCuenta() == numCuenta) {
            cuentasBanco[i].setSaldo(cuentasBanco[i].getSaldo() + cantidad);
            cout << "Consignación exitosa. Nuevo saldo: " << cuentasBanco[i].getSaldo() << "\n" << endl;
            return;
        }
    }
    cout << "Cuenta no encontrada.\n" << endl;
}

// Imprimir informe de todas las cuentas
void Banco::imprimirInforme()
{
    if (cuentasBanco.size() == 0) {
        cout << "No hay cuentas registradas en el banco.\n";
        return;
    }
    else;
    cout << "===== INFORME DE CUENTAS =====\n";
    for (int i = 0; i < cuentasBanco.size(); i++) {
        cout << "Numero de cuenta: " << cuentasBanco[i].getNumCuenta() << "\n";
        cout << "Saldo: " << cuentasBanco[i].getSaldo() << "\n";
        cout << "-----------------------------\n" <<endl;
    }
}

// Calcular el saldo promedio de todas las cuentas
double Banco::calcularPromedio()
{
    if (cuentasBanco.size() == 0) {
        cout << "No hay cuentas registradas para calcular el promedio.\n";
        return 0.0;
    }

    double sumaSaldos = 0.0;
    for (int i = 0; i < cuentasBanco.size(); i++) {
        sumaSaldos += cuentasBanco[i].getSaldo();
    }

    double promedio = sumaSaldos / cuentasBanco.size();
    cout << "El saldo promedio de las cuentas es: " << promedio << "\n";
    return promedio;
}


Banco::~Banco()
{
    //dtor
}
