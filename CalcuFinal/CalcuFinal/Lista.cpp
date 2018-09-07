#include "Lista.h"



Lista::Lista()
{
	primero = Ultimo = NULL;
}

void Lista::insertar(char dato) {
	Nodo * nuevo = new Nodo(dato);
	if (primero == NULL)
	{
		primero = Ultimo = nuevo;
	}
	else
	{
		Ultimo->sig = nuevo;
		nuevo->ant = Ultimo;
		Ultimo = nuevo;
	}
}

void Lista::recorrer(string cadena) {
	for (int i = 0; i < cadena.size(); i++) {
		Nodo * nuevo = new Nodo(cadena[i]);
		if (primero == NULL)
		{
			primero = Ultimo = nuevo;
		}
		else
		{
			Ultimo->sig = nuevo;
			nuevo->ant = Ultimo;
			Ultimo = nuevo;
		}
	}
}



void Lista::imprimirLista() {
	if (primero == NULL)
	{
		cout << "No hay elementos en la Lista" << endl;
	}
	Nodo * temp = primero;
	bool bandera = true;
	while (bandera)
	{
		if (temp == Ultimo)
		{
			bandera = false;
		}
		cout << temp->getElmento();
		temp = temp->sig;
	}
}

void Lista::buscarOperator(Pila *pila,Cola *cola) {
	Nodo * aux;
	aux = primero;
	while (aux->sig != NULL)
	{
		if (aux->getElmento() == '*' || aux->getElmento() == '/' || aux->getElmento() == '+' || aux->getElmento() == '-' || aux->getElmento() == '^')
		{
			pila->push(aux->getElmento());
		}else {
			if (aux->getElmento()>=0 && aux->getElmento()<=9)
			{
				cola->enqueue(aux->getElmento());
			}
		}
		aux = aux->sig;

	}
}


Lista::~Lista()
{
}
