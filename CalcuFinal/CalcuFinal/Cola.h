// cola.h
// Declaración de la clase Cola

#ifndef COLA_H
#define COLA_H

#include <iostream>
#include"Nodo.h"
#define MAX 20

class Cola {
public:
	Cola();
	~Cola();
	void enqueue(const int);
	int dequeue();
	int siguiente();
private:
	Nodo * head; //salida
	Nodo* tail;  //entrada
	bool estaVacia();
};

#endif

