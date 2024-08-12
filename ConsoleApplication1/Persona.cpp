#include "Persona.h"

Persona::Persona() :cedula("indef"), nombre("indef"), edad(0)
{
}
Persona::Persona(std::string cedula, std::string nombre, int edad) :cedula(cedula), nombre(nombre), edad(edad)
{
}
Persona::~Persona()
{
}
std::string Persona::getCedula()
{
	return cedula;
}
void Persona::setCedula(std::string cedula)
{
	this->cedula = cedula;
}
std::string Persona::getNombre()
{
	return nombre;
}

void Persona::setNombre(std::string nombre)
{
	this->nombre = nombre;
}

int Persona::getEdad()
{
	return edad;
}

void Persona::setEdad(int edad)
{
	this->edad = edad;
}

std::string Persona::toString()
{
	std::stringstream s;
	s << "Nombre: " << nombre << std::endl << "Cedula: " << cedula << std::endl << "Edad: " << edad << std::endl;
	return s.str();
}
