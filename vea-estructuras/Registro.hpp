#include <iostream>

using namespace std;

class Registro {
private:
    int codigo;
    string nombre;
    double sueldo;
public:
    Registro(){}
    Registro(int codigo, string nombre, double sueldo){
        this->codigo = codigo;
        this->nombre = nombre;
        this->sueldo = sueldo;
    }
    ~Registro(){}
    // Metodos get
    int getCodigo() const { return codigo; }
    string getNombre() const { return nombre; }
    double getSueldo() const { return sueldo; }
    // Metodos set
    void setCodigo(int codigo){ codigo = codigo; }
    void setNombre(string nombre){ nombre = nombre; }
    void setSueldo(double sueldo){ sueldo = sueldo; }
    // Sobrecarga de escritura
    friend ostream &operator <<(ostream &os, Registro p){
        os << p.codigo << ",";
        os << p.nombre << ",";
        os << p.sueldo;
        return os;
    }

    bool operator==(const Registro& other) const {
        return codigo == other.codigo;
    }
    
};

namespace std {
    template <>
    struct hash<Registro> {
        size_t operator()(const Registro& r) const {
            return hash<int>()(r.getCodigo());
        }
    };
}