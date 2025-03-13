#ifndef CUENTA_H
#define CUENTA_H
using namespace std;

class Cuenta
{
    private:
        int numCuenta;
        double saldo;



    public:
        int getNumCuenta();
        void setNumCuenta(int newNumCuenta);
        double getSaldo();
        void setSaldo(double newSaldo);



        Cuenta(int numCuenta, double saldo);
        virtual ~Cuenta();

    protected:


};

#endif // CUENTA_H
