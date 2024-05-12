#include "ArbolBB.hpp"
#include "ArbolAVL.hpp"
#include "TablaHashA.hpp"
#include "TablaHashC.hpp"

#include "Registro.hpp"

class Aplicacion{
private:
    ArbolBB<Registro> arbolbb;
    ArbolAVL<Registro> arbolavl;
    TablaHashA<Registro> tablahasha;
    TablaHashC<Registro> tablahashc;
public:
    Aplicacion(){

    }
    ~Aplicacion(){}
    
    void iniciar(){

    }
};