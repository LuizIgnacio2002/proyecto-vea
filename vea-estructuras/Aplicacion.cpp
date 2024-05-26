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
    int opcion;
    do{
        cout << "Menu de ListaSimple" << endl;
        cout << "1. Agregar" << endl;
        cout << "2. Mostrar" << endl;
        cout << "3. Actualizar" << endl;
        cout << "4. Eliminar" << endl;
        cout << "5. Salir" << endl;
        cout << "Opcion: "; cin >> opcion;

        int codigo;
        string nombre;
        double sueldo;

        switch(opcion){
            case 1:
                //agregarListaSimple();
                // read values from user
                
                cout << "Ingrese el codigo: "; cin >> codigo;
                cout << "Ingrese el nombre: "; cin >> nombre;
                cout << "Ingrese el sueldo: "; cin >> sueldo;
                
                listasimple.agregar(Registro(codigo, nombre, sueldo));
                break;
            case 2:
                //mostrarListaSimple();
                listasimple.mostrar();
                break;
            case 3:
                //actualizarListaSimple();
                cout << "Ingrese el codigo del registro a actualizar: "; cin >> codigo;
                cout << "Ingrese el nuevo nombre: "; cin >> nombre;
                cout << "Ingrese el nuevo sueldo: "; cin >> sueldo;
                listasimple.actualizar(Registro(codigo, nombre, sueldo));
                break;
            case 4:
                //eliminarListaSimple();
                cout << "Ingrese el codigo: "; cin >> codigo;
                listasimple.eliminar(Registro(codigo, "", 0));
                break;
        }
    }while(opcion != 5);
}

void Aplicacion::menuPila(){

}

void Aplicacion::menuCola(){

}

void Aplicacion::menuGrafo() {
    int opcion;
    do {
        cout << "Menu de Grafo" << endl;
        cout << "1. Agregar Vertice" << endl;
        cout << "2. Agregar Arista" << endl;
        cout << "3. Mostrar Grafo" << endl;
        cout << "4. Eliminar Arista" << endl;
        cout << "5. Eliminar Vertice" << endl;
        cout << "6. Salir" << endl;
        cout << "Opcion: "; cin >> opcion;

        int codigo, codigo2;
        string nombre, nombre2;
        double sueldo, sueldo2;

        switch (opcion) {
            case 1:
                cout << "Ingrese el codigo del vertice: "; cin >> codigo;
                cout << "Ingrese el nombre: "; cin >> nombre;
                cout << "Ingrese el sueldo: "; cin >> sueldo;
                grafo.agregarVertice(Registro(codigo, nombre, sueldo));
                break;
            case 2:
                cout << "Ingrese el codigo del vertice origen: "; cin >> codigo;
                cout << "Ingrese el nombre origen: "; cin >> nombre;
                cout << "Ingrese el sueldo origen: "; cin >> sueldo;
                cout << "Ingrese el codigo del vertice destino: "; cin >> codigo2;
                cout << "Ingrese el nombre destino: "; cin >> nombre2;
                cout << "Ingrese el sueldo destino: "; cin >> sueldo2;
                grafo.agregarArista(Registro(codigo, nombre, sueldo), Registro(codigo2, nombre2, sueldo2));
                break;
            case 3:
                grafo.mostrarGrafo();
                break;
            case 4:
                cout << "Ingrese el codigo del vertice origen: "; cin >> codigo;
                cout << "Ingrese el codigo del destino: "; cin >> codigo2;
                grafo.eliminarArista(Registro(codigo, "", 0), Registro(codigo2, "", 0));
                break;
            case 5:
                cout << "Ingrese el codigo del vertice a eliminar: "; cin >> codigo;
                grafo.eliminarVertice(Registro(codigo, "", 0));
                break;
        }
    }while(opcion != 6);
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
        cout << "4. Grafo" << endl;
        cout << "5. ArbolBB" << endl;
        cout << "6. ArbolAVL" << endl;
        cout << "7. TablaHashA" << endl;
        cout << "8. TablaHashC" << endl;
        cout << "9. Salir" << endl;
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
                Aplicacion::menuGrafo();
                break;
            case 5: 
                Aplicacion::menuArbolBB();
                break;
            case 6:
                Aplicacion::menuArbolAVL();
                break;
            case 7:
                Aplicacion::menuTablaHashA();
                break;
            case 8:
                Aplicacion::menuTablaHashC();
                break;
        }
    }while(opcion != 9);
}

void Aplicacion::iniciar(){
    Aplicacion::menu();
}

