#include"Nodo.h"
using namespace std;
class Pila {
private:
	Nodo * top;
	int tam;
public:
	Pila();
	~Pila();
	int getTam();
	bool estaVacia();
	void push(char);
	double pop();
	double peek();
	Pila* restructurar(Pila*);
	double posFija(string);
	double operador(double, double, char);
};