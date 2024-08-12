#include <iostream>
#include "Contenedor2.h"
#include "Contenedor_1.h"
#include "Contenedor3.h"


int main()
{
    int x(2);
    std::cout << x << std::endl;
    std::cout << "Contenedor 3 " << std::endl;
    Contenedor3* CO3 = new Contenedor3();
    Persona* p1=new Persona("51515", "Juan", 30);
    Persona* p2=new Persona("4654684", "Ricardo", 3);
    Persona* p3= new Persona("65212", "Julian", 68);
    Persona* p4=new Persona("46541", "Chantal", 18);
    CO3->ingresarPersona(p1);
    CO3->ingresarPersona(p2);
    CO3->ingresarPersona(p3);
    CO3->ingresarPersona(p4);
    std::cout << "Imprimir contenedor 3: " << std::endl;
    std::cout << CO3->toString()<<std::endl;
    std::cout << "Eliminar contenedor 3: " << std::endl;
    delete CO3;
    /*
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
    */
    return 0;
}

