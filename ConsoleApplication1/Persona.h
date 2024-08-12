#pragma once
#include <iostream>
#include <sstream>
class Persona
{
private:
	std::string cedula;
	int edad;
	std::string nombre;

public:
	Persona();
	Persona(std::string,std::string, int);
	virtual ~Persona();
	std::string getCedula();
	void setCedula(std::string cedula);
	std::string getNombre();
	void setNombre(std::string nombre);
	int getEdad();
	void setEdad(int edad);
	std::string toString();

};

