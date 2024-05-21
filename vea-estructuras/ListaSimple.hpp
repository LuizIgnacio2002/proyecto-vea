#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H


#include <iostream> 

using namespace std;

template <class T>
class NodoListaSimple {
private:
    T dato;
    NodoListaSimple<T>* siguiente;

public:
    NodoListaSimple(T dato) : dato(dato), siguiente(nullptr) {}

    T getDato() const {
        return this->dato;
    }

    void setDato(T dato) {
        this->dato = dato;
    }

    NodoListaSimple<T>* getSiguiente() const {
        return this->siguiente;
    }

    void setSiguiente(NodoListaSimple<T>* siguiente) {
        this->siguiente = siguiente;
    }
};

template <class T>
class ListaSimple {
private:
    NodoListaSimple<T>* primero;
    NodoListaSimple<T>* ultimo;

public:
    ListaSimple();
    ~ListaSimple();
    void agregar(T dato);
    void mostrar();
    void actualizar(T dato);
    void eliminar(T dato);
};

#endif // LISTASIMPLE_H

