#include <iostream>
#include "Contenedor2.h"
#include "Contenedor_1.h"


int main()
{
    //contenedores formas 1,2,3,4
    std::cout << "Trabajando con el contenedor 2" << std::endl;
    int k;
    std::cout << "ingrese tamano: " << std::endl;
    std::cin >> k;
    //creandolo
    Contenedor2* CO2 = new Contenedor2(k);
    //creamos a las personas para guardarlas
    Persona p1("51515", "Juan", 30);
    Persona p2("4654684", "Ricardo", 3);
    Persona p3("65212", "Julian", 68);
    Persona p4("46541", "Chantal", 18);
    CO2->ingresarPersona(p1);
    CO2->ingresarPersona(p2);
    CO2->ingresarPersona(p3);
    CO2->ingresarPersona(p4);

    std::cout << "Imprimir contenido del contenedor " << std::endl;
    std::cout << CO2->toString() << std::endl;

    //Eliminar contenedor
    delete CO2;
    return 0;
}

