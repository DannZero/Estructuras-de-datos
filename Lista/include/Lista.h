#include "Nodo.h"

class Lista
{
public:
	Nodo* H; //se declara el apuntador a pila
	Nodo* T; //se declara el apuntador a cola
	Lista(); //se crea una lista
	Lista(int Dato); //se asigna un dato a la lista nueva
	bool isEmpty(); //metodo para comprobar si la lista está vacía
	void addInicio(int Dato); //metodo para agregar un nodo al inicio
	void addFinal(int Dato); //metodo para agregar un nodo al final
	//void addRef(int Dato, int Ref); //metodo para agregar un nodo en una posicion especifica
	int removeInicio(); //metodo para eliminar el primer nodo (pila)
	int removeFinal(); //metodo para eliminar el ultimo nodo (cola)
	//removeRef();    //metodo para eliminar un nodo especifico
	int vaciarLista(); //metodo para borrar los datos de toda la lista
	Nodo* hasElement(); //metodo para buscar un elemento especifico
	void show(); //metodo para imprimir un nodo
};
