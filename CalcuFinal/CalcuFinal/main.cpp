#include"Lista.h"

void main() {
	Lista *l = new Lista();
	Pila *pila = new Pila();
	Cola *cola = new Cola();
	//Pila*pila2 = new Pila();
	cout << "Imprimiendo Lista" << endl;
	l->recorrer("-1249");
	l->buscarOperator(pila,cola);
	l->imprimirLista();
	//pila2 = pila->restructurar(pila);
	cout << "Imprimiendo Pila" << endl;
	while (pila->getTam() != 0) {
		cout << pila->pop() << endl;;
	}
	cout << "Imprimiendo cola" << endl;
	cout<<cola->dequeue();
	cin.get();
}
