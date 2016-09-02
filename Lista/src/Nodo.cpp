    /* Nombre(s): Filtzer Gorbach Gabriel
                  Ponce de León Súchil Daniel
    */

#include "Nodo.h" //se incluye a la clase "nodo"

Nodo::Nodo(int Dato, Nodo* Sig) //metodo constructor de primeros nodos
{
    this->Dato = Dato; //se asigna el dato dado al nodo
    this->Sig = Sig;   //el apunta en la direccion del nodo siguiente
}

Nodo::Nodo(int Dato) //metodo constructor del ultimo nodo
{
    this->Dato = Dato; //se asigna el dato dado al nodo
    this->Sig = NULL;  //se establece que el apuntador apunte a NULL
}

void Nodo::setDato(int Dato) //metodo que asigna el dato dado en el nodo
{
    this->Dato = Dato; //se asigna el dato dado en el nodo
}

void Nodo::setSig(Nodo* Sig) //metodo para apuntar al siguiente nodo
{
    this->Sig = Sig; //se establece que el apuntador apunte al siguiente nodo
}

int Nodo::getDato() //metodo que lee el dato en el nodo
{
    return this->Dato; //devuelve el dato del nodo
}

Nodo* Nodo::getSig() //metodo para leer el dato del siguiente nodo
{
    return this->Sig; //devuelve el dato del siguiente nodo
}
