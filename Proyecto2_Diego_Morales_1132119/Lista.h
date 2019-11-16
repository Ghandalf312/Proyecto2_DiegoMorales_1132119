#pragma once
#include "Nodo.h"
#include <stdlib.h>
#include <string>
//using namespace std;

class Lista
{
public:
	//Nodos necesarios para la lista doblemente enlazada
	//El codigo fue hecho con base al laboratorio 7 de la compa�era Aylinne Recinos.
	Nodo* First;
	Nodo* Last;

public:
	void Push(double valor);//Enlista los precios ingresados por el usuario.
	void Pop();//Saca el precio para devolver los d�gitos a la pila o la cola.
	void PushPos(double valor, int pos);//Enlista un elemento en una posici�n en espec�fico
	bool IsEmpty();//Funci�n que ayudar� si la lista est� vac�a, para asignarle un nuevo valor
	int Size();//Devuelve el tama�o de la ista

};

