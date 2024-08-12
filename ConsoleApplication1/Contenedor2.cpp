#include "Contenedor2.h"

Contenedor2::Contenedor2(int k)
{
	vec = new Persona[k];
	cant = 0;
	tam = k;
}

Contenedor2::~Contenedor2()
{
	delete[] vec;
}

bool Contenedor2::ingresarPersona(Persona per)
{
	if (cant < tam) {
		vec[cant].setCedula(per.getCedula());
		vec[cant].setNombre(per.getNombre());
		vec[cant].setEdad(per.getEdad());
		cant++;
		return true;
	}
	else
		return false;
}

std::string Contenedor2::toString()
{
	std::stringstream s;
	s << "Personas " << std::endl;
	for (int i = 0; i < cant; i++)
		s << vec[i].toString() << std::endl;

	return s.str();
}
