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
    function<int(T, T)> comparacion;
public:
    Aplicacion(){
        auto comparacionCodigo = [](Registro r1, Registro r2){
            if(r1.getCodigo() == r2.getCodigo()){
                return 0;
            }else if(r1.getCodigo() < r2.getCodigo()){
                return 1;
            }else{
                return -1;
            }
        };

        auto comparacionSueldo = [](Registro r1, Registro r2){
            if(r1.getSueldo() == r2.getSueldo()){
                return 0;
            }else if(r1.getSueldo() < r2.getSueldo()){
                return 1;
            }else{
                return -1;
            }
        };

        this->comparacion = comparacionCodigo;
    }
    ~Aplicacion(){}

    void iniciar(){
        
    }
};