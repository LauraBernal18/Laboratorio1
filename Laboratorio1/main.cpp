#include <iostream>
#include "Banco.h"

using namespace std;

// Función para leer datos desde la entrada del usuario
string leerDato(string mensaje)
{
    string dato = "";
    cout << mensaje << "" << endl;
    getline(cin, dato);
    return dato;
}

int main()
{
    Banco banco;  // Instancia de la clase Banco
    int iniciarProceso = 0;

    while (iniciarProceso == 0)  // Corrección en la condición del while
    {
        string mensaje = "ESCOJA UNA OPCION: \n\n 1-Crear cuenta \n 2-Crear cliente \n 3-Consignar \n 4-Retirar \n 5-Calcular el promedio de saldo de las cuentas \n 6-Imprimir informe de cada cuenta \n 7-salir";
        string opcion = leerDato(mensaje);
        if (opcion == "1")
        {
            string numCuentaStr = leerDato("Ingrese el numero de cuenta:");
            string saldoStr = leerDato("Ingrese el saldo inicial:");
            int numCuenta = stoi(numCuentaStr);
            double saldo = stod(saldoStr);

            banco.crearCuenta(numCuenta, saldo);
        }
        else if (opcion == "2")
        {
            string idStr = leerDato("Ingrese el ID del cliente:");
            string nombre = leerDato("Ingrese el nombre del cliente:");
            string telefonoStr = leerDato("Ingrese el telefono del cliente:");
            int id = stoi(idStr);
            int telefono = stoi(telefonoStr);

            banco.crearCliente(id, nombre, telefono);
            cout << "Cliente creado con exito.\n";
        }
        else if (opcion == "3") // Consignar
        {
            int numCuenta = stoi(leerDato("Ingrese el numero de cuenta:"));
            double cantidad = stod(leerDato("Ingrese la cantidad a consignar:"));
            banco.consignarDinero(numCuenta, cantidad);
        }
        else if (opcion == "4") // Retirar
        {
            int numCuenta = stoi(leerDato("Ingrese el numero de cuenta:"));
            double cantidad = stod(leerDato("Ingrese la cantidad a retirar:"));
            banco.retirarDinero(numCuenta, cantidad);

        }
        else if (opcion == "5") // Calcular el promedio de saldo de las cuentas
        {
            banco.calcularPromedio();
        }

        else if (opcion == "6")//Imprimir informe de cuentas
        {
                banco.imprimirInforme();
        }


        else if (opcion == "7")
        {
            iniciarProceso = 1;  // Salir del bucle
        }
        else
        {
            cout << "Número no valido. Inténtelo de nuevo.\n";
        }
    }

    return 0;
}
