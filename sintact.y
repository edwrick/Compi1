%{
#include <iostream>
#include "nodo.h"
#include "lexico.h"
#include <string>
#include <vector>
#include <QList>
using namespace std;

extern int yylineno;
extern char *yytext;
extern int yyfila;
extern int yycolumna;
extern Nodo *raizAST;

Nodo *raiz = NULL;


Nodo *GetRaiz(){
    return raiz;
}

void NullRaiz(){
    raiz = NULL;
}

int yyerror(const char *error){
    cout<<"\n\nError Sintactico:\n"<<error<<"\n\n";
    raiz = NULL;
    return 0;
}

%}

%error-verbose

%union {
    int entero;
    char cadena[256];
    struct Nodo* nodo;
}


%token tk_lex_error
%token tkfin
%token tkAbre //¿
%token tkCierra //?
%token tkint
%token tkdouble
%token tkbool
%token tkchar
%token tString
%token tkIgual //==
%token tkDif //!=
%token tkmenor
%token tkmenoreq
%token tkmayor
%token tkmayoreq
%token tkor //||
%token tkand //&&
%token tknand //!&&
%token tknor //!||
%token tkxor //&|
%token tknot //!
%token tkmas
%token tkmenos
%token tkdiv
%token tkpor
%token tkpot
%token tkcma //,
%token tkptocma
%token tkeq //=
%token tkaum //++
%token tkdec //--
%token<cadena> tId
%token<cadena> tEntero
%token<cadena> tDecimal
%token<cadena> tCaracter
%token<cadena> tStr
%token tkTrue
%token tkFalse
%token tkclase
%token tkimport
%token tkpublico
%token tkprivado
%token tVar
%token tkarreglo
%token tkCorA //[
%token tkCorC //]
%token tkParA //(
%token tkParC //)
%token tkLlaA //{
%token tkLlaC //}
%token tksi
%token tksino
%token tksinosi
%token tkpara
%token tkmientras
%token tkhacer
%token tkretorna
%token tkgraficar
%token tkpintar
%token tkmain
%token tksalir
%token tkvoid

%type<nodo> LENGUAJE
%type<nodo> LUC
%type<nodo> UNIDAD_COMPILACION
%type<nodo> IMPORTACION
%type<nodo> DECLARACION_CLASE
%type<nodo> VISIBLE
%type<nodo> VISIBILIDAD
%type<nodo> NOMBRE
%type<nodo> CUERPO_CLASE
%type<nodo> DECLARACION_VARIABLE
%type<nodo> NOMBRES
%type<nodo> LNOMBRESA
%type<nodo> LNOMBRES
%type<nodo> ASIGNAR
%type<nodo> ASIGNACION_VARIABLE
%type<nodo> ASIG_SIMPLIF
%type<nodo> AUMENTO
%type<nodo> DECREMENTO
%type<nodo> DATO
%type<nodo> DECLARACION_ARREGLO
%type<nodo> DIMENSIONES
%type<nodo> DIMENSION
%type<nodo> ASG_ARR
%type<nodo> ASIGNAR_ARREGLO
%type<nodo> ASG_VARS
%type<nodo> ASG_VAR
%type<nodo> ASIGNACION_ARR
%type<nodo> ASG_POS_ARR
%type<nodo> SI
%type<nodo> CONDICION
//%type<nodo> MAS_SI
//%type<nodo> SINO_SI
%type<nodo> SINO
%type<nodo> PARA
%type<nodo> D_A
%type<nodo> ACCION_POST
%type<nodo> MIENTRAS
%type<nodo> HACER_MIENTRAS
%type<nodo> FUNMENT
%type<nodo> TIPOFM
%type<nodo> LPARAMETROS_FM
%type<nodo> PARAMETROS_FM
%type<nodo> PARAMETRO_FM
%type<nodo> RETORNO
%type<nodo> SENTENCIAS_C
%type<nodo> SENTENCIA_C
%type<nodo> CUERPO_FM
%type<nodo> SENTENCIAS_FM
%type<nodo> SENTENCIA_FM
%type<nodo> CUERPO_CONTROL
%type<nodo> SENTENCIAS_CO
%type<nodo> SENTENCIA_CO
%type<nodo> SENT_DECLARACION
%type<nodo> SENT_ASIGNACION
%type<nodo> SENT_FUNCION
%type<nodo> SENT_CONTROL
%type<nodo> LLAMA_MET
%type<nodo> OPERACION
%type<nodo> OPERACION_LOGICA
%type<nodo> OPERACION_RELACIONAL
%type<nodo> OPERACION_ARITMETICA
%type<nodo> OPR
%type<nodo> OPA
%type<nodo> O
%type<nodo> X
%type<nodo> A
%type<nodo> N
%type<nodo> Y
%type<nodo> RELACION
%type<nodo> C
%type<nodo> D
%type<nodo> F
%type<nodo> G
%type<nodo> VALOR
%type<nodo> DATOARRAY
%type<nodo> TIPO
%type<nodo> OR
%type<nodo> AND
//%type<nodo> ACCESO_ATRI
%type<nodo> NOMBRE_LLAMADA
%type<nodo> NOMBREFM
%type<nodo> IMPORTACIONES
%type<nodo> NOMBRE_ASIGNAR
//%type<nodo> LOPER
//%type<nodo> LATRI
//%type<nodo> ATRI
%type<nodo> LPARAMS
%type<nodo> PARAMS
%type<nodo> PARAM

%destructor { free ($$); } <nodo>

%%

LENGUAJE: LUC{
    Nodo *aux = new Nodo("LENGUAJE", yylineno, yycolumna);
    aux->hijos.push_back($1);
    raiz = aux;
    yylineno = 1;
    $$ = aux;
};

LUC: LUC UNIDAD_COMPILACION {
    $$ = $1;
    $1->hijos.push_back($2);
}
| UNIDAD_COMPILACION {
    Nodo *aux = new Nodo("LUC", yylineno, yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
};

UNIDAD_COMPILACION: IMPORTACIONES DECLARACION_CLASE{
    Nodo *aux = new Nodo("UNIDAD_COMPILACION", yylineno, yycolumna);
    aux->hijos.push_back($1);
    aux->hijos.push_back($2);
    $$ = aux;
};
DECLARACION_CLASE: VISIBLE tkclase NOMBRE tkAbre CUERPO_CLASE tkCierra{
    Nodo *aux = new Nodo("DECLARACION_CLASE",yylineno,yycolumna);
    aux->hijos.push_back($1);
    aux->hijos.push_back($3);
    aux->hijos.push_back($5);
    $$ = aux;
}
| error tkAbre CUERPO_CLASE tkCierra{
    Nodo *aux = new Nodo("SINTACTIC_ERROR","Error declaracion de clase",yylineno,yycolumna);
    aux->hijos.push_back($3);
    $$ = aux;
};

IMPORTACIONES: IMPORTACIONES IMPORTACION {
    $$ = $1;
    $1->hijos.push_back($2);
}
| IMPORTACIONES error tkfin{
    $$ = $1;
}
| {
    Nodo *aux = new Nodo("IMPORTACIONES",yylineno,yycolumna);
    $$ = aux;
};
IMPORTACION: tkimport NOMBRE tkfin{
    Nodo *aux = new Nodo("IMPORTACIONES",yylineno,yycolumna);
    aux->hijos.push_back($2);
    $$ = aux;
};

VISIBLE: VISIBILIDAD {
    $$ = $1;
}
| {
    Nodo *aux = new Nodo("VISIBILIDAD",yylineno,yycolumna);
    aux->text = "publico";
    $$ = aux;
};
VISIBILIDAD: tkpublico {
    Nodo *aux = new Nodo("VISIBILIDAD", yylineno, yycolumna);
    aux->text = "publico";
    aux->hijos.push_back(aux);

    $$ = aux;
}
| tkprivado {
    Nodo *aux = new Nodo("VISIBILIDAD", yylineno, yycolumna);
    aux->text = "privado";
    aux->hijos.push_back(aux);

    $$ = aux;
};
TIPO: tkint {
        Nodo *aux = new Nodo("TIPO", yylineno, yycolumna);
        Nodo *aux2 = new Nodo("tkint","int",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| tkbool {
        Nodo *aux = new Nodo("TIPO", yylineno, yycolumna);
        Nodo *aux2 = new Nodo("tkbool","bool",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| tkchar {
        Nodo *aux = new Nodo("TIPO", yylineno, yycolumna);
        Nodo *aux2 = new Nodo("tkchar","char",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| tString {
        Nodo *aux = new Nodo("TIPO", yylineno, yycolumna);
        Nodo *aux2 = new Nodo("tString","string",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| tkdouble {
        Nodo *aux = new Nodo("TIPO", yylineno, yycolumna);
        Nodo *aux2 = new Nodo("tkdouble","double",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    };

CUERPO_CLASE: SENTENCIAS_C {
    Nodo *aux = new Nodo("CUERPO_CLASE", yylineno, yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
};
SENTENCIAS_C: SENTENCIAS_C SENTENCIA_C {
    $$ = $1;
    $1->hijos.push_back($2);
}
| SENTENCIAS_C error tkfin{
    $$ = $1;
}
| {
    Nodo *aux = new Nodo("SENTENCIAS_C", yylineno, yycolumna);
    $$ = aux;
};
SENTENCIA_C: SENT_DECLARACION { $$ = $1 ;}
| SENT_ASIGNACION { $$ = $1 ;}
| SENT_FUNCION { $$ = $1 ;};

SENT_DECLARACION: DECLARACION_VARIABLE tkfin {
        $$ = $1;
}
| DECLARACION_ARREGLO tkfin {
        $$ = $1;
};

SENT_ASIGNACION: ASIGNACION_VARIABLE tkfin {
    $$ = $1;
}
| ASIGNACION_ARR tkfin {
    $$ = $1;
}
| ASG_POS_ARR tkfin {
        $$ = $1;
};
SENT_FUNCION: FUNMENT { $$ = $1; };

DECLARACION_VARIABLE: VISIBLE tVar TIPO NOMBRES {
        //Corregir la forma de asignar en una declaracion
    Nodo *aux = new Nodo("DECLARACION_VAR",yylineno,yycolumna);
    aux->hijos.push_back($1);
    aux->hijos.push_back($3);
    aux->hijos.push_back($4);
    //aux->hijos.push_back($5);
    $$ = aux;
};
NOMBRES: LNOMBRESA {
    Nodo *aux = new Nodo("NOMBRES", yylineno, yycolumna);
    aux->hijos.push_back($1);
    $$ = $1;
}
| LNOMBRES{
    Nodo *aux = new Nodo("NOMBRES", yylineno, yycolumna);
    aux->hijos.push_back($1);
    $$ = $1;
};
LNOMBRES: LNOMBRES tkcma NOMBRE {
    $$ = $1;
    $1->hijos.push_back($3);
}
| NOMBRE {
    Nodo *aux = new Nodo("LNOMBRES", yylineno, yycolumna);
    aux->hijos.push_back($1);
    $$ = $1;
};
LNOMBRESA: LNOMBRESA tkcma NOMBRE_ASIGNAR {
    $$ = $1;
    $1->hijos.push_back($3);
}
| NOMBRE_ASIGNAR {
    Nodo *aux = new Nodo("LNOMBRESA", yylineno, yycolumna);
    aux->hijos.push_back($1);
    $$ = $1;
};

NOMBRE_ASIGNAR: LNOMBRES ASIGNAR {
        Nodo *aux = new Nodo("NOMBRE_ASIGNAR",yylineno,yycolumna);
        aux->hijos.push_back($1);
        aux->hijos.push_back($2);
        $$ = aux;
};

ASIGNAR: tkeq OPERACION {
        Nodo *aux = new Nodo("ASIGNAR",yylineno,yycolumna);
        aux->hijos.push_back($2);
        $$ = aux;
    };

ASIGNACION_VARIABLE: NOMBRE tkeq OPERACION {
        Nodo *aux = new Nodo("ASIGNACION_VAR", yylineno, yycolumna);
        aux->hijos.push_back($1);
        aux->hijos.push_back($3);
        $$ = aux;
    };
ASIG_SIMPLIF: AUMENTO {
        $$ = $1;
    }
| DECREMENTO {
        $$ = $1;
    };
AUMENTO: DATO tkaum {
        Nodo *aux = new Nodo("AUMENTO",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = $1;
    };
DECREMENTO: DATO tkdec {
        Nodo *aux = new Nodo("DECREMENTO",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = $1;
    };
DATO: tEntero {
        Nodo *aux = new Nodo("DATO",yylineno,yycolumna);
        Nodo *aux2 = new Nodo("tEntero",string($1),yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| tDecimal {
        Nodo *aux = new Nodo("DATO",yylineno,yycolumna);
        Nodo *aux2 = new Nodo("tDecimal",string($1),yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| tId {
        Nodo *aux = new Nodo("DATO",yylineno,yycolumna);
        Nodo *aux2 = new Nodo("tId",string($1),yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| DATOARRAY {
        Nodo *aux = new Nodo("DATO",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = aux;
    };

DECLARACION_ARREGLO: VISIBLE tVar TIPO tkarreglo LNOMBRES DIMENSIONES ASIGNAR_ARREGLO {
     Nodo *aux = new Nodo("DECLARACION_ARREGLO",yylineno,yycolumna);
     aux->hijos.push_back($1);
     aux->hijos.push_back($3);
     aux->hijos.push_back($5);
     aux->hijos.push_back($6);
     aux->hijos.push_back($7);
     $$ = aux;
    };
DIMENSIONES: DIMENSION {
        Nodo *aux = new Nodo("DIMENSIONES",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = aux;
    }
| DIMENSION DIMENSION {
        Nodo *aux = new Nodo("DIMENSIONES",yylineno,yycolumna);
        aux->hijos.push_back($1);
        aux->hijos.push_back($2);
        $$ = aux;
    }
| DIMENSION DIMENSION DIMENSION {
        Nodo *aux = new Nodo("DIMENSIONES",yylineno,yycolumna);
        aux->hijos.push_back($1);
        aux->hijos.push_back($2);
        aux->hijos.push_back($3);
        $$ = aux;
    };

DIMENSION: tkCorA OPERACION_ARITMETICA tkCorC {
        $$ = $2;
    };

ASIGNACION_ARR: NOMBRE ASIGNAR_ARREGLO{
        Nodo *aux = new Nodo("ASIGNACION_ARR",yylineno,yycolumna);
        aux->hijos.push_back($1);
        aux->hijos.push_back($2);
        $$ = aux;
    };

ASG_ARR: tkLlaA ASG_VARS tkLlaC{
      Nodo *aux = new Nodo("ASG_ARR",yylineno,yycolumna);
      aux->hijos.push_back($2);
      $$ = aux;
    };
ASIGNAR_ARREGLO: tkeq ASG_ARR {
        Nodo *aux = new Nodo("ASIGNAR_ARREGLO",yylineno,yycolumna);
        aux->hijos.push_back($2);
        $$ = aux;
    }
| /*vacio */{
    Nodo *aux = new Nodo("ASIGNAR_ARREGLO",yylineno,yycolumna);
    $$ = aux;
    };

ASG_VARS: ASG_VAR {
        Nodo *aux = new Nodo("ASG_VARS",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = aux;
    }
| ASG_VARS tkcma ASG_VAR {
     $$ = $1;
     $1->hijos.push_back($3);
    };

ASG_VAR: OPERACION {
        Nodo *aux = new Nodo("ASG_VAR",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = $1;
    }
| ASG_ARR {
        Nodo *aux = new Nodo("ASG_VAR",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = $1;
    };

ASG_POS_ARR: NOMBRE DIMENSIONES tkeq OPERACION {
        Nodo *aux = new Nodo("ASG_POS_ARR",yylineno,yycolumna);
        aux->hijos.push_back($1);
        aux->hijos.push_back($2);
        aux->hijos.push_back($4);
        $$ = aux;
    };

SI:
    /*tksi tkParA error tkParC tkAbre CUERPO_CONTROL tkCierra SINO {
        Nodo *aux = new Nodo("ERROR_SINTACTICO",yylineno,yycolumna);
        $$ = aux;
    }
| tksi tkParA error tkParC tkAbre CUERPO_CONTROL tkCierra {
        Nodo *aux = new Nodo("ERROR_SINTACTICO",yylineno,yycolumna);
        $$ = aux;
    }*/
tksi tkParA CONDICION tkParC tkAbre CUERPO_CONTROL tkCierra SINO {
        Nodo *aux = new Nodo("SI",yylineno,yycolumna);
        aux->hijos.push_back($3);
        aux->hijos.push_back($6);
        aux->hijos.push_back($8);
        $$ = aux;
        }
| tksi tkParA CONDICION tkParC tkAbre CUERPO_CONTROL tkCierra {
        Nodo *aux = new Nodo("SI",yylineno,yycolumna);
        aux->hijos.push_back($3);
        aux->hijos.push_back($6);
        $$ = aux;
    };
//MAS_SI: MAS_SI SINO_SI {
//        $$ = $1;
//        $1->hijos.push_back($2);
//    }
//| SINO_SI {
//        Nodo *aux = new Nodo("MAS_SI",yylineno,yycolumna);
//        aux->hijos.push_back($1);
//        $$ = aux;
//    };
SINO: tksino tkAbre CUERPO_CONTROL tkCierra {
        Nodo *aux = new Nodo("SINO",yylineno,yycolumna);
        aux->hijos.push_back($3);
        $$ = aux;
    };
//SINO_SI: tksinosi tkParA CONDICION tkParC tkAbre CUERPO_CONTROL tkCierra {
//        Nodo *aux = new Nodo("SINO_SI",yylineno,yycolumna);
//        aux->hijos.push_back($3);
//        aux->hijos.push_back($6);
//        $$ = aux;
//    }
//| tksinosi tkParA CONDICION tkParC tkAbre CUERPO_CONTROL tkCierra SINO {
//        Nodo *aux = new Nodo("SINO_SI",yylineno,yycolumna);
//        aux->hijos.push_back($3);
//        aux->hijos.push_back($6);
//        aux->hijos.push_back($8);
//        $$ = aux;
//    };

PARA: tkpara tkParA D_A tkptocma CONDICION tkptocma ACCION_POST tkParC tkAbre CUERPO_CONTROL tkCierra {
        Nodo *aux = new Nodo("PARA", yylineno, yycolumna);
        aux->hijos.push_back($3);
        aux->hijos.push_back($5);
        aux->hijos.push_back($7);
        aux->hijos.push_back($10);
        $$ = aux;
    }
/*| tkpara tkParA error tkParC tkAbre CUERPO_CONTROL tkCierra{
        $$ = new Nodo("ERROR_SINTACTICO",yylineno,yycolumna);
    }*/;
D_A: DECLARACION_VARIABLE {
        $$ = $1;
    }
| ASIGNACION_VARIABLE {
        $$ = $1;
    };
ACCION_POST: ASIGNACION_VARIABLE {
        $$ = $1;
    }
| ASIG_SIMPLIF {
        $$ = $1;
    };

MIENTRAS: tkmientras tkParA CONDICION tkParC tkAbre CUERPO_CONTROL tkCierra {
        Nodo *aux = new Nodo("MIENTRAS",yylineno,yycolumna);
        aux->hijos.push_back($3);
        aux->hijos.push_back($6);
        $$ = aux;
    }
    /*| tkmientras tkParA error tkParC tkAbre CUERPO_CONTROL tkCierra{
        $$ = new Nodo("ERROR_SINTACTICO",yylineno,yycolumna);
    }*/;

HACER_MIENTRAS: tkhacer tkAbre CUERPO_CONTROL tkCierra tkmientras tkParA CONDICION tkParC {
        Nodo *aux = new Nodo("HACER_MIENTRAS",yylineno,yycolumna);
        aux->hijos.push_back($3);
        aux->hijos.push_back($7);
        $$ = aux;
    };

FUNMENT: VISIBLE TIPOFM NOMBREFM tkParA PARAMETROS_FM tkParC tkAbre CUERPO_FM tkCierra {
        Nodo *aux = new Nodo("FUNMET",yylineno,yycolumna);
        aux->hijos.push_back($1);
        aux->hijos.push_back($2);
        aux->hijos.push_back($3);
        aux->hijos.push_back($5);
        aux->hijos.push_back($8);
        $$ = aux;
    }
| VISIBLE TIPOFM tkCorA tkCorC NOMBREFM tkParA PARAMETROS_FM tkParC tkAbre CUERPO_FM tkCierra {
    Nodo *aux = new Nodo("FUNMETARR",yylineno,yycolumna);
    aux->hijos.push_back($1);
    aux->hijos.push_back($2);
    aux->hijos.push_back($5);
    aux->hijos.push_back($7);
    aux->hijos.push_back($10);
    $$ = aux;
};

TIPOFM: TIPO {
    $$ = $1;
}
| tkvoid {
    Nodo *aux = new Nodo("TIPO", yylineno, yycolumna);
    Nodo *aux2 = new Nodo("tkvoid","void",yylineno,yycolumna);
    aux->hijos.push_back(aux2);
    $$ = aux;
};
NOMBREFM: tkmain {
        Nodo *aux = new Nodo("NOMBREFM","main",yylineno,yycolumna);
        $$ = aux;
    }
| tId {
        Nodo *aux = new Nodo("NOMBREFM",yylineno,yycolumna);
        aux->text = string($1);
        $$ = aux;
    };

PARAMETROS_FM: LPARAMETROS_FM {
        Nodo *aux = new Nodo("PARAMETROS_FM",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = aux;
    }
| {
        Nodo *aux = new Nodo("PARAMETROS_FM",yylineno,yycolumna);
        $$ = aux;
    };
LPARAMETROS_FM: LPARAMETROS_FM tkcma PARAMETRO_FM {
        $$ = $1;
        $1->hijos.push_back($3);
    }
| PARAMETRO_FM {
        Nodo *aux = new Nodo("LPARAMETROS_FM",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = aux;
    };
PARAMETRO_FM: TIPO NOMBRE {
         Nodo *aux = new Nodo("PARAMETRO_FM",yylineno,yycolumna);
         aux->hijos.push_back($1);
         aux->hijos.push_back($2);
         $$ = aux;
    };

RETORNO: tkretorna OPERACION tkfin {
            Nodo *aux = new Nodo("RETORNO",yylineno,yycolumna);
            aux->hijos.push_back($2);
            $$ = aux;
        };

CUERPO_FM: SENTENCIAS_FM {
            $$ = $1;
        };
SENTENCIAS_FM: SENTENCIAS_FM SENTENCIA_FM {
        $$ = $1;
        $1->hijos.push_back($2);
    }
| SENTENCIAS_FM error tkfin{
        $$ = $1;
     }
| {
        Nodo *aux = new Nodo("SENTENCIAS_FM",yylineno,yycolumna);
        $$ = aux;
    };
SENTENCIA_FM: SENT_DECLARACION { $$ = $1; }
| SENT_ASIGNACION { $$ = $1; }
| SENT_CONTROL { $$ = $1; }
| LLAMA_MET { $$ = $1; }
| RETORNO { $$ = $1; };

CUERPO_CONTROL: SENTENCIAS_CO {
         Nodo *aux = new Nodo("CUERPO_CONTROL",yylineno,yycolumna);
         aux->hijos.push_back($1);
         $$ = aux;
      }
| {
        Nodo *aux = new Nodo("CUERPO_CONTROL",yylineno,yycolumna);
        $$ = aux;
     };

SENTENCIAS_CO: SENTENCIAS_CO SENTENCIA_CO {
            $$ = $1;
            $1->hijos.push_back($2);
        }
| SENTENCIAS_CO error tkfin{
        $$ = $1;
    }
| SENTENCIA_CO {
            Nodo *aux = new Nodo("SENTENCIAS_CO",yylineno,yycolumna);
            aux->hijos.push_back($1);
            $$ = aux;
        };
SENTENCIA_CO: SENTENCIA_FM { $$ = $1; }
            | tksalir tkfin { $$ = new Nodo("SALIR",yylineno,yycolumna); };

//ACCESO_ATRI: tId tkpto ATRI {
//            Nodo *aux = new Nodo("ACCESO_ATRI",yylineno,yycolumna);
//            Nodo *aux2 = new Nodo("ID",string($1),yylineno,yycolumna);
//            aux->hijos.push_back(aux2);
//            aux->hijos.push_back($3);
//            $$ = aux;
//        };

//LATRI: LATRI tkpto tId {
//            $$ = $1;
//            Nodo *aux2 = new Nodo("ID",string($3),yylineno,yycolumna);
//            $1->hijos.push_back(aux2);
//        }
//| tId {
//         Nodo *aux = new Nodo("LATRI",yylineno,yycolumna);
//         Nodo *aux2 = new Nodo("ID",string($1),yylineno,yycolumna);
//         aux->hijos.push_back(aux2);
//         $$ = aux;
//        };

//ATRI: LATRI { $$ = $1; }
//    | LLAMA_MET { $$ = $1; };

DATOARRAY: NOMBRE DIMENSIONES {
         Nodo *aux = new Nodo("DATOARRAY",yylineno,yycolumna);
         aux->hijos.push_back($1);
         aux->hijos.push_back($2);
         $$ = $1;
        };

NOMBRE: tId {
            Nodo *aux = new Nodo("NOMBRE",string($1),yylineno,yycolumna);
            $$ = aux;
        };

LLAMA_MET: NOMBRE_LLAMADA tkParA PARAMS tkParC tkfin {
         Nodo *aux = new Nodo("LLAMA_MET",yylineno,yycolumna);
         aux->hijos.push_back($1);
         aux->hijos.push_back($3);
         $$ = aux;
        };
NOMBRE_LLAMADA: tkgraficar {
         Nodo *aux = new Nodo("NOMBRE_LLAMADA",yylineno,yycolumna);
         aux->hijos.push_back(new Nodo("ID","graficar",yylineno,yycolumna));
         $$ = aux;
        }
| tkpintar {
         Nodo *aux = new Nodo("NOMBRE_LLAMADA",yylineno,yycolumna);
         aux->hijos.push_back(new Nodo("ID","pintar_con",yylineno,yycolumna));
         $$ = aux;
        }
| tId {
         Nodo *aux = new Nodo("NOMBRE_LLAMADA",yylineno,yycolumna);
         aux->hijos.push_back(new Nodo("ID",string($1),yylineno,yycolumna));
         $$ = aux;
        };

PARAMS: LPARAMS {
    Nodo *aux = new Nodo("PARAMS",yylineno,yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
    }
| {
    Nodo *aux = new Nodo("PARAMS",yylineno,yycolumna);
    $$ = aux;
};
LPARAMS: LPARAMS tkcma PARAM {
    $$ = $1;
    $1->hijos.push_back($3);
    }
| PARAM {
    Nodo *aux = new Nodo("LPARAMS",yylineno,yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
};
PARAM: OPERACION {
    Nodo *aux = new Nodo("PARAM",yylineno,yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
};

SENT_CONTROL: SI { $$ = $1; }
| PARA { $$ = $1; }
| MIENTRAS { $$ = $1; }
| HACER_MIENTRAS { $$ = $1; }
| error tkAbre CUERPO_CONTROL tkCierra {
        Nodo *aux = new Nodo("SINTACTIC_ERROR",yylineno,yycolumna);
        aux->hijos.push_back($3);
        $$ = aux;
    };

CONDICION: OPERACION {
    Nodo *aux = new Nodo("CONDICION",yylineno,yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
};

OPERACION: OPERACION_LOGICA { $$ = $1; };
OPERACION_LOGICA: O { $$ = $1; };
O: O OR X {
    Nodo *aux = new Nodo("O",yylineno,yycolumna);
    aux->hijos.push_back($1);
    aux->hijos.push_back($2);
    aux->hijos.push_back($3);
    $$ = aux;
}
| X {
    Nodo *aux = new Nodo("O",yylineno,yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
};

X: X tkxor A {
    Nodo *aux = new Nodo("X",yylineno,yycolumna);
    aux->hijos.push_back($1);
    aux->hijos.push_back(new Nodo("tkxor","xor",yylineno,yycolumna));
    aux->hijos.push_back($3);
    $$ = aux;
}
| A {
    Nodo *aux = new Nodo("X",yylineno,yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
};

A: A AND N {
    Nodo *aux = new Nodo("A",yylineno,yycolumna);
    aux->hijos.push_back($1);
    aux->hijos.push_back($2);
    aux->hijos.push_back($3);
    $$ = aux;
}
| N {
    Nodo *aux = new Nodo("A",yylineno,yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
};
N: tknot N {
        Nodo *aux = new Nodo("N",yylineno,yycolumna);
        aux->hijos.push_back(new Nodo("tknot","!",yylineno,yycolumna));
        aux->hijos.push_back($2);
        $$ = aux;
    }
| Y {
    Nodo *aux = new Nodo("N",yylineno,yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
};
Y: OPERACION_RELACIONAL {
    Nodo *aux = new Nodo("Y",yylineno,yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
};
OR: tkor { $$ = new Nodo("tkor","or",yylineno,yycolumna); }
| tknor { $$ = new Nodo("tknor","nor",yylineno,yycolumna); };
AND: tkand { $$ = new Nodo("tkand","and",yylineno,yycolumna); }
| tknand { $$ = new Nodo("tknand","nand",yylineno,yycolumna); };

OPERACION_RELACIONAL: OPR { $$ = $1; };
OPR: OPR RELACION OPA {
    Nodo *aux = new Nodo("OPR",yylineno,yycolumna);
    aux->hijos.push_back($1);
    aux->hijos.push_back($2);
    aux->hijos.push_back($3);
    $$ = aux;
}
| OPA {
    Nodo *aux = new Nodo("OPR",yylineno,yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
};

OPA: OPERACION_ARITMETICA { $$ = $1; };

RELACION: tkmayor { $$ = new Nodo("tkmayor",">",yylineno,yycolumna); }
| tkmenor { $$ = new Nodo("tkmenor","<",yylineno,yycolumna); }
| tkmayoreq { $$ = new Nodo("tkmayoreq",">=",yylineno,yycolumna); }
| tkmenoreq { $$ = new Nodo("tkmenoreq","<=",yylineno,yycolumna); }
| tkDif { $$ = new Nodo("tkDif","!=",yylineno,yycolumna); }
| tkIgual { $$ = new Nodo("tkIgual","==",yylineno,yycolumna); };
OPERACION_ARITMETICA: C {$$ = $1; };
C: C tkmas D {
        Nodo *aux = new Nodo("C",yylineno,yycolumna);
        aux->hijos.push_back($1);
        aux->hijos.push_back(new Nodo("tkmas","+",yylineno,yycolumna));
        aux->hijos.push_back($3);
        $$ = aux;
    }
| C tkmenos D {
        Nodo *aux = new Nodo("C",yylineno,yycolumna);
        aux->hijos.push_back($1);
        aux->hijos.push_back(new Nodo("tkmenos","-",yylineno,yycolumna));
        aux->hijos.push_back($3);
        $$ = aux;
}
| D {
        Nodo *aux = new Nodo("C",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = aux;
    };
D: D tkpor F {
        Nodo *aux = new Nodo("D",yylineno,yycolumna);
        aux->hijos.push_back($1);
        aux->hijos.push_back(new Nodo("tkpor","*",yylineno,yycolumna));
        aux->hijos.push_back($3);
        $$ = aux;
    }
| D tkdiv F {
        Nodo *aux = new Nodo("D",yylineno,yycolumna);
        aux->hijos.push_back($1);
        aux->hijos.push_back(new Nodo("tkdiv","/",yylineno,yycolumna));
        aux->hijos.push_back($3);
        $$ = aux;
    }
| F {
        Nodo *aux = new Nodo("D",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = aux;
    };
F: G tkpot F {
        Nodo *aux = new Nodo("F",yylineno,yycolumna);
        aux->hijos.push_back($1);
        aux->hijos.push_back(new Nodo("tkpot","^",yylineno,yycolumna));
        aux->hijos.push_back($3);
        $$ = aux;
    }
| G {
    Nodo *aux = new Nodo("F",yylineno,yycolumna);
    aux->hijos.push_back($1);
    $$ = aux;
};
G: VALOR {
        Nodo *aux = new Nodo("G",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = aux;
    }
| tkParA O tkParC {
        Nodo *aux = new Nodo("G",yylineno,yycolumna);
        aux->hijos.push_back($2);
        $$ = aux;
    };

VALOR: tId {
        Nodo * aux2 = new Nodo("tId",string($1),yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| tEntero {
        Nodo *aux2 = new Nodo("tEntero",string($1),yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| tDecimal {
        Nodo *aux2 = new Nodo("tkdec",string($1),yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| tCaracter {
        Nodo *aux2 = new Nodo("tkcar",string($1),yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| tStr {
        Nodo *aux2 = new Nodo("tStr",string($1),yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| tkTrue {
        Nodo *aux2 = new Nodo("tkTrue","verdadero",yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| tkFalse {
        Nodo *aux2 = new Nodo("tkFalse","falso",yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        $$ = aux;
    }
| LLAMA_MET {
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = aux;
    }
| DATOARRAY {
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back($1);
        $$ = aux;
    };


%%
