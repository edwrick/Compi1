#ifndef NODO_H
#define NODO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "QString"
#include "QList"
using namespace std;


class Nodo{
    public:

        string token;
        string lexema;
        string text;
        double valor;
        string valorS;
        string tipo;
        int fila;
        int columna;
        QList<Nodo*> hijos;
        int nHijos;
        //Nodo *hijos[15];

        void setTipo(string tipo){
            this->tipo=tipo;
        }

        void setValor(double valor){
            this->valor = valor;
        }

        void setValorS(string valorS){
            this->valorS=valorS;
        }

        Nodo(string token, int fila, int columna){

            this->token = token;
            this->fila = fila;
            this->columna = columna;
            this->nHijos = 0;

        }
        Nodo(string lexema,string token, int fila, int columna){

            this->token = token;
            this->lexema = lexema;
            this->fila = fila;
            this->columna = columna;
            this->nHijos = 0;

        }

        void addHijo(Nodo *hijo){
            //this->hijos[this->nHijos] = hijo;
            this->nHijos++;
        }
};
#endif // NODO_H
