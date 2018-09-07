// stack.cpp
// Implementación de la clase Stack

#include "Pila.h"

// Constructor
Pila::Pila() {
	top = nullptr;
	this->tam = 0;
}

int Pila::getTam() {
	return this->tam;
}

// Destructor
Pila::~Pila() {
	// Como buena práctica se debería liberar toda la memoria de la pila
	// Se omite este código en el ejemplo
}

// Inserta un nuevo elemento en la pila si no está llena
void Pila::push(char item) {
	Nodo* nuevo = new Nodo(item);

	//try
	//{
	//	nuevo = new Nodo();
	//}
	//catch (std::bad_alloc exception)
	//{
	//	return;
	//}

	nuevo->sig = top;
	top = nuevo;
	tam++;
}

// Recupera el elemento de la pila si no está vacía
double Pila::pop() {
	if (estaVacia())
		return -1;

	int valor;
	Nodo* tmp;

	valor = top->getElmento();
	tmp = top;
	top = top->sig;
	free(tmp);
	tam--;
	return valor;
}

// Despliega el elemento de la pila sin eliminarlo
double Pila::peek() {
	return (top == NULL);
}

// Retorna "true" si la pila está vacía. "false", en caso contrario
bool Pila::estaVacia() {
	return (top == nullptr ? true : false);
}

Pila * Pila::restructurar(Pila *p1)
{
	Pila* p2 = new Pila();
	Pila* p3 = new Pila();

	int d1;
	int d2;
	while (top != NULL)
	{
		p2->push(this->pop());
	}
	while ((p2->top != NULL) || (p1->top != NULL))
	{
		if ((p2->top != NULL) && (p1->top != NULL))
		{
			d1 = p1->pop();
			d2 = p2->pop();
		}
		else
			if (p2->top == NULL)
			{
				d2 = -1;
				d1 = p1->pop();
			}
			else
			{
				d1 = -1;
				d2 = p2->pop();
			}
		if ((d2 != -1) && (d1 != -1))
		{
			if (d1 >= d2)
			{
				p3->push(d1);
				p3->push(d2);
			}
		}
		else
			if (d1 == -1)
				p3->push(d2);
			else
				if (d2 == -1)
					p3->push(d1);
	}
	return p3;
}

double Pila::operador(double x, double y, char s)
{
	switch (s)
	{
	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case '*':
		return x * y;
		break;
	case '/':
		return x / y;
		break;
	default:
		return 0;
		break;
	}
}

double Pila::posFija(string exp)
{
	Pila* p = new Pila;
	char c;
	double op1, op2, res;
	for (string::size_type i = 0; i < exp.size(); i++)
	{
		c = exp[i];
		if (isdigit(c))
			p->push(static_cast<double>(c - '0'));
		else
		{
			op2 = p->pop();
			op1 = p->pop();
			res = operador(op1, op2, c);
			p->push(res);
		}
	}
	return res;
}