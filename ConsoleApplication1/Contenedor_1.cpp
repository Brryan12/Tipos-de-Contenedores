#include "Contenedor_1.h"

Contenedor_1::~Contenedor_1()
{
}

bool Contenedor_1::ingresaPersona()
{
    std::string cedula, nombre;
    int edad;
    if (cant < tam) {
        std::cout << "Ingrese la cedula: ";
        std::cin >> cedula;
        std::cout << "Ingrese la Nombre: ";
        std::cin >> nombre;
        std::cout << "Ingrese la Edad: ";
        std::cin >> edad;
        vec[cant].setCedula(cedula);
        vec[cant].setNombre(nombre);
        vec[cant].setEdad(edad);
        return true;
    }
    else
        return false;
}

std::string Contenedor_1::toString()
{
    std::stringstream s;
    s << "Personas " << std::endl;
    for (int i = 0; i < cant; i++)
        s << vec[i].toString() << std::endl;

    return s.str();
}
