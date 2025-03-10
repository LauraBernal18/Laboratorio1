#include <iostream>
#include "Banco.h"

using namespace std;

// Función para leer datos desde la entrada del usuario
string leerDato(string mensaje)
{
    string dato = "";
    cout << mensaje << ":" << endl;
    getline(cin, dato);
    return dato;
}

int main()
{
    Banco banco1;  // Instancia de la clase Banco
    int iniciarProceso = 0;

    while (iniciarProceso == 0)  // Corrección en la condición del while
    {
        string mensaje = "Escoja una opcion: 1-Crear cuenta 2-Crear cliente 3-Consignar, 4-Retirar, 5-Salir";
        string opcion = leerDato(mensaje);
        if (opcion == "1")
        {
            string numCuentaStr = leerDato("Ingrese el número de cuenta:");
            string saldoStr = leerDato("Ingrese el saldo inicial:");
            int numCuenta = stoi(numCuentaStr);
            double saldo = stod(saldoStr);

            banco1.crearCuenta(numCuenta, saldo);
            cout << "Cuenta creada con exito.\n";


        }
        else if (opcion == "2")
        {
            string idStr = leerDato("Ingrese el ID del cliente:");
            string nombre = leerDato("Ingrese el nombre del cliente:");
            string telefonoStr = leerDato("Ingrese el teléfono del cliente:");
            int id = stoi(idStr);
            int telefono = stoi(telefonoStr);

            banco1.crearCliente(id, nombre, telefono);
            cout << "Cliente creado con exito.\n";
        }



        else if (opcion == "5")
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
