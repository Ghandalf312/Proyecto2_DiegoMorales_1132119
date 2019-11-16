#pragma once
#include "Nodo.h"
#include <stdlib.h>
#include <string>
//using namespace std;

class Lista
{
public:
	//Nodos necesarios para la lista doblemente enlazada
	//El codigo fue hecho con base al laboratorio 7 de la compañera Aylinne Recinos.
	Nodo* First;
	Nodo* Last;

public:
	void Push(double valor);//Enlista los precios ingresados por el usuario.
	void Pop();//Saca el precio para devolver los dígitos a la pila o la cola.
	void PushPos(double valor, int pos);//Enlista un elemento en una posición en específico
	bool IsEmpty();//Función que ayudará si la lista está vacía, para asignarle un nuevo valor
	int Size();//Devuelve el tamaño de la ista

};

