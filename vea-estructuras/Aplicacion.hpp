#ifndef APLICACION_H
#define APLICACION_H


#include "Matriz2D.hpp"
#include "ListaSimple.hpp"
#include "Pila.hpp"
#include "Cola.hpp"
#include "Grafo.hpp"
#include "ArbolBB.hpp"
#include "ArbolAVL.hpp"
#include "TablaHashA.hpp"
#include "TablaHashC.hpp"


#include "Registro.hpp"
#include <functional>

using namespace std;

class Aplicacion{
private:

    Matriz2D<Registro> matriz;
    ListaSimple<Registro> listasimple;
    Pila<Registro> pila;
    Cola<Registro> cola;
    Grafo<Registro> grafo;
    ArbolBB<Registro> arbolbb;
    ArbolAVL<Registro> arbolavl;
    TablaHashA<Registro> tablahasha;
    TablaHashC<Registro> tablahashc;
    function<int(Registro, Registro)> comparacion;
public:
    Aplicacion();
    ~Aplicacion();
    
    void menuMatriz();
    void menuListaSimple();
    void menuPila();
    void menuCola();
    void menuGrafo();

    void menuArbolBB();
    void menuArbolAVL();
    void menuTablaHashA();
    void menuTablaHashC();
    void menu();
    void iniciar();
};

#endif