#ifndef CUENTA_H
#define CUENTA_H
#include <vector>
#include "Cliente.h"
using namespace std;

class Cuenta
{
    private:
        int numCuenta;
        double saldo;
        std::vector<Cliente> clientes[3];



    public:
        int getNumCuenta();
        void setNumCuenta(int numCenta);
        double getSaldo();
        void retirarDinero(double cantidad);
        void consignarDinero(double cantidad);
        void mostrarClientes();



        Cuenta();
        virtual ~Cuenta();

    protected:


};

#endif // CUENTA_H
