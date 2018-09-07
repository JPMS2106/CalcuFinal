#pragma once
#include"Pila.h"
#include"Cola.h"
class Lista
{
private:
	Nodo * primero;
	Nodo * Ultimo;
	Pila *pila = new Pila();
	Cola*cola = new Cola();

public:
	Lista();
	void insertar(char);
	void recorrer(string);
	void buscarOperator(Pila*);
	void imprimirLista();
	~Lista();
};

