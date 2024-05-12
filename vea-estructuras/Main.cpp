#include "Aplicacion.hpp"
#include <iostream>

using namespace std;

int main(){
    Registro r1(123, "Jose", 1800.50);
    Registro r2(123, "Jose", 1800.50);
    cout << r1 << endl;
    cout << r2 << endl;
    auto comparacionCodigo = [](Registro r1, Registro r2){
        if(r1.getCodigo() == r2.getCodigo()){
            return 0;
        }else if(r1.getCodigo() < r2.getCodigo()){
            return 1;
        }else{
            return -1;
        }
    };
    cout << comparacionCodigo(r1, r2) << endl;
    return 0;
}