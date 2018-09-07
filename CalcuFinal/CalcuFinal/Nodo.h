#pragma once
#include<iostream>
using namespace std;
class Nodo
{
private:
	char elemento;
public:
	Nodo * sig;
	Nodo * ant;
	Nodo(char);
	char getElmento();
	~Nodo();
};

