#pragma once
#include <stdlib.h>
#include <string>
//using namespace std;
class Nodo
{
public:
	Nodo();
	~Nodo();
	double digito;
	Nodo* Anterior;
	Nodo* Siguiente;
};

