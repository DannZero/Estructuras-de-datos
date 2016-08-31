#include "Nodo.h"

class Lista
{
public:
	Nodo* H;
	Nodo* T;	
	Lista();
	Lista(int Dato);
	bool isEmpty();
	void addInicio(int Dato);
	void addFinal(int Dato);
	//void addRef(int Dato, int Ref);
	int removeInicio();
	int removeFinal();
	//removeRef();
	//int vaciarLista();
	Nodo* hasElement();
	void show();
};
