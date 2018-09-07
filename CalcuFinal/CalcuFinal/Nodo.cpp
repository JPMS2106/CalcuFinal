#include "Nodo.h"



Nodo::Nodo(char elemento)
{
	this->elemento = elemento;
	this->sig = NULL;
	this->ant = NULL;
}

char Nodo::getElmento() {
	return this->elemento;
}

Nodo::~Nodo()
{
}
