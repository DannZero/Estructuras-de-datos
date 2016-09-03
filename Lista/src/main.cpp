#include "Lista.h" //se incluye la clase lista

int main()
{
    Lista l = Lista(); //se crea la lista
    l.addInicio(4);
    l.addFinal(5);
    l.addFinal(7);
    std::cout<<l.hasElement(5)->getDato()<<std::endl;
    l.show(); //se imprime la lista
    l.addRef(6,3);
    l.show();
    l.removeInicio();
    l.show();
    l.removeFinal();
    l.show();
    l.removeRef(2);
    l.show();
    l.vaciarLista();
    
    return 0; //termina el programa
}
