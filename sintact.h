/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SINTACT_H_INCLUDED
# define YY_YY_SINTACT_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    tk_lex_error = 258,
    tkfin = 259,
    tkAbre = 260,
    tkCierra = 261,
    tkint = 262,
    tkdouble = 263,
    tkbool = 264,
    tkchar = 265,
    tString = 266,
    tkIgual = 267,
    tkDif = 268,
    tkmenor = 269,
    tkmenoreq = 270,
    tkmayor = 271,
    tkmayoreq = 272,
    tkor = 273,
    tkand = 274,
    tknand = 275,
    tknor = 276,
    tkxor = 277,
    tknot = 278,
    tkmas = 279,
    tkmenos = 280,
    tkdiv = 281,
    tkpor = 282,
    tkpot = 283,
    tkcma = 284,
    tkptocma = 285,
    tkeq = 286,
    tkaum = 287,
    tkdec = 288,
    tId = 289,
    tEntero = 290,
    tDecimal = 291,
    tCaracter = 292,
    tStr = 293,
    tkTrue = 294,
    tkFalse = 295,
    tkclase = 296,
    tkimport = 297,
    tkpublico = 298,
    tkprivado = 299,
    tVar = 300,
    tkarreglo = 301,
    tkCorA = 302,
    tkCorC = 303,
    tkParA = 304,
    tkParC = 305,
    tkLlaA = 306,
    tkLlaC = 307,
    tksi = 308,
    tksino = 309,
    tksinosi = 310,
    tkpara = 311,
    tkmientras = 312,
    tkhacer = 313,
    tkretorna = 314,
    tkgraficar = 315,
    tkpintar = 316,
    tkmain = 317,
    tksalir = 318,
    tkvoid = 319
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 37 "sintact.y" /* yacc.c:1909  */

    int entero;
    char cadena[256];
    struct Nodo* nodo;

#line 125 "sintact.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTACT_H_INCLUDED  */
