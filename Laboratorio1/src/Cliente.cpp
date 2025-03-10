#include "Cliente.h"
#include <string>
using namespace std;

Cliente::Cliente()
{
    //ctor
}

Cliente::~Cliente()
{
    //dtor
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


