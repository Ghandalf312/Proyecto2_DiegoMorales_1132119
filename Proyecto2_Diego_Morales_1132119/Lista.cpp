#include "Lista.h"
bool Lista::IsEmpty()
{
	return First == nullptr;
}
void Lista::Push(double value) {

	Nodo* NewValue = new Nodo;
	NewValue->digito = value;
	if (IsEmpty())
	{
		First = NewValue;
		Last = NewValue;
		First->Anterior = Last;
		Last->Siguiente = First;
	}
	else
	{
		NewValue->Anterior = Last;//nuevo nodo(anterior) esta apuntando al ultimo
		NewValue->Siguiente = First;//nodo nuevo(siguiente) esta apuntando al primero
		First = NewValue;//el puntero 
		Last->Siguiente = First;//El elemento agregado apunta al siguiente
		(First->Siguiente)->Anterior = First;//El elemento ingresado su vuelve el primero
	}
}
void Lista::PushPos(double value, int pos)
{
	Nodo* NewValue = new Nodo;
	Nodo* aux = new Nodo;
	Nodo* aux2 = new Nodo;

	NewValue->digito = value;
	if (pos == 1)
	{
		Push(value);
	}
	else
	{
		aux = First;
		for (int i = 1; i < pos; i++)
		{
			aux = aux->Siguiente;
			aux2 = aux->Anterior;
		}

		NewValue->Siguiente = aux2->Siguiente;
		(aux->Anterior)->Siguiente = NewValue;
		NewValue->Anterior = aux->Anterior;
		(NewValue->Siguiente)->Anterior = NewValue;
	}
}
void Lista::Pop() {
	Nodo* NewValue = new Nodo;
	NewValue = First;
	int x = Size();
	for (int i = 0; i < x; i++)
	{
		NewValue = NewValue->Siguiente;
	}
}
int Lista::Size()
{
	Nodo* NewValue = new Nodo;
	NewValue = First;
	int Cant = 1;
	while (NewValue->Siguiente != First)
	{
		Cant++;
		NewValue = NewValue->Siguiente;
	}
	return Cant;
}
