#ifndef BANCO_H
#define BANCO_H
#include <vector>
#include "Cliente.h"
#include "Cuenta.h"
using namespace std;


class Banco
{
    private:
        std::vector<Cliente> clientesBanco;
        std::vector<Cuenta> cuentasBanco;


    public:
        void crearCliente( int id, string nombre, int telefono);
        void crearCuenta(int numCuenta, double saldo);
        double calcularPromedio();



        Banco();
        virtual ~Banco();

    protected:


};

#endif // BANCO_H
