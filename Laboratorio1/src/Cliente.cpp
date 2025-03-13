#include "Cliente.h"
#include <string>
using namespace std;

Cliente::Cliente(int id, string nombre, int telefono)
{
    this->id = id;
    this->nombre = nombre;
    this->telefono = telefono;
    //ctor
}

int Cliente::getId()
{
    return id;
}

void Cliente::setId(int newId)
{
    id = newId;
}

string Cliente::getNombre()
{
    return nombre;
}

void Cliente::setNombre(string newNombre)
{
    nombre = newNombre;
}

int Cliente::getTelefono()
{
    return telefono;
}

void Cliente::setTelefono(int newTelefono)
{
    telefono = newTelefono;
}

Cliente::~Cliente()
{
    //dtor
}


