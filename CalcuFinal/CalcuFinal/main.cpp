#include"Lista.h"

void main() {
	Lista *l = new Lista();
	Pila *pila = new Pila();
	//Pila*pila2 = new Pila();
	l->recorrer("ra+/*ta");
	l->buscarOperator(pila);
	l->imprimirLista();
	//pila2 = pila->restructurar(pila);
	while (pila->getTam() != 0) {
		cout << pila->pop() << endl;;
	}
	cin.get();
}
