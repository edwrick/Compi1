#ifndef NODOSIMPLE_H
#define NODOSIMPLE_H
#include "QString"
#include "string"
#include <iostream>
using namespace std;
class NodoS {
public:

    /*
     * Constructor de la clase MyNode
     */
    NodoS(string id,string tipo,string rol,string ambito,double valor,string valorS) {
        this->id=id;
        this->tipo=tipo;
        this->rol=rol;
        this->ambito=ambito;
        this->valor=valor;
        this->valorS=valorS;
    }


    /*
     * Metodo para obtener el valor del nodo
     */

    string getId() {
        return this->id;
    }
    string getTipo() {
        return this->tipo;
    }
    string getRol() {
        return this->rol;
    }
    string getAmbit() {
        return this->ambito;
    }
    double getValor() {
        return this->valor;
    }
    string getValorS() {
        return this->valorS;
    }

    void setValor(double valor){
        this->valor=valor;
    }

    void setValorS(string valorS){
        this->valorS=valorS;
    }
    // Apuntador al siguiente nodo
    NodoS *next;
    string id,tipo,rol,ambito,valorS;
    double valor;
private:
    // Valor



};
#endif // NODOSIMPLE_H
