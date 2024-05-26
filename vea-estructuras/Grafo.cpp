#include "Grafo.hpp"

template <class T>
Grafo<T>::Grafo() {
    // Constructor por defecto
}

template <class T>
Grafo<T>::~Grafo() {
    // Destructor para limpiar cualquier recurso si es necesario
}

template <class T>
void Grafo<T>::agregarVertice(T vertice) {
    if (vertices.find(vertice) == vertices.end()) {
        ListaSimple<T> listaAdjacencia;
        vertices[vertice] = listaAdjacencia;
    } else {
        cout << "El vertice ya existe" << endl;
    }
}

template <class T>
void Grafo<T>::agregarArista(T origen, T destino) {
    if (vertices.find(origen) != vertices.end() && vertices.find(destino) != vertices.end()) {
        vertices[origen].agregar(destino);
    } else {
        cout << "Uno o ambos vertices no existen" << endl;
    }
}

template <class T>
void Grafo<T>::mostrarGrafo() const {
    for (auto const& vertice : vertices) {
        cout << vertice.first << ": ";
        vertice.second.mostrar();
    }
}

template <class T>
void Grafo<T>::eliminarArista(T origen, T destino) {
    if (vertices.find(origen) != vertices.end()) {
        vertices[origen].eliminar(destino);
    } else {
        cout << "El vertice de origen no existe" << endl;
    }
}

template <class T>
void Grafo<T>::eliminarVertice(T vertice) {
    if (vertices.find(vertice) != vertices.end()) {
        vertices.erase(vertice);
        for (auto& v : vertices) {
            v.second.eliminar(vertice);
        }
    } else {
        cout << "El vertice no existe" << endl;
    }
}