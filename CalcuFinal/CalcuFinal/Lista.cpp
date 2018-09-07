#include "Lista.h"



Lista::Lista()
{
	primero = Ultimo = NULL;
	this->tam=0;
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
		tam++;
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
			tam++;
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

int Lista::getTam() {
	return this->tam;
}

void Lista::buscarOperator(Pila *pila,Cola *cola) {
	Nodo * aux;
	int cont = 0;
	aux = primero;
	while (cont<=Lista::getTam())
	{
		if (aux->getElmento() == '*' || aux->getElmento() == '/' || aux->getElmento() == '+' || aux->getElmento() == '-' || aux->getElmento() == '^')
		{
			pila->push(aux->getElmento());
		}else {
			//if (aux->getElmento()>=0 && aux->getElmento()<=9)
			//{
				cola->enqueue(aux->getElmento());
			//}
		}
		aux = aux->sig;
		cont++;
	}
}


Lista::~Lista()
{
}
