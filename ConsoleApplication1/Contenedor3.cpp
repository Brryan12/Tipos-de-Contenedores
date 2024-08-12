#include "Contenedor3.h"

Contenedor3::Contenedor3():tam(30),cant(0)
{
	for (int i = 0; i < tam; i++) {
		vec[i] = NULL;
	}
}

Contenedor3::~Contenedor3()
{
	//La cantidad de elementos eliminados depende de la app, pero ahora eliminaremos todo
	for (int i = 0; i < tam; i++)
		delete vec[i];
}

bool Contenedor3::ingresarPersona(Persona* per)
{
	if (cant < tam) {
		//Posible clonacion de personas
		vec[cant++] = per;
		return true;
	}
	else
		return false;
}

std::string Contenedor3::toString()
{
	std::stringstream s;
	s << "Personas: " << std::endl;
	for (int i= 0; i < cant; i++) {
		if (vec[i] != NULL)
			s << vec[i]->toString() << std::endl;
	}
	return s.str();
}
