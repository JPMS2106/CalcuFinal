// cola.cpp
// Implementación de la clase Cola

#include "cola.h"

// Constructor
Cola::Cola() {
	head = nullptr;
	tail = nullptr;
}

// Destructor
Cola::~Cola() {
}

// Inserta un nuevo elemento en la cola si no está llena
void Cola::enqueue(const int item) {
	Nodo* nuevo= new Nodo(item);

	//try
	//{
	//	nuevo = new Nodo;
	//}
	//catch (std::bad_alloc exception)
	//{
	//	return;
	//}
	nuevo->sig = nullptr;

	if (estaVacia()) {
		head = nuevo;
		tail = nuevo;
	}
	else {
		tail->sig = nuevo;
		tail = nuevo;
	}
}

// Recupera el elemento de la cola si no está vacía
int Cola::dequeue() {
	if (estaVacia())
		return -1;

	Nodo* tmp;
	int valor;

	tmp = head;
	valor = head->getElmento();

	head = head->sig;
	if (head == nullptr)
		tail == nullptr;

	free(tmp);
	tmp = nullptr;
	return valor;
}

// Muestra el siguiente elemento en la cola (próximo en salir)
int Cola::siguiente() {
	if (estaVacia())
		return -1;

	return head->getElmento();
}

// Retorna "true" si la cola está vacía. "false", en caso contrario
bool Cola::estaVacia() {
	return (head == nullptr);
}