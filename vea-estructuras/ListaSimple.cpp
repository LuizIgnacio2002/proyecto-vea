#include "ListaSimple.hpp"

template <class T>
ListaSimple<T>::ListaSimple() {
    this->primero = nullptr;
    this->ultimo = nullptr;
}

template <class T>
ListaSimple<T>::~ListaSimple() {
    NodoListaSimple<T>* actual = this->primero;
    NodoListaSimple<T>* siguiente;
    while (actual != nullptr) {
        siguiente = actual->getSiguiente();
        delete actual;
        actual = siguiente;
    }
}

template <class T>
void ListaSimple<T>::agregar(T dato) {
    NodoListaSimple<T>* nuevo = new NodoListaSimple<T>(dato);
    if (this->primero == nullptr) {
        this->primero = nuevo;
        this->ultimo = nuevo;
    } else {
        this->ultimo->setSiguiente(nuevo);
        this->ultimo = nuevo;
    }
}

template <class T>
void ListaSimple<T>::mostrar() const {
    NodoListaSimple<T>* actual = this->primero;
    while (actual != nullptr) {
        cout << actual->getDato() << " -> ";
        actual = actual->getSiguiente();
    }
    cout << "NULL" << endl;
}

template <class T>
void ListaSimple<T>::actualizar(T dato) {
    NodoListaSimple<T>* actual = this->primero;
    while (actual != nullptr) {
        cout << "Actualizando " << endl;
        // It compares using registro's codigo
        if (actual->getDato().getCodigo() == dato.getCodigo()) {
            cout << "Encontrado" << endl;

            // Directly assigning the fields
            actual->getDato().setNombre(dato.getNombre());
            actual->getDato().setSueldo(dato.getSueldo());

            return;
        }
        actual = actual->getSiguiente();
    }
    cout << "Registro no encontrado" << endl;
}

template <class T>
void ListaSimple<T>::eliminar(T dato) {
    NodoListaSimple<T>* actual = this->primero;
    NodoListaSimple<T>* anterior = nullptr;
    while (actual != nullptr) {
        if (actual->getDato() == dato) {
            if (anterior == nullptr) {
                this->primero = actual->getSiguiente();
            } else {
                anterior->setSiguiente(actual->getSiguiente());
            }
            delete actual;
            return;
        }
        anterior = actual;
        actual = actual->getSiguiente();
    }
    cout << "Dato no encontrado" << endl;
}