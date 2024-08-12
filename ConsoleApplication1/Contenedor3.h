#pragma once
#include "Persona.h"
class Contenedor3
{
private:
	Persona* vec[30];
	int cant;
	int tam;
public:
	Contenedor3();
	virtual ~Contenedor3();
	bool ingresarPersona(Persona *per);
	std::string toString();
};

