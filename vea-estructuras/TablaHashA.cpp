#include "TablaHashA.hpp"

template <typename T>
TablaHashA<T>::TablaHashA() {
    tabla.resize(HashMod);
}

template <typename T>
unsigned long long TablaHashA<T>::ConvertirCaracterEntero(char entrada) {
    unsigned long long Salida;
    Salida = entrada;
    return Salida;
}

template <typename T>
unsigned long long TablaHashA<T>::ObtenerNumero(std::string entrada) {
    unsigned long long Salida = 0;
    for (int i = 0; entrada[i] != '\0'; i++) {
        if (entrada[1 + i] == '\0' && i == 0)
            Salida += ConvertirCaracterEntero(entrada[i]);
        else {
            if (i == 0) {
                Salida += ConvertirCaracterEntero(entrada[i]);
                continue;
            } else {
                int miChar = ConvertirCaracterEntero(entrada[i]);
                if (miChar > 99) {
                    Salida *= 1000;
                } else if (miChar > 9) {
                    Salida *= 100;
                }
                Salida += miChar;
            }
        }
    }
    return Salida;
}

template <typename T>
int TablaHashA<T>::FuncionHash(std::string entrada) {
    unsigned long long Amodular = ObtenerNumero(entrada);
    int Salida = Amodular % HashMod;
    return Salida;
}

template <typename T>
void TablaHashA<T>::insertarClave(std::string clave) {
    int Posicion = FuncionHash(clave);
    tabla[Posicion].push_back(clave);
}

template <typename T>
void TablaHashA<T>::verElementos() const {
    for (int i = 0; i < HashMod; i++) {
        cout << "Elemento #" << i << ": ";
        for (const auto& clave : tabla[i]) {
            cout << clave << " ";
        }
        cout << "\n";
    }
}