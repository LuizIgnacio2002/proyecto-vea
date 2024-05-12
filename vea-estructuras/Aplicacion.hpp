#ifndef APLICACION_H
#define APLICACION_H

#include "ArbolBB.hpp"
#include "ArbolAVL.hpp"
#include "TablaHashA.hpp"
#include "TablaHashC.hpp"

#include "Registro.hpp"
#include <functional>

using namespace std;

class Aplicacion{
private:
    ArbolBB<Registro> arbolbb;
    ArbolAVL<Registro> arbolavl;
    TablaHashA<Registro> tablahasha;
    TablaHashC<Registro> tablahashc;
    function<int(Registro, Registro)> comparacion;
public:
    Aplicacion();
    ~Aplicacion();
    void menuArbolBB();
    void menuArbolAVL();
    void menuTablaHashA();
    void menuTablaHashC();
    void menu();
    void iniciar();
};

#endif