#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;


class Cliente
{
    private:
        int id;
        string nombre;
        int telefono;


    public:
        int getId();
        void setId(int newId);
        string getNombre();
        void setNombre(string newNombre);
        int getTelefono();
        void setTelefono(int newTelefono);

        Cliente();
        virtual ~Cliente();

    protected:


};

#endif // CLIENTE_H
