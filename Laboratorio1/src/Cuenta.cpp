#include "Cuenta.h"
#include <iostream>
using namespace std;

Cuenta::Cuenta(int numCuenta, double saldo)
{
    this->numCuenta = numCuenta;
    this->saldo = saldo;
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

void Cuenta::setSaldo(double newSaldo) {
    saldo = newSaldo;
}



Cuenta::~Cuenta()
{
    //dtor
}
