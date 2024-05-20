#ifndef TABLAHASHA_HPP
#define TABLAHASHA_HPP

#include <string>
#include <vector>
#include <iostream>

using namespace std;

template <typename T>
class TablaHashA {
private:
    static const int HashMod = 30;
    vector<vector<T>> tabla;
    
    unsigned long long ConvertirCaracterEntero(char entrada);
    unsigned long long ObtenerNumero(std::string entrada);
    int FuncionHash(std::string entrada);

public:
    TablaHashA();
    void insertarClave(std::string clave);
    void verElementos() const;
};

#include "TablaHashA.cpp"
#endif // TABLAHASHA_HPP