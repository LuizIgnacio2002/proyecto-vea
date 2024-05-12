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
    // Metodo set y get
    int getCodigo(){ return codigo; }
    string getNombre(){ return nombre; }
    double getSueldo(){ return sueldo; }
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
};