#include "Nodo.h"

class Lista
{
public:
	Nodo* H;
	Nodo* T;	
	Lista();
	Lista(int Dato);
	bool ListaVacia();
	void AddInicio(int Dato);
	//void AddFinal(int Dato);
	//void AddRef(int Dato, int Ref);
	//int RemoveInicio();
	//int RemoveFinal();
	//RemoveRef();
	//int VaciarLista();
	//Nodo* BuscarElemento();
	void Show();
};