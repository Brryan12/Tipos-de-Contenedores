#pragma once
#include "Persona.h"
class Contenedor2
{
private:
	Persona* vec;
	int cant;
	int tam;
public:
	Contenedor2(int k); //tamaño del vector
	virtual ~Contenedor2();
	bool ingresarPersona(Persona per);
	std::string toString();
};

