    /* Nombre(s): Filtzer Gorbach Gabriel
                  Ponce de León Súchil Daniel 
        Descripción: La clase lista es donde se encuentran todos los métodos utilizados para 
        la manipulación de los nodos que la conforman. A través de dichos métodos los nodos pueden ser agregados y eliminados
        en el princpio, final, o en cualquier ubicación referenciada de la lista. También contiene métodos para buscar elementos
        específicos de la lista, mostrar el contenido, y vaciar la lista. A continuación se describe la función de cada método. 
        */

#include "Nodo.h" //se incluye la clase "nodo"

class Lista //se crea la clase "Lista"
{
public:
	Nodo* H; //se declara el apuntador a pila
	Nodo* T; //se declara el apuntador a cola
	Lista(); //se crea una lista
	Lista(int Dato); //se asigna un dato a la lista nueva
	bool isEmpty(); //metodo para comprobar si la lista está vacía
	void addInicio(int Dato); //metodo para agregar un nodo al inicio
	void addFinal(int Dato); //metodo para agregar un nodo al final
	void addRef(int Dato, int Ref); //metodo para agregar un nodo en una posicion especifica
	int removeInicio(); //metodo para eliminar el primer nodo (pila)
	int removeFinal(); //metodo para eliminar el ultimo nodo (cola)
	int removeRef(int Ref);    //metodo para eliminar un nodo especifico
	void vaciarLista(); //metodo para borrar los datos de toda la lista
	Nodo* hasElement(int Dato); //metodo para buscar un elemento especifico
	void show(); //metodo para imprimir un nodo
};
