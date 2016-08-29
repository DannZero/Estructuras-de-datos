#include "Lista.h"

Lista::Lista()
{
	this->H=NULL;
	this->T=NULL;
}

Lista::Lista(int Dato)
{
	Nodo * aux= new Nodo(Dato);
	this->H=aux;
	this->T=aux;
	/*std::cout<<H->getDato()<<std::endl;
	std::cout<<H->getSig()<<std::endl;
	std::cout<<T->getDato()<<std::endl;
	std::cout<<T->getSig()<<std::endl;*/
}

bool Lista::ListaVacia()
{
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}

void Lista::AddInicio(int Dato)
{
	Nodo* aux = new Nodo(Dato,this->H);
	if (ListaVacia())
	{
		this->T= aux;
	}
	this->H= aux;
/*	std::cout<<H->getDato()<<std::endl;
	std::cout<<H->getSig()<<std::endl;
	std::cout<<T->getDato()<<std::endl;
	std::cout<<T->getSig()<<std::endl;*/
}

void Lista::Show()
{
	Nodo* aux = this->H;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}