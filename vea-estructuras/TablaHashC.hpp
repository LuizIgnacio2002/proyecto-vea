#ifndef TABLAHASHC_HPP
#define TABLAHASHC_HPP

#include <string>
#include <iostream>

using namespace std;

template <typename T>
class TablaHashC {
private:
    static const int HashMod = 4;
    vector<string> tabla;
    
    unsigned long long ConvertirCaracterEntero(char entrada);
    unsigned long long ObtenerNumero(std::string entrada);
    int FuncionHash(std::string entrada, int intento);

public:
    TablaHashC();
    void insertarClave(std::string clave);
    void verElementos() const;
};

#include "TablaHashC.cpp"
#endif // TABLAHASHC_HPP