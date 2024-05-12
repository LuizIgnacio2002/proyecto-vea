#include "Aplicacion.hpp"

Aplicacion::Aplicacion(){
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

Aplicacion::~Aplicacion(){}

void Aplicacion::menuListaSimple(){

}

void Aplicacion::menuPila(){

}

void Aplicacion::menuCola(){

}

void Aplicacion::menuArbolBB(){
    int opcion;
    do{
        cout << "Menu de ArbolBB" << endl;
        cout << "1. Agregar" << endl;
        cout << "2. Mostrar" << endl;
        cout << "3. Actualizar" << endl;
        cout << "4. Eliminar" << endl;
        cout << "5. Salir" << endl;
        cout << "Opcion: "; cin >> opcion;

        switch(opcion){
            case 1:
                //agregarArbolBB();
                break;
            case 2:
                //mostrarArbolBB();
                break;
            case 3:
                //actualizarArbolBB();
                break;
            case 4:
                //eliminarArbolBB();
                break;
        }
    }while(opcion != 5);
}


void Aplicacion::menuArbolAVL(){
    int opcion;
    do{
        cout << "Menu de ArbolAVL" << endl;
        cout << "1. Agregar" << endl;
        cout << "2. Mostrar" << endl;
        cout << "3. Actualizar" << endl;
        cout << "4. Eliminar" << endl;
        cout << "5. Salir" << endl;
        cout << "Opcion: "; cin >> opcion;

        switch(opcion){
            case 1:
                //agregarArbolAVL();
                break;
            case 2:
                //mostrarArbolAVL();
                break;
            case 3:
                //actualizarArbolAVL();
                break;
            case 4:
                //eliminarArbolAVL();
                break;
        }
    }while(opcion != 5);
}

void Aplicacion::menuTablaHashA(){

}

void Aplicacion::menuTablaHashC(){
        
}

void Aplicacion::menu(){
    int opcion;
    do{
        cout << "Menu de opciones" << endl;
        cout << "1. ListaSimple" << endl;
        cout << "2. Pila" << endl;
        cout << "3. Cola" << endl;
        cout << "4. ArbolBB" << endl;
        cout << "5. ArbolAVL" << endl;
        cout << "6. TablaHashA" << endl;
        cout << "7. TablaHashC" << endl;
        cout << "8. Salir" << endl;
        cout << "Opcion: "; cin >> opcion;

        switch(opcion){
            case 1:
                Aplicacion::menuListaSimple();
                break;
            case 2:
                Aplicacion::menuPila();
                break;
            case 3:
                Aplicacion::menuCola();
                break;
            case 4:
                Aplicacion::menuArbolBB();
                break;
            case 5:
                Aplicacion::menuArbolAVL();
                break;
            case 6:
                Aplicacion::menuTablaHashA();
                break;
            case 7:
                Aplicacion::menuTablaHashC();
                break;
            case 8:
                cout << "Hasta pronto" << endl;
        }
    }while(opcion != 8);
    
}

void Aplicacion::iniciar(){
    Aplicacion::menu();
}