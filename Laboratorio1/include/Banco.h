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
        // Métodos de gestión de clientes y cuentas
        void crearCliente( int id, string nombre, int telefono);
        void crearCuenta(int numCuenta, double saldo);

        // Métodos de transacción
        void retirarDinero(int numCuenta, double cantidad);
        void consignarDinero(int numCuenta, double cantidad);

        // Métodos de consulta
        void imprimirInforme();
        double calcularPromedio();




        Banco();
        virtual ~Banco();

    protected:


};

#endif // BANCO_H
