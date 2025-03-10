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
        std::vector<Cliente*> clientes;



    public:
        int getNumCuenta();
        void setNumCuenta(int numCuenta);
        double getSaldo();
        void retirarDinero(double cantidad);
        void consignarDinero(double cantidad);
        void asociarCliente(Cliente* cliente);
        void mostrarClientes();



        Cuenta();
        virtual ~Cuenta();

    protected:


};

#endif // CUENTA_H
