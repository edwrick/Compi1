#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QFile"
#include "nodo.h"
#include "QTextStream"
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <QByteArray>
#include <QDebug>

using namespace std;
extern int yyrestart(FILE *archivo);
extern int yyparse();
extern Nodo *GetRaiz();
extern void NullRaiz();
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Calcular(Nodo* padre){


    switcher(padre);


}

Nodo* MainWindow::switcher(Nodo* padre){
    string token = padre->token;
    if(token=="LUC"){
        cout << endl << "Encontrado No terminal LUC";
        switcher(padre->hijos.at(0));

    }
    if(token=="UNIDAD_COMPILACION"){
        cout << endl << "Encontrado No terminal UNIDAD DE COMPILACION";
        switcher(padre->hijos.at(0));
        switcher(padre->hijos.at(1));

    }
    if(token=="IMPORTACIONES"){
        cout << endl << "Encontrado No terminal IMPORTACIONES";
        if(padre->hijos.count()>0){
            
        }

    }
    if(token=="DECLARACION_CLASE"){
        switch (padre->hijos.count()) {
        case 3:
            cout << endl << "Encontrado No terminal VISIBILIDAD";
            switcher(padre->hijos.at(0));
            cout << endl << "Encontrado No terminal Nombre";
            cout << endl << "Nombre de Clase: " << padre->hijos.at(1)->token;
            cout << endl << "Encontrado No terminal CUERPO_CLASE";
            switcher(padre->hijos.at(2));
            break;
        }

    }
    if(token=="VISIBILIDAD"){
        cout << endl << "Encontrado No terminal VISIBILIDAD";
        cout << endl << "VISIBILIDAD: "<< padre->text;

    }
    if(token=="CUERPO_CLASE"){
        cout << endl << "Encontrado No terminal CUERPO_CLASE";
        switcher(padre->hijos.at(0));

    }
    if(token=="SENTENCIAS_C"){
        cout << endl << "Encontrado No terminal SENTENCIAS_C";
        switcher(padre->hijos.at(0));

    }
    if(token=="FUNMETARR"){
        cout << endl << "Encontrado No terminal FUNMETARR";
        switch (padre->hijos.count()) {
        case 5:
            //visibilidad
            switcher(padre->hijos.at(0));
            //tipo
            switcher(padre->hijos.at(1));
            //nombrefuncion
            cout << endl << "Encontrado No terminal NOMBREFM";
            cout << endl << "NOMBRE: "<< padre->hijos.at(2)->text;
            //PARAMETROS
            switcher(padre->hijos.at(3));
            //SENTENCIAS DE FUNCION
            switcher(padre->hijos.at(4));
            break;
        }

    }
    if(token=="TIPO"){
        cout << endl << "Encontrado No terminal TIPO";
        cout << endl << "TIPO: "<< padre->hijos.at(0)->token;

    }
    if(token=="PARAMETROS_FM"){
        cout << endl << "Encontrado No terminal PARAMETROS_FM";
        switcher(padre->hijos.at(0));

    }
    if(token=="LPARAMETROS_FM"){
        cout << endl << "Encontrado No terminal LPARAMETROS_FM";
        for(int i=0;i<padre->hijos.count();i++){
            switcher(padre->hijos.at(i));
        }

    }
    if(token=="PARAMETRO_FM"){
        cout << endl << "Encontrado No terminal PARAMETRO_FM";
        cout << endl << "Nombre:  "<<padre->hijos.at(1)->token;
        Nodo *hijo = padre->hijos.at(0);
        cout << endl << "Tipo:  "<<hijo->hijos.at(0)->token;

    }
    if(token=="SENTENCIAS_FM"){
        cout << endl << "Encontrado No terminal SENTENCIAS_FM";
        for(int i=0;i<padre->hijos.count();i++){
            switcher(padre->hijos.at(i));
        }

    }
    if(token=="DECLARACION_VAR"){
        cout << endl << "Encontrado No terminal DECLARACION_VAR";
        cout << endl << "Visibilidad:  "<<padre->hijos.at(0)->text;
        Nodo *hijo = padre->hijos.at(1);
        cout << endl << "Tipo:  "<<hijo->hijos.at(0)->token;
        string tipo = hijo->hijos.at(0)->token;
        if(tipo=="int") tipo ="tEntero";
        if(tipo=="double") tipo ="tDecimal";
        if(tipo=="char") tipo ="tCaracter";
        if(tipo=="string") tipo ="tStr";
        hijo = padre->hijos.at(2);
        cout << endl << "Nombre:  "<<hijo->hijos.at(0)->token;
        Nodo *hijo2 = hijo->hijos.at(1);
        Nodo* asignacion = switcher(hijo2->hijos.at(0));
        string valor = asignacion->token;
        if(tipo=="bool"){
        if (valor=="true") tipo="tkTrue";
        if (valor=="false") tipo="tkFalse";
        }
        hijo->hijos.at(0)->setTipo(tipo);
        if(tipo==asignacion->lexema){
            if(asignacion->lexema=="tEntero" || asignacion->lexema=="tDecimal"){
                hijo->hijos.at(0)->setValor(atof(valor.c_str()));
            }
            if(asignacion->lexema=="tCaracter" || asignacion->lexema=="tStr"){
                hijo->hijos.at(0)->setValorS(valor);
            cout << endl << valor ;
            }
            if(asignacion->lexema=="tkTrue" || asignacion->lexema=="tkFalse"){
            if(asignacion->lexema=="tkTrue") hijo->hijos.at(0)->setValor(1);
            if(asignacion->lexema=="tkFalse") hijo->hijos.at(0)->setValor(0);
            }
            if(asignacion->lexema=="tId"){
                if(asignacion->valor!=NULL) hijo->hijos.at(0)->setValor(asignacion->valor);
                else hijo->hijos.at(0)->setValorS(asignacion->valorS);
            }
        }else{
        cout << endl << "Tipo de variable no corresponde al valor igualado.";
        }


    }
    if(token=="DECLARACION_ARREGLO"){
        cout << endl << "Encontrado No terminal DECLARACION_ARREGLO";
        cout << endl << "Visibilidad:  "<<padre->hijos.at(0)->text;
        Nodo *hijo = padre->hijos.at(1);
        cout << endl << "Tipo:  "<<hijo->hijos.at(0)->token;
        cout << endl << "Nombre:  "<<padre->hijos.at(2)->token;
        //DIMENSIONES
        switcher(padre->hijos.at(3));
        //ASIGNACION DE ARREGLO
        switcher(padre->hijos.at(4));

    }
    if(token=="DIMENSIONES"){
        cout << endl << "Encontrado No terminal DIMENSIONES";
        for(int i=0;i<padre->hijos.count();i++){
            switcher(padre->hijos.at(i));
        }

    }
    if(token=="C"){
        if(padre->hijos.count()==1){
            return switcher(padre->hijos.at(0));
        }else{
            //operacion + -
            Nodo* op1 = switcher(padre->hijos.at(0));
            if(op1->lexema=="tId") double x = op1->valor;
            Nodo* op2 = switcher(padre->hijos.at(0));
            if(op2->lexema=="tId") double x2 = op2->valor;

        }

    }
    if(token=="D"){
        if(padre->hijos.count()==1){
           return switcher(padre->hijos.at(0));
        }else{
            //operacion * /
        }

    }
    if(token=="F"){
        if(padre->hijos.count()==1){
           return switcher(padre->hijos.at(0));
        }else{
            //operacion pot
        }

    }
    if(token=="G"){
        if(padre->hijos.count()==1){
           return switcher(padre->hijos.at(0));
        }else{
            //operacion O
        }

    }
    
    if(token=="VALOR"){
        if(padre->hijos.at(0)->token=="LLAMA_MET" || padre->hijos.at(0)->token=="DATOARRAY"){
            return switcher(padre->hijos.at(0));
        }else{
            cout << endl << "Valor es : " << padre->hijos.at(0)->token;
            return padre->hijos.at(0);
        }

    }
    if(token=="ASIGNAR_ARREGLO"){
        cout << endl << "Encontrado No terminal ASIGNAR_ARREGLO";
        switcher(padre->hijos.at(0));

    }
    if(token=="ASG_ARR"){
        cout << endl << "Encontrado No terminal ASG_ARR";
        switcher(padre->hijos.at(0));

    }
    if(token=="ASG_VARS"){
        cout << endl << "Encontrado No terminal ASG_VARS";
        for(int i=0;i<padre->hijos.count();i++){
        switcher(padre->hijos.at(i));
        }

    }
    if(token=="O"){
        if(padre->hijos.count()==1){
            return switcher(padre->hijos.at(0));
        }else{
            //operacion or
        }

    }
    if(token=="X"){
        if(padre->hijos.count()==1){
           return switcher(padre->hijos.at(0));
        }else{
            //operacion xor
        }

    }
    if(token=="A"){
        if(padre->hijos.count()==1){
           return switcher(padre->hijos.at(0));
        }else{
            //operacion and
        }

    }
    if(token=="N"){
        if(padre->hijos.count()==1){
           return switcher(padre->hijos.at(0));
        }else{
            //operacion Not
        }

    }
    if(token=="Y"){

       return switcher(padre->hijos.at(0));

    }
    if(token=="OPR"){
        if(padre->hijos.count()==1){
           return  switcher(padre->hijos.at(0));
        }else{
            Nodo* nodo1 = switcher(padre->hijos.at(0));
            Nodo* nodo2 = switcher(padre->hijos.at(2));

        }

    }
    if(token=="PARA"){
        cout << endl << "ENCONTRADO NO TERMINAL PARA";
        switcher(padre->hijos.at(0));
        switcher(padre->hijos.at(1));
        switcher(padre->hijos.at(2));
        switcher(padre->hijos.at(3));

    }
    if(token=="ASIGNACION_VAR"){
        cout << endl << "Encontrado No terminal ASIGNACION_VAR";
        cout << endl << "Nombre variable: " << padre->hijos.at(0)->token;
        switcher(padre->hijos.at(1));

    }
    if(token=="CONDICION"){
        cout << endl << "Encontrado No terminal CONDICION";
        switcher(padre->hijos.at(0));

    }
    if(token=="DATO"){
        cout << endl << "Encontrado No terminal DATO";
        if(padre->hijos.at(0)->token=="DATO") return switcher(padre->hijos.at(0));
        else cout << endl << "Dato es : " << padre->hijos.at(0)->token;

    }
    if(token=="CUERPO_CONTROL"){
        cout << endl << "Encontrado No terminal CUERPO_CONTROL";
        switcher(padre->hijos.at(0));

    }
    if(token=="SENTENCIAS_CO"){
        cout << endl << "Encontrado No terminal SENTENCIAS_CO";
        if(padre->hijos.count()==1){
        switcher(padre->hijos.at(0));
        }else{
            switcher(padre->hijos.at(0));
            switcher(padre->hijos.at(1));
        }


    }
    if(token=="LLAMA_MET"){
        cout << endl << "Encontrado No terminal LLAMA_MET";
        //nombre dle metodo
        switcher(padre->hijos.at(0));
        //parametros
        switcher(padre->hijos.at(1));

    }
    if(token=="NOMBRE_LLAMADA"){
        cout << endl << "Encontrado No terminal NOMBRE_LLAMADA";
        //nombre dle metodo
        cout << endl << "Encontrado metodo pintar_con";

    }
    if(token=="PARAMS"){
        cout << endl << "Encontrado No terminal PARAMS";
        //parametros
        switcher(padre->hijos.at(0));

    }
    if(token=="LPARAMS"){
        cout << endl << "Encontrado No terminal LPARAMS";
        //parametros
        switcher(padre->hijos.at(0));

    }
    if(token=="PARAM"){
        cout << endl << "Encontrado No terminal PARAM";
        //parametros
        switcher(padre->hijos.at(0));

    }
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox msgBox;
    QString namefile="text.txt";
    QFile file("out.txt");
        file.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream out(&file);
        out << ui->textEdit->toPlainText();

        // optional, as QFile destructor will already do it:
        file.close();

        QString route = file.fileName();
        char ruta[56];
        QByteArray ba = route.toLatin1();
         const char *c_str2 = ba.data();
    FILE *archivoInput;

    archivoInput = fopen(c_str2, "r");
                        if(archivoInput!=NULL){
                            Nodo *root = NULL;
                            NullRaiz();
                            yyrestart(archivoInput);
                            yyparse();
                            root = GetRaiz();
                            if(root!=NULL){
                                Calcular(root->hijos.at(0));
                                msgBox.setText("Se procedera a la graficacion.");
                                msgBox.exec();

                            }else{
                                msgBox.setText("Fallo en codigo, no se graficara.");
                                msgBox.exec();

                            }
                            printf("\n\n");

                        }else{

                        }
}
