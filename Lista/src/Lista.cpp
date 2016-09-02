#include "Lista.h" //se incluye la clase lista

Lista::Lista() //metodo que crea la lista
{
	this->H = NULL; //se inicializa el apuntador H (pila) apuntando a NULL
	this->T = NULL; //se inicializa el apuntador T (cola) apuntando a NULL
}

Lista::Lista(int Dato) //metodo que asigna el dato proporcionado al nodo
{
	Nodo * aux = new Nodo(Dato); //se construye un nuevo nodo de nombre aux
	this->H = aux; //se indica que el apuntador H (pila) apunte a aux
	this->T = aux; //se indica que el apuntador T (cola) apunte a aux
	/*std::cout<<H->getDato()<<std::endl;      
	std::cout<<H->getSig()<<std::endl;
	std::cout<<T->getDato()<<std::endl;
	std::cout<<T->getSig()<<std::endl;*/
}

bool Lista::isEmpty() //metodo para comprobar si la lista está vacía
{
	return (this->H == NULL && this->T == NULL); //regresa true si se cumple la condición 
}

void Lista::addInicio(int Dato) //metodo para agregar un nodo al principio
{
	Nodo* aux = new Nodo(Dato, this->H); //crea un nuevo nodo
	if (isEmpty()		 //se comprueba si la lista esta vacia
	{
		this->T = aux;  //si esta vacia, el nuevo nodo se convierte en la cola
	}
	this->H = aux; //si esta o no vacio, el nuevo nodo se convierte automatiamente en la pila 
/*	std::cout<<H->getDato()<<std::endl;
	std::cout<<H->getSig()<<std::endl;
	std::cout<<T->getDato()<<std::endl;
	std::cout<<T->getSig()<<std::endl;*/
}

void Lista::addFinal(int Dato) //metodo que agrega un nodo al final de la lista
{
	Nodo* aux = new Nodo(Dato); //se crea un nuevo nodo de nombre aux
	if (isEmpty()) 		//se comprueba si la lista esta vacia
	{
		this->H = aux; 	//si esta vacia, se asigna al nodo aux como H (pila)
	}
	else
	{
		this->T.setSig(aux); //si no esta vacia, se asigna el nuevo nodo justo despues de T (cola)
	}
	this->T = aux; //ya en el final de la lista, se asigna al nodo aux como T
}

int Lista::removeInicio(	 //metodo que elimina el primer nodo de la lista (pila)
{
	if(!isEmpty())		//se comprueba si la lista no esta vacia
	{
		int dato = H.getDato(); 	//si no esta vacia, se guarda el dato de la pila en la variable dato
		H = H.getSig();			//
		if(H == NULL)			//
		{
			T = NULL;
		}
		return dato;
	}
	else
	{
		return NULL;
	}
}

int Lista::removeFinal() 	//metodo que elimina el ultimo nodo (cola)
{
	if(!isEmpty()	 //se comprueba si la lista no esta vacia
	{
		int dato = T.getDato(); 	//si la lista no esta vacia, se guarda el dato de T en la variable dato
		if (H != T)			//se comprueba que el ultimo nodo no sea tambien el primero
		{
			Nodo* aux = H;         // si no son el mismo nodo, el apuntador apunta al primer nodo
			while(aux.getSig() != T) //entra un ciclo para recorrer la lista hasta encontrar el nodo final T
			{
				aux = aux.getSig(); //el nodo aux se corre un espacio en la lista
			}
			T = aux;       //cuando se encuentra al ultimo nodo, se le asigna 
			T.setSig(NULL); //se elimina el dato del ultimo nodo al igualarlo a NULL
		}
		else		//si el nodo H es el mismo que el nodo T
		{
			H = NULL;  //se elimina el nodo H y el T igualandolo a NULL
			T = NULL;
		}
		return dato;
	}
	return NULL;
}

Nodo* hasElement(dato) //metodo que busca un elemento en la lista
{
	if(isEmpty()) //se comprueba si la lista esta vacia
	{
		return NULL;  //si la lista esta vacia, regresa un NULL 
	}
	Nodo* aux = H;       //si no esta vacia, el apuntador apunta al primer nodo
	while(aux.getDato() != dato && aux != NULL) 	//entra un ciclo para recorrer el arreglo hasta encontrar el dato deseado
	{
		aux = aux.getSig(); 	//cada ciclo se recorre aux al siguiente nodo
	}
	return aux;
}

void Lista::addRef(int Dato, int Ref)  //metodo para agregar un nodo en una posición especifica
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

void Lista::RemoveRef(int Ref)
{
	
}


void Lista::show() //metodo para imprimir el contenido de la lista
{
	Nodo* aux = this->H; 	//se apunta hacia el primer nodo (H)
	while(aux != NULL) 	//entra el ciclo para recorrer la lista hasta llegar al final (NULL)
	{	
		std::cout << aux->getDato() << std::endl; //cada ciclo se imprime el contenido del nodo en el que se esta
		aux = aux->getSig(); 			//se recorre al siguiente nodo
	}
}

void Lista::VaciarLista() //metodo que vacia el contenido de la lista
{
	if(isEmpty()) //se comprueba si la lista esta vacia
	{
		return NULL; //si esta vacia, se regresa NULL y termina el programa
	}
	Nodo* aux = H;		//si no esta vacia, se apunta hacia el primer nodo
	while(aux != NULL)  //entra el ciclo para recorrer toda la lista hasta el final
	{
		aux=NULL; 		//cada ciclo se borra el contenido del nodo igualando a NULL
		aux = aux.getSig();	//se pasa al siguiente nodo para repetir el ciclo
	}
}
