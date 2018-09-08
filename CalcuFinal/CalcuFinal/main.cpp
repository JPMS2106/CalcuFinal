#include"Lista.h"
#include<string>
void main() {
	Lista *l = new Lista();
	Pila *pila = new Pila();
	Cola *cola = new Cola();
	string salida;
	//Pila*pila2 = new Pila();
	cout << "Imprimiendo Lista" << endl;
	l->recorrer("-1249");
	l->buscarOperator(pila,cola);
	l->imprimirLista()<<endl;
	//pila2 = pila->restructurar(pila);
	cout << "Imprimiendo Pila" << endl;
	while (pila->getTam() != 0) {
		salida = pila->pop();
		cout <<salida<<endl;
	}
	cout << "Imprimiendo cola" << endl;
	cout<<cola->dequeue();
	cin.get();
}
