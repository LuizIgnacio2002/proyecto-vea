#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <iostream>
#include <unordered_map>
#include "ListaSimple.hpp"

using namespace std;

template <class T>
class Grafo {
private:
    unordered_map<T, ListaSimple<T>> vertices;

public:
    Grafo();
    ~Grafo();
    void agregarVertice(T vertice);
    void agregarArista(T origen, T destino);
    void mostrarGrafo() const;
    void eliminarArista(T origen, T destino);
    void eliminarVertice(T vertice);
};

#include "Grafo.cpp"

#endif // GRAFO_HPP