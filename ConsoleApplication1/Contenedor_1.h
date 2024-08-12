#pragma once
#include "Persona.h"
class Contenedor_1
{
private:
	Persona vec[30];
	int cant;
	int tam;
public:
	Contenedor_1() {
		cant = 0;
		tam = 30;
	}
	virtual ~Contenedor_1();
	bool ingresaPersona();
	std::string toString();
};

