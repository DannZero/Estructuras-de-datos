    /* Nombre(s): Filtzer Gorbach Gabriel
                  Ponce de León Súchil Daniel 
        Descripción: La clase nodo es donde se encuentran todos los métodos utilizados para 
        la creación y manipulación de los nodos que conforman la lista. En la sección 'private' se encuentran la variable
        dato y el apuntador que recorrerá la lista. Mientras que en la sección 'public' esta el metodo constructor de los nodos
        y los metodos para pasar de un nodo a otro, y para obtener el dato contenido en estos.
        */

#include <iostream>

class Nodo //se crea la clase "nodo"
{
private:
	int Dato; //se declara la variable donde se ingresara la información de los nodos
	Nodo* Sig; //se declara el apuntador que apuntara entre los nodos.
public:
	Nodo(int Dato, Nodo* Sig); //metodo constructor del primer nodo (pila) y los siguientes
	Nodo(int Dato); //metodo constructor del ultimo nodo (cola)
	void setDato(int Dato); //metodo para asignar el dato a un nodo
	void setSig(Nodo* Sig); //metodo para apuntar al siguiente nodo de la lista
	int getDato(); //metodo para leer el dato
	Nodo* getSig(); //metodo para leer el siguiente nodo de la lista que se apunta
	//~Nodo();
};
