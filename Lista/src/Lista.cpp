#include "Lista.h"

Lista::Lista()
{
	this->H = NULL;
	this->T = NULL;
}

Lista::Lista(int Dato)
{
	Nodo * aux = new Nodo(Dato);
	this->H = aux;
	this->T = aux;
	/*std::cout<<H->getDato()<<std::endl;
	std::cout<<H->getSig()<<std::endl;
	std::cout<<T->getDato()<<std::endl;
	std::cout<<T->getSig()<<std::endl;*/
}

bool Lista::isEmpty()
{
	return (this->H == NULL && this->T == NULL);
}

void Lista::addInicio(int Dato)
{
	Nodo* aux = new Nodo(Dato, this->H);
	if (isEmpty())
	{
		this->T = aux;
	}
	this->H = aux;
/*	std::cout<<H->getDato()<<std::endl;
	std::cout<<H->getSig()<<std::endl;
	std::cout<<T->getDato()<<std::endl;
	std::cout<<T->getSig()<<std::endl;*/
}

void Lista::addFinal(int Dato)
{
	Nodo* aux = new Nodo(Dato);
	if (isEmpty())
	{
		this->H = aux;
	}
	else
	{
		this->T.setSig(aux);
	}
	this->T = aux;
}

int Lista::removeInicio()
{
	if(!isEmpty())
	{
		int dato = H.getDato();
		H = H.getSig();
		if(H == NULL)
		{
			T == NULL;
		}
		return dato;
	}
	else
	{
		return NULL;
	}
}

int Lista::removeFinal()
{
	if(!isEmpty())
	{
		int dato = T.getDato();
		if (H != T)
		{
			Nodo* aux = H;
			while(aux.getSig() != T)
			{
				aux = aux.getSig();
			}
			T = aux;
			T.setSig(NULL);
		}
		else
		{
			H = NULL;
			T = NULL;
		}
		return dato;
	}
	return NULL;
}

Nodo* hasElement(dato)
{
	if(isEmpty())
	{
		return NULL;
	}
	Nodo* aux = H;
	while(aux.getDato() != dato && aux != NULL)
	{
		aux = aux.getSig();
	}
	return aux;
}

void Lista::addRef(int Dato, int Ref)
{
	if(isEmpy())
	{
		return NULL;
	}
	Nodo* aux = new Nodo();
	aux->aux.getDato(); //tiene que recibir el dato que se le da
	for(int i=0; ) //hay que recorrer la lista para encontrar el espacio donde va el nuevo nodo
	
	this->aux.setSig(dato);
	
}


void Lista::show()
{
	Nodo* aux = this->H;
	while(aux != NULL)
	{
		std::cout << aux->getDato() << std::endl;
		aux = aux->getSig();
	}
}

void Lista::VaciarLista()
{
	if(isEmpty())
	{
		return NULL;
	}
	Nodo* aux = H;
	while(aux.getDato() != dato && aux != NULL)
	{
		aux=NULL;
		aux = aux.getSig();
	}
}
