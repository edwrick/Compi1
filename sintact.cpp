/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sintact.y" /* yacc.c:339  */

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


#line 100 "sintact.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sintact.h".  */
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
#line 37 "sintact.y" /* yacc.c:355  */

    int entero;
    char cadena[256];
    struct Nodo* nodo;

#line 211 "sintact.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTACT_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 228 "sintact.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   308

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  279

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   201,   201,   209,   213,   219,   225,   232,   238,   242,
     245,   249,   255,   258,   263,   270,   277,   283,   289,   295,
     301,   308,   313,   317,   320,   324,   325,   326,   328,   331,
     335,   338,   341,   344,   346,   355,   360,   365,   369,   374,
     378,   384,   391,   397,   403,   406,   409,   414,   419,   425,
     431,   437,   443,   452,   457,   463,   471,   475,   482,   487,
     492,   497,   502,   507,   512,   518,   535,   542,   557,   576,
     587,   590,   593,   596,   600,   610,   617,   626,   636,   639,
     645,   649,   655,   660,   664,   668,   673,   680,   686,   689,
     693,   696,   700,   701,   702,   703,   704,   706,   711,   716,
     720,   723,   728,   729,   754,   761,   766,   772,   777,   782,
     788,   793,   797,   801,   806,   812,   813,   814,   815,   816,
     822,   828,   829,   830,   837,   843,   850,   856,   863,   868,
     874,   879,   884,   885,   886,   887,   889,   890,   897,   903,
     905,   906,   907,   908,   909,   910,   911,   912,   919,   926,
     931,   938,   945,   950,   957,   962,   967,   973,   979,   985,
     991,   997,  1003,  1009,  1015,  1020
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tk_lex_error", "tkfin", "tkAbre",
  "tkCierra", "tkint", "tkdouble", "tkbool", "tkchar", "tString",
  "tkIgual", "tkDif", "tkmenor", "tkmenoreq", "tkmayor", "tkmayoreq",
  "tkor", "tkand", "tknand", "tknor", "tkxor", "tknot", "tkmas", "tkmenos",
  "tkdiv", "tkpor", "tkpot", "tkcma", "tkptocma", "tkeq", "tkaum", "tkdec",
  "tId", "tEntero", "tDecimal", "tCaracter", "tStr", "tkTrue", "tkFalse",
  "tkclase", "tkimport", "tkpublico", "tkprivado", "tVar", "tkarreglo",
  "tkCorA", "tkCorC", "tkParA", "tkParC", "tkLlaA", "tkLlaC", "tksi",
  "tksino", "tksinosi", "tkpara", "tkmientras", "tkhacer", "tkretorna",
  "tkgraficar", "tkpintar", "tkmain", "tksalir", "tkvoid", "$accept",
  "LENGUAJE", "LUC", "UNIDAD_COMPILACION", "DECLARACION_CLASE",
  "IMPORTACIONES", "IMPORTACION", "VISIBLE", "VISIBILIDAD", "TIPO",
  "CUERPO_CLASE", "SENTENCIAS_C", "SENTENCIA_C", "SENT_DECLARACION",
  "SENT_ASIGNACION", "SENT_FUNCION", "DECLARACION_VARIABLE", "NOMBRES",
  "LNOMBRES", "LNOMBRESA", "NOMBRE_ASIGNAR", "ASIGNAR",
  "ASIGNACION_VARIABLE", "ASIG_SIMPLIF", "AUMENTO", "DECREMENTO", "DATO",
  "DECLARACION_ARREGLO", "DIMENSIONES", "DIMENSION", "ASIGNACION_ARR",
  "ASG_ARR", "ASIGNAR_ARREGLO", "ASG_VARS", "ASG_VAR", "ASG_POS_ARR", "SI",
  "SINO", "PARA", "D_A", "ACCION_POST", "MIENTRAS", "HACER_MIENTRAS",
  "FUNMENT", "TIPOFM", "NOMBREFM", "PARAMETROS_FM", "LPARAMETROS_FM",
  "PARAMETRO_FM", "RETORNO", "CUERPO_FM", "SENTENCIAS_FM", "SENTENCIA_FM",
  "CUERPO_CONTROL", "SENTENCIAS_CO", "SENTENCIA_CO", "DATOARRAY", "NOMBRE",
  "LLAMA_MET", "NOMBRE_LLAMADA", "PARAMS", "LPARAMS", "PARAM",
  "SENT_CONTROL", "CONDICION", "OPERACION", "OPERACION_LOGICA", "O", "X",
  "A", "N", "Y", "OR", "AND", "OPERACION_RELACIONAL", "OPR", "OPA",
  "RELACION", "OPERACION_ARITMETICA", "C", "D", "F", "G", "VALOR", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319
};
# endif

#define YYPACT_NINF -206

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-206)))

#define YYTABLE_NINF -110

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -206,    95,   106,  -206,    13,  -206,  -206,    27,     4,  -206,
    -206,  -206,  -206,    81,  -206,  -206,  -206,  -206,    64,     4,
     103,    19,  -206,   132,  -206,   155,    79,  -206,  -206,  -206,
    -206,   171,   173,   174,   176,   180,  -206,   -12,  -206,  -206,
    -206,  -206,  -206,  -206,  -206,   239,  -206,  -206,    46,  -206,
    -206,  -206,  -206,  -206,   184,   127,   154,   139,  -206,   186,
      58,  -206,   142,  -206,   151,   192,    76,  -206,  -206,  -206,
    -206,  -206,  -206,   192,   184,  -206,  -206,  -206,  -206,   139,
    -206,   152,  -206,  -206,    84,   181,   115,  -206,  -206,  -206,
     104,  -206,  -206,   122,   125,  -206,   165,  -206,   157,   192,
     139,  -206,     4,  -206,   101,   179,  -206,  -206,     9,   239,
    -206,    -9,  -206,   -13,  -206,  -206,  -206,   192,  -206,  -206,
     192,   192,  -206,  -206,   192,  -206,  -206,  -206,  -206,  -206,
    -206,   127,   127,   127,   127,   127,   127,  -206,  -206,  -206,
      -5,     4,   192,  -206,     4,   161,     4,   162,   182,  -206,
    -206,   184,  -206,   166,   188,  -206,  -206,   181,   115,  -206,
    -206,   125,   125,  -206,  -206,  -206,   194,  -206,  -206,   101,
    -206,   239,  -206,   229,   239,  -206,   234,   192,   189,  -206,
     193,  -206,  -206,  -206,  -206,   246,   248,   138,  -206,  -206,
     144,   206,   207,   208,   209,   254,   192,   215,  -206,  -206,
    -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,   255,  -206,
      16,   192,     2,   192,    16,   258,  -206,   259,   263,  -206,
     257,    97,  -206,   218,  -206,   224,  -206,  -206,   240,   241,
     221,   267,  -206,  -206,  -206,   164,  -206,   269,   239,   192,
     192,   270,   219,  -206,    16,     4,   247,    16,   230,   272,
      78,   274,   192,   227,    54,  -206,  -206,  -206,  -206,  -206,
    -206,   141,   232,  -206,    68,  -206,   233,   279,  -206,  -206,
    -206,   280,  -206,    16,    16,   281,   282,  -206,  -206
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      10,     0,    10,     4,     0,     1,     3,     0,     0,    14,
      15,     5,     8,     0,    12,     9,    24,   105,     0,     0,
       0,     0,    11,     0,     7,     0,     0,    22,    25,    26,
      27,     0,     0,     0,     0,     0,    33,    60,    24,    23,
      16,    20,    17,    18,    19,     0,    79,    78,     0,    28,
      30,    29,    31,    32,     0,     0,     0,    53,    57,     0,
       0,    81,     0,    80,     0,     0,   157,   158,   159,   160,
     161,   162,   163,     0,     0,   107,   108,    59,   165,     0,
     164,     0,    43,   121,   122,   124,   126,   128,   130,   131,
     136,   138,   139,   146,   149,   152,   154,   155,     0,     0,
      54,     6,     0,    34,    36,    35,    40,    38,     0,    83,
     129,     0,    64,     0,    61,    63,   104,   111,   132,   133,
       0,     0,   134,   135,     0,   145,   144,   141,   143,   140,
     142,     0,     0,     0,     0,     0,     0,    56,    65,    55,
       0,     0,     0,    41,     0,     0,     0,     0,    82,    85,
     156,     0,    58,     0,   110,   113,   114,   123,   125,   127,
     137,   147,   148,   151,   150,   153,    60,    37,    42,     0,
      39,    83,    86,     0,     0,    62,     0,     0,     0,    52,
       0,    91,    84,   106,   112,     0,     0,     0,    91,    76,
       0,   105,     0,     0,     0,     0,     0,     0,    92,    93,
     115,   116,   117,   118,    96,    89,    95,    94,     0,    90,
       0,     0,    13,     0,     0,     0,    77,     0,     0,   102,
       0,     0,   101,     0,   120,     0,    70,    71,     0,     0,
       0,     0,    87,   103,   119,     0,    99,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    50,    48,    49,    72,    73,    44,
      45,     0,     0,    51,     0,    74,     0,     0,    66,    46,
      47,     0,    75,     0,     0,     0,     0,    68,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -206,  -206,  -206,   284,  -206,  -206,  -206,    -3,  -206,   -24,
     251,  -206,  -206,   271,   273,  -206,    83,  -206,   -95,  -206,
     146,  -206,  -172,  -206,  -206,  -206,  -206,  -206,   -33,   -42,
    -206,   -69,   130,  -206,   140,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,  -206,   185,   126,  -206,   124,  -206,
     111,  -206,   113,  -163,  -206,    80,    52,    -8,  -177,  -206,
    -206,  -206,   128,  -206,  -205,   -51,  -206,   231,   183,   187,
     -59,  -206,  -206,  -206,  -206,  -206,   175,  -206,   252,  -206,
      38,    -7,  -206,  -206
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    11,     4,    12,   197,    14,   146,
      20,    21,    27,   198,   199,    30,    31,   103,   104,   105,
     106,   143,    32,   258,   259,   260,   261,    33,   116,    57,
      34,    77,    58,   113,   114,    35,   200,   268,   201,   228,
     262,   202,   203,    36,    48,    64,   147,   148,   149,   204,
     186,   187,   219,   220,   221,   222,    78,    79,    80,    81,
     153,   154,   155,   207,   223,   224,    83,    84,    85,    86,
      87,    88,   120,   124,    89,    90,    91,   131,    92,    93,
      94,    95,    96,    97
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    13,    47,    82,    56,   112,   110,   140,   230,   118,
     206,    23,   119,    37,     7,   100,   151,   217,    26,    54,
      25,    60,   -98,   115,   141,   -21,   -13,   -13,   -13,   -13,
     -13,    15,    16,   206,   246,    55,    17,   206,    17,   152,
     227,   150,    55,    61,   206,     9,    10,   266,   138,   169,
     191,   231,   107,    17,   -13,     8,     9,    10,   139,     9,
      10,   -13,     9,    10,   -13,   159,   156,   206,    22,   192,
     206,    63,   193,   194,   195,   196,    75,    76,   257,   218,
      61,   249,   112,   -13,   251,  -105,    40,    41,    42,    43,
      44,   168,    17,    62,   107,     5,   206,   206,   235,   240,
     115,  -105,   118,   -97,   102,   119,    -2,   166,    63,    24,
     275,   276,   254,   255,   256,    55,   125,   126,   127,   128,
     129,   130,    19,  -105,    45,  -109,   156,   163,   164,   165,
     141,   191,   142,   167,   122,   123,   107,    38,   172,   190,
       9,    10,   -13,    46,   -88,   215,   132,   133,   209,   210,
     192,   134,   135,   193,   194,   195,   196,    75,    76,    39,
     218,    66,    67,    68,    69,    70,    71,    72,   243,   210,
     161,   162,   191,   269,   270,    49,    73,    50,    51,    37,
      52,     9,    10,   -13,    53,    99,    55,    75,    76,    82,
     108,   192,   101,   136,   193,   194,   195,   196,    75,    76,
     109,   117,    37,   121,   229,   137,    37,    65,   144,   225,
     171,   174,   173,    37,   245,    65,   176,   177,    66,    67,
      68,    69,    70,    71,    72,   178,    66,    67,    68,    69,
      70,    71,    72,    73,   181,    74,    37,   107,   183,    37,
      74,    73,   264,   185,    75,    76,    40,    41,    42,    43,
      44,   188,    75,    76,   189,  -109,   211,   212,   213,   214,
      45,   216,   232,   234,   210,    37,    37,   233,   237,   238,
     239,   241,   240,   242,   244,   247,   248,   250,   253,   252,
     265,   267,   271,   272,   273,   274,     6,   277,   278,    59,
     170,   175,    28,   145,    29,   226,   179,   180,   182,   208,
     205,   236,   263,   157,   111,   184,   160,    98,   158
};

static const yytype_uint16 yycheck[] =
{
       8,     4,    26,    54,    37,    74,    65,   102,   213,    18,
     187,    19,    21,    21,     1,    57,    29,     1,    21,    31,
       1,    45,     6,    74,    29,     6,     7,     8,     9,    10,
      11,     4,     5,   210,   239,    47,    34,   214,    34,    52,
     212,    50,    47,    34,   221,    43,    44,   252,    99,   144,
      34,   214,    60,    34,    41,    42,    43,    44,   100,    43,
      44,    45,    43,    44,    45,   124,   117,   244,     4,    53,
     247,    62,    56,    57,    58,    59,    60,    61,   250,    63,
      34,   244,   151,    64,   247,    31,     7,     8,     9,    10,
      11,   142,    34,    47,   102,     0,   273,   274,     1,    31,
     151,    47,    18,     6,    46,    21,     0,   140,    62,     6,
     273,   274,    34,    35,    36,    47,    12,    13,    14,    15,
      16,    17,    41,    47,    45,    49,   177,   134,   135,   136,
      29,    34,    31,   141,    19,    20,   144,     5,   146,     1,
      43,    44,    45,    64,     6,   196,    24,    25,     4,     5,
      53,    26,    27,    56,    57,    58,    59,    60,    61,     4,
      63,    34,    35,    36,    37,    38,    39,    40,     4,     5,
     132,   133,    34,    32,    33,     4,    49,     4,     4,   187,
       4,    43,    44,    45,     4,    31,    47,    60,    61,   240,
      48,    53,     6,    28,    56,    57,    58,    59,    60,    61,
      49,    49,   210,    22,   212,    48,   214,    23,    29,   212,
      49,    29,    50,   221,   238,    23,    50,    29,    34,    35,
      36,    37,    38,    39,    40,    31,    34,    35,    36,    37,
      38,    39,    40,    49,     5,    51,   244,   245,     4,   247,
      51,    49,   250,    50,    60,    61,     7,     8,     9,    10,
      11,     5,    60,    61,     6,    49,    49,    49,    49,     5,
      45,     6,     4,     6,     5,   273,   274,     4,    50,    45,
      30,    50,    31,     6,     5,     5,    57,    30,     6,    49,
       6,    54,    50,    50,     5,     5,     2,     6,     6,    38,
     144,   151,    21,   108,    21,   212,   166,   171,   174,   188,
     187,   221,   250,   120,    73,   177,   131,    55,   121
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    66,    67,    68,    70,     0,    68,     1,    42,    43,
      44,    69,    71,    72,    73,     4,     5,    34,   122,    41,
      75,    76,     4,   122,     6,     1,    72,    77,    78,    79,
      80,    81,    87,    92,    95,   100,   108,   122,     5,     4,
       7,     8,     9,    10,    11,    45,    64,    74,   109,     4,
       4,     4,     4,     4,    31,    47,    93,    94,    97,    75,
      74,    34,    47,    62,   110,    23,    34,    35,    36,    37,
      38,    39,    40,    49,    51,    60,    61,    96,   121,   122,
     123,   124,   130,   131,   132,   133,   134,   135,   136,   139,
     140,   141,   143,   144,   145,   146,   147,   148,   143,    31,
      94,     6,    46,    82,    83,    84,    85,   122,    48,    49,
     135,   132,    96,    98,    99,   130,    93,    49,    18,    21,
     137,    22,    19,    20,   138,    12,    13,    14,    15,    16,
      17,   142,    24,    25,    26,    27,    28,    48,   130,    94,
      83,    29,    31,    86,    29,   110,    74,   111,   112,   113,
      50,    29,    52,   125,   126,   127,   130,   133,   134,   135,
     141,   145,   145,   146,   146,   146,    93,   122,   130,    83,
      85,    49,   122,    50,    29,    99,    50,    29,    31,    97,
     111,     5,   113,     4,   127,    50,   115,   116,     5,     6,
       1,    34,    53,    56,    57,    58,    59,    72,    78,    79,
     101,   103,   106,   107,   114,   117,   123,   128,   115,     4,
       5,    49,    49,    49,     5,   130,     6,     1,    63,   117,
     118,   119,   120,   129,   130,    72,    81,    87,   104,   122,
     129,   118,     4,     4,     6,     1,   120,    50,    45,    30,
      31,    50,     6,     4,     5,    74,   129,     5,    57,   118,
      30,   118,    49,     6,    34,    35,    36,    87,    88,    89,
      90,    91,   105,   121,   122,     6,   129,    54,   102,    32,
      33,    50,    50,     5,     5,   118,   118,     6,     6
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    69,    69,    70,    70,
      70,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      74,    75,    76,    76,    76,    77,    77,    77,    78,    78,
      79,    79,    79,    80,    81,    82,    82,    83,    83,    84,
      84,    85,    86,    87,    88,    88,    89,    90,    91,    91,
      91,    91,    92,    93,    93,    93,    94,    95,    96,    97,
      97,    98,    98,    99,    99,   100,   101,   101,   102,   103,
     104,   104,   105,   105,   106,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   114,   115,   116,
     116,   116,   117,   117,   117,   117,   117,   118,   118,   119,
     119,   119,   120,   120,   121,   122,   123,   124,   124,   124,
     125,   125,   126,   126,   127,   128,   128,   128,   128,   128,
     129,   130,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   137,   137,   138,   138,   139,   140,   140,   141,
     142,   142,   142,   142,   142,   142,   143,   144,   144,   144,
     145,   145,   145,   146,   146,   147,   147,   148,   148,   148,
     148,   148,   148,   148,   148,   148
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     6,     4,     2,     3,
       0,     3,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     0,     1,     1,     1,     2,     2,
       2,     2,     2,     1,     4,     1,     1,     3,     1,     3,
       1,     2,     2,     3,     1,     1,     2,     2,     1,     1,
       1,     1,     7,     1,     2,     3,     3,     2,     3,     2,
       0,     1,     3,     1,     1,     4,     8,     7,     4,    11,
       1,     1,     1,     1,     7,     8,     9,    11,     1,     1,
       1,     1,     1,     0,     3,     1,     2,     3,     1,     2,
       3,     0,     1,     1,     1,     1,     1,     1,     0,     2,
       3,     1,     1,     2,     2,     1,     5,     1,     1,     1,
       1,     0,     3,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     3,     1,     3,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 66: /* LENGUAJE  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1281 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 67: /* LUC  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1287 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 68: /* UNIDAD_COMPILACION  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1293 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 69: /* DECLARACION_CLASE  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1299 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 70: /* IMPORTACIONES  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1305 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 71: /* IMPORTACION  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1311 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 72: /* VISIBLE  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1317 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 73: /* VISIBILIDAD  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1323 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 74: /* TIPO  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1329 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 75: /* CUERPO_CLASE  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1335 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 76: /* SENTENCIAS_C  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1341 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 77: /* SENTENCIA_C  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1347 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 78: /* SENT_DECLARACION  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1353 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 79: /* SENT_ASIGNACION  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1359 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 80: /* SENT_FUNCION  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1365 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 81: /* DECLARACION_VARIABLE  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1371 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 82: /* NOMBRES  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1377 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 83: /* LNOMBRES  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1383 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 84: /* LNOMBRESA  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1389 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 85: /* NOMBRE_ASIGNAR  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1395 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 86: /* ASIGNAR  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1401 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 87: /* ASIGNACION_VARIABLE  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1407 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 88: /* ASIG_SIMPLIF  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1413 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 89: /* AUMENTO  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1419 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 90: /* DECREMENTO  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1425 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 91: /* DATO  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1431 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 92: /* DECLARACION_ARREGLO  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1437 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 93: /* DIMENSIONES  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1443 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 94: /* DIMENSION  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1449 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 95: /* ASIGNACION_ARR  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1455 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 96: /* ASG_ARR  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1461 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 97: /* ASIGNAR_ARREGLO  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1467 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 98: /* ASG_VARS  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1473 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 99: /* ASG_VAR  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1479 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 100: /* ASG_POS_ARR  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1485 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 101: /* SI  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1491 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 102: /* SINO  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1497 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 103: /* PARA  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1503 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 104: /* D_A  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1509 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 105: /* ACCION_POST  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1515 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 106: /* MIENTRAS  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1521 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 107: /* HACER_MIENTRAS  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1527 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 108: /* FUNMENT  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1533 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 109: /* TIPOFM  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1539 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 110: /* NOMBREFM  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1545 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 111: /* PARAMETROS_FM  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1551 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 112: /* LPARAMETROS_FM  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1557 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 113: /* PARAMETRO_FM  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1563 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 114: /* RETORNO  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1569 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 115: /* CUERPO_FM  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1575 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 116: /* SENTENCIAS_FM  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1581 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 117: /* SENTENCIA_FM  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1587 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 118: /* CUERPO_CONTROL  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1593 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 119: /* SENTENCIAS_CO  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1599 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 120: /* SENTENCIA_CO  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1605 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 121: /* DATOARRAY  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1611 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 122: /* NOMBRE  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1617 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 123: /* LLAMA_MET  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1623 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 124: /* NOMBRE_LLAMADA  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1629 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 125: /* PARAMS  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1635 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 126: /* LPARAMS  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1641 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 127: /* PARAM  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1647 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 128: /* SENT_CONTROL  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1653 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 129: /* CONDICION  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1659 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 130: /* OPERACION  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1665 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 131: /* OPERACION_LOGICA  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1671 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 132: /* O  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1677 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 133: /* X  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1683 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 134: /* A  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1689 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 135: /* N  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1695 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 136: /* Y  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1701 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 137: /* OR  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1707 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 138: /* AND  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1713 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 139: /* OPERACION_RELACIONAL  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1719 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 140: /* OPR  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1725 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 141: /* OPA  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1731 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 142: /* RELACION  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1737 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 143: /* OPERACION_ARITMETICA  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1743 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 144: /* C  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1749 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 145: /* D  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1755 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 146: /* F  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1761 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 147: /* G  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1767 "sintact.cpp" /* yacc.c:1257  */
        break;

    case 148: /* VALOR  */
#line 197 "sintact.y" /* yacc.c:1257  */
      { free (((*yyvaluep).nodo)); }
#line 1773 "sintact.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 201 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("LENGUAJE", yylineno, yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    raiz = aux;
    yylineno = 1;
    (yyval.nodo) = aux;
}
#line 2043 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 209 "sintact.y" /* yacc.c:1646  */
    {
    (yyval.nodo) = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->hijos.push_back((yyvsp[0].nodo));
}
#line 2052 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 213 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("LUC", yylineno, yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 2062 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 219 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("UNIDAD_COMPILACION", yylineno, yycolumna);
    aux->hijos.push_back((yyvsp[-1].nodo));
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 2073 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 225 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("DECLARACION_CLASE",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[-5].nodo));
    aux->hijos.push_back((yyvsp[-3].nodo));
    aux->hijos.push_back((yyvsp[-1].nodo));
    (yyval.nodo) = aux;
}
#line 2085 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 232 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("SINTACTIC_ERROR","Error declaracion de clase",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[-1].nodo));
    (yyval.nodo) = aux;
}
#line 2095 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 238 "sintact.y" /* yacc.c:1646  */
    {
    (yyval.nodo) = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->hijos.push_back((yyvsp[0].nodo));
}
#line 2104 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 242 "sintact.y" /* yacc.c:1646  */
    {
    (yyval.nodo) = (yyvsp[-2].nodo);
}
#line 2112 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 245 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("IMPORTACIONES",yylineno,yycolumna);
    (yyval.nodo) = aux;
}
#line 2121 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 249 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("IMPORTACIONES",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[-1].nodo));
    (yyval.nodo) = aux;
}
#line 2131 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 255 "sintact.y" /* yacc.c:1646  */
    {
    (yyval.nodo) = (yyvsp[0].nodo);
}
#line 2139 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 258 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("VISIBILIDAD",yylineno,yycolumna);
    aux->text = "publico";
    (yyval.nodo) = aux;
}
#line 2149 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 263 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("VISIBILIDAD", yylineno, yycolumna);
    aux->text = "publico";
    aux->hijos.push_back(aux);

    (yyval.nodo) = aux;
}
#line 2161 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 270 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("VISIBILIDAD", yylineno, yycolumna);
    aux->text = "privado";
    aux->hijos.push_back(aux);

    (yyval.nodo) = aux;
}
#line 2173 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 277 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("TIPO", yylineno, yycolumna);
        Nodo *aux2 = new Nodo("tkint","int",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 2184 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 283 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("TIPO", yylineno, yycolumna);
        Nodo *aux2 = new Nodo("tkbool","bool",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 2195 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 289 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("TIPO", yylineno, yycolumna);
        Nodo *aux2 = new Nodo("tkchar","char",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 2206 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 295 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("TIPO", yylineno, yycolumna);
        Nodo *aux2 = new Nodo("tString","string",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 2217 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 301 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("TIPO", yylineno, yycolumna);
        Nodo *aux2 = new Nodo("tkdouble","double",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 2228 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 308 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("CUERPO_CLASE", yylineno, yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 2238 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 313 "sintact.y" /* yacc.c:1646  */
    {
    (yyval.nodo) = (yyvsp[-1].nodo);
    (yyvsp[-1].nodo)->hijos.push_back((yyvsp[0].nodo));
}
#line 2247 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 317 "sintact.y" /* yacc.c:1646  */
    {
    (yyval.nodo) = (yyvsp[-2].nodo);
}
#line 2255 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 320 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("SENTENCIAS_C", yylineno, yycolumna);
    (yyval.nodo) = aux;
}
#line 2264 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 324 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo) ;}
#line 2270 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 325 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo) ;}
#line 2276 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 326 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo) ;}
#line 2282 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 328 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[-1].nodo);
}
#line 2290 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 331 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[-1].nodo);
}
#line 2298 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 335 "sintact.y" /* yacc.c:1646  */
    {
    (yyval.nodo) = (yyvsp[-1].nodo);
}
#line 2306 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 338 "sintact.y" /* yacc.c:1646  */
    {
    (yyval.nodo) = (yyvsp[-1].nodo);
}
#line 2314 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 341 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[-1].nodo);
}
#line 2322 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 344 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2328 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 346 "sintact.y" /* yacc.c:1646  */
    {
        //Corregir la forma de asignar en una declaracion
    Nodo *aux = new Nodo("DECLARACION_VAR",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[-3].nodo));
    aux->hijos.push_back((yyvsp[-1].nodo));
    aux->hijos.push_back((yyvsp[0].nodo));
    //aux->hijos.push_back($5);
    (yyval.nodo) = aux;
}
#line 2342 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 355 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("NOMBRES", yylineno, yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = (yyvsp[0].nodo);
}
#line 2352 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 360 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("NOMBRES", yylineno, yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = (yyvsp[0].nodo);
}
#line 2362 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 365 "sintact.y" /* yacc.c:1646  */
    {
    (yyval.nodo) = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->hijos.push_back((yyvsp[0].nodo));
}
#line 2371 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 369 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("LNOMBRES", yylineno, yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = (yyvsp[0].nodo);
}
#line 2381 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 374 "sintact.y" /* yacc.c:1646  */
    {
    (yyval.nodo) = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->hijos.push_back((yyvsp[0].nodo));
}
#line 2390 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 378 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("LNOMBRESA", yylineno, yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = (yyvsp[0].nodo);
}
#line 2400 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 384 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("NOMBRE_ASIGNAR",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-1].nodo));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
}
#line 2411 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 391 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("ASIGNAR",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 2421 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 397 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("ASIGNACION_VAR", yylineno, yycolumna);
        aux->hijos.push_back((yyvsp[-2].nodo));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 2432 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 403 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[0].nodo);
    }
#line 2440 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 406 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[0].nodo);
    }
#line 2448 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 409 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("AUMENTO",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-1].nodo));
        (yyval.nodo) = (yyvsp[-1].nodo);
    }
#line 2458 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 414 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("DECREMENTO",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-1].nodo));
        (yyval.nodo) = (yyvsp[-1].nodo);
    }
#line 2468 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 419 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("DATO",yylineno,yycolumna);
        Nodo *aux2 = new Nodo("tEntero",string((yyvsp[0].cadena)),yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 2479 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 425 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("DATO",yylineno,yycolumna);
        Nodo *aux2 = new Nodo("tDecimal",string((yyvsp[0].cadena)),yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 2490 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 431 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("DATO",yylineno,yycolumna);
        Nodo *aux2 = new Nodo("tId",string((yyvsp[0].cadena)),yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 2501 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 437 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("DATO",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 2511 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 443 "sintact.y" /* yacc.c:1646  */
    {
     Nodo *aux = new Nodo("DECLARACION_ARREGLO",yylineno,yycolumna);
     aux->hijos.push_back((yyvsp[-6].nodo));
     aux->hijos.push_back((yyvsp[-4].nodo));
     aux->hijos.push_back((yyvsp[-2].nodo));
     aux->hijos.push_back((yyvsp[-1].nodo));
     aux->hijos.push_back((yyvsp[0].nodo));
     (yyval.nodo) = aux;
    }
#line 2525 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 452 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("DIMENSIONES",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 2535 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 457 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("DIMENSIONES",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-1].nodo));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 2546 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 463 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("DIMENSIONES",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-2].nodo));
        aux->hijos.push_back((yyvsp[-1].nodo));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 2558 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 471 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[-1].nodo);
    }
#line 2566 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 475 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("ASIGNACION_ARR",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-1].nodo));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 2577 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 482 "sintact.y" /* yacc.c:1646  */
    {
      Nodo *aux = new Nodo("ASG_ARR",yylineno,yycolumna);
      aux->hijos.push_back((yyvsp[-1].nodo));
      (yyval.nodo) = aux;
    }
#line 2587 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 487 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("ASIGNAR_ARREGLO",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 2597 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 492 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("ASIGNAR_ARREGLO",yylineno,yycolumna);
    (yyval.nodo) = aux;
    }
#line 2606 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 497 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("ASG_VARS",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 2616 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 502 "sintact.y" /* yacc.c:1646  */
    {
     (yyval.nodo) = (yyvsp[-2].nodo);
     (yyvsp[-2].nodo)->hijos.push_back((yyvsp[0].nodo));
    }
#line 2625 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 507 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("ASG_VAR",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = (yyvsp[0].nodo);
    }
#line 2635 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 512 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("ASG_VAR",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = (yyvsp[0].nodo);
    }
#line 2645 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 518 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("ASG_POS_ARR",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-3].nodo));
        aux->hijos.push_back((yyvsp[-2].nodo));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 2657 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 535 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("SI",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-5].nodo));
        aux->hijos.push_back((yyvsp[-2].nodo));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
        }
#line 2669 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 542 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("SI",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-4].nodo));
        aux->hijos.push_back((yyvsp[-1].nodo));
        (yyval.nodo) = aux;
    }
#line 2680 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 557 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("SINO",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-1].nodo));
        (yyval.nodo) = aux;
    }
#line 2690 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 576 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("PARA", yylineno, yycolumna);
        aux->hijos.push_back((yyvsp[-8].nodo));
        aux->hijos.push_back((yyvsp[-6].nodo));
        aux->hijos.push_back((yyvsp[-4].nodo));
        aux->hijos.push_back((yyvsp[-1].nodo));
        (yyval.nodo) = aux;
    }
#line 2703 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 587 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[0].nodo);
    }
#line 2711 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 590 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[0].nodo);
    }
#line 2719 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 593 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[0].nodo);
    }
#line 2727 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 596 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[0].nodo);
    }
#line 2735 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 600 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("MIENTRAS",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-4].nodo));
        aux->hijos.push_back((yyvsp[-1].nodo));
        (yyval.nodo) = aux;
    }
#line 2746 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 610 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("HACER_MIENTRAS",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-5].nodo));
        aux->hijos.push_back((yyvsp[-1].nodo));
        (yyval.nodo) = aux;
    }
#line 2757 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 617 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("FUNMET",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-8].nodo));
        aux->hijos.push_back((yyvsp[-7].nodo));
        aux->hijos.push_back((yyvsp[-6].nodo));
        aux->hijos.push_back((yyvsp[-4].nodo));
        aux->hijos.push_back((yyvsp[-1].nodo));
        (yyval.nodo) = aux;
    }
#line 2771 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 626 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("FUNMETARR",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[-10].nodo));
    aux->hijos.push_back((yyvsp[-9].nodo));
    aux->hijos.push_back((yyvsp[-6].nodo));
    aux->hijos.push_back((yyvsp[-4].nodo));
    aux->hijos.push_back((yyvsp[-1].nodo));
    (yyval.nodo) = aux;
}
#line 2785 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 636 "sintact.y" /* yacc.c:1646  */
    {
    (yyval.nodo) = (yyvsp[0].nodo);
}
#line 2793 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 639 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("TIPO", yylineno, yycolumna);
    Nodo *aux2 = new Nodo("tkvoid","void",yylineno,yycolumna);
    aux->hijos.push_back(aux2);
    (yyval.nodo) = aux;
}
#line 2804 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 645 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("NOMBREFM","main",yylineno,yycolumna);
        (yyval.nodo) = aux;
    }
#line 2813 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 649 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("NOMBREFM",yylineno,yycolumna);
        aux->text = string((yyvsp[0].cadena));
        (yyval.nodo) = aux;
    }
#line 2823 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 655 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("PARAMETROS_FM",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 2833 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 660 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("PARAMETROS_FM",yylineno,yycolumna);
        (yyval.nodo) = aux;
    }
#line 2842 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 664 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[-2].nodo);
        (yyvsp[-2].nodo)->hijos.push_back((yyvsp[0].nodo));
    }
#line 2851 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 668 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("LPARAMETROS_FM",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 2861 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 673 "sintact.y" /* yacc.c:1646  */
    {
         Nodo *aux = new Nodo("PARAMETRO_FM",yylineno,yycolumna);
         aux->hijos.push_back((yyvsp[-1].nodo));
         aux->hijos.push_back((yyvsp[0].nodo));
         (yyval.nodo) = aux;
    }
#line 2872 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 680 "sintact.y" /* yacc.c:1646  */
    {
            Nodo *aux = new Nodo("RETORNO",yylineno,yycolumna);
            aux->hijos.push_back((yyvsp[-1].nodo));
            (yyval.nodo) = aux;
        }
#line 2882 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 686 "sintact.y" /* yacc.c:1646  */
    {
            (yyval.nodo) = (yyvsp[0].nodo);
        }
#line 2890 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 689 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[-1].nodo);
        (yyvsp[-1].nodo)->hijos.push_back((yyvsp[0].nodo));
    }
#line 2899 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 693 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[-2].nodo);
     }
#line 2907 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 696 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("SENTENCIAS_FM",yylineno,yycolumna);
        (yyval.nodo) = aux;
    }
#line 2916 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 700 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2922 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 701 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2928 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 702 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2934 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 703 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2940 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 704 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2946 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 706 "sintact.y" /* yacc.c:1646  */
    {
         Nodo *aux = new Nodo("CUERPO_CONTROL",yylineno,yycolumna);
         aux->hijos.push_back((yyvsp[0].nodo));
         (yyval.nodo) = aux;
      }
#line 2956 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 711 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("CUERPO_CONTROL",yylineno,yycolumna);
        (yyval.nodo) = aux;
     }
#line 2965 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 716 "sintact.y" /* yacc.c:1646  */
    {
            (yyval.nodo) = (yyvsp[-1].nodo);
            (yyvsp[-1].nodo)->hijos.push_back((yyvsp[0].nodo));
        }
#line 2974 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 720 "sintact.y" /* yacc.c:1646  */
    {
        (yyval.nodo) = (yyvsp[-2].nodo);
    }
#line 2982 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 723 "sintact.y" /* yacc.c:1646  */
    {
            Nodo *aux = new Nodo("SENTENCIAS_CO",yylineno,yycolumna);
            aux->hijos.push_back((yyvsp[0].nodo));
            (yyval.nodo) = aux;
        }
#line 2992 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 728 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 2998 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 729 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = new Nodo("SALIR",yylineno,yycolumna); }
#line 3004 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 754 "sintact.y" /* yacc.c:1646  */
    {
         Nodo *aux = new Nodo("DATOARRAY",yylineno,yycolumna);
         aux->hijos.push_back((yyvsp[-1].nodo));
         aux->hijos.push_back((yyvsp[0].nodo));
         (yyval.nodo) = (yyvsp[-1].nodo);
        }
#line 3015 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 761 "sintact.y" /* yacc.c:1646  */
    {
            Nodo *aux = new Nodo("NOMBRE",string((yyvsp[0].cadena)),yylineno,yycolumna);
            (yyval.nodo) = aux;
        }
#line 3024 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 766 "sintact.y" /* yacc.c:1646  */
    {
         Nodo *aux = new Nodo("LLAMA_MET",yylineno,yycolumna);
         aux->hijos.push_back((yyvsp[-4].nodo));
         aux->hijos.push_back((yyvsp[-2].nodo));
         (yyval.nodo) = aux;
        }
#line 3035 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 772 "sintact.y" /* yacc.c:1646  */
    {
         Nodo *aux = new Nodo("NOMBRE_LLAMADA",yylineno,yycolumna);
         aux->hijos.push_back(new Nodo("ID","graficar",yylineno,yycolumna));
         (yyval.nodo) = aux;
        }
#line 3045 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 777 "sintact.y" /* yacc.c:1646  */
    {
         Nodo *aux = new Nodo("NOMBRE_LLAMADA",yylineno,yycolumna);
         aux->hijos.push_back(new Nodo("ID","pintar_con",yylineno,yycolumna));
         (yyval.nodo) = aux;
        }
#line 3055 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 782 "sintact.y" /* yacc.c:1646  */
    {
         Nodo *aux = new Nodo("NOMBRE_LLAMADA",yylineno,yycolumna);
         aux->hijos.push_back(new Nodo("ID",string((yyvsp[0].cadena)),yylineno,yycolumna));
         (yyval.nodo) = aux;
        }
#line 3065 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 788 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("PARAMS",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
    }
#line 3075 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 793 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("PARAMS",yylineno,yycolumna);
    (yyval.nodo) = aux;
}
#line 3084 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 797 "sintact.y" /* yacc.c:1646  */
    {
    (yyval.nodo) = (yyvsp[-2].nodo);
    (yyvsp[-2].nodo)->hijos.push_back((yyvsp[0].nodo));
    }
#line 3093 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 801 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("LPARAMS",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3103 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 806 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("PARAM",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3113 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 812 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3119 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 813 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3125 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 814 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3131 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 815 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3137 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 816 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("SINTACTIC_ERROR",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-1].nodo));
        (yyval.nodo) = aux;
    }
#line 3147 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 822 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("CONDICION",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3157 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 828 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3163 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 829 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3169 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 830 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("O",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[-2].nodo));
    aux->hijos.push_back((yyvsp[-1].nodo));
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3181 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 837 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("O",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3191 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 843 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("X",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[-2].nodo));
    aux->hijos.push_back(new Nodo("tkxor","xor",yylineno,yycolumna));
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3203 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 850 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("X",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3213 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 856 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("A",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[-2].nodo));
    aux->hijos.push_back((yyvsp[-1].nodo));
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3225 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 863 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("A",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3235 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 868 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("N",yylineno,yycolumna);
        aux->hijos.push_back(new Nodo("tknot","!",yylineno,yycolumna));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 3246 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 874 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("N",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3256 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 879 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("Y",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3266 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 884 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = new Nodo("tkor","or",yylineno,yycolumna); }
#line 3272 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 885 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = new Nodo("tknor","nor",yylineno,yycolumna); }
#line 3278 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 886 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = new Nodo("tkand","and",yylineno,yycolumna); }
#line 3284 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 887 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = new Nodo("tknand","nand",yylineno,yycolumna); }
#line 3290 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 889 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3296 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 890 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("OPR",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[-2].nodo));
    aux->hijos.push_back((yyvsp[-1].nodo));
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3308 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 897 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("OPR",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3318 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 903 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 3324 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 905 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = new Nodo("tkmayor",">",yylineno,yycolumna); }
#line 3330 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 906 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = new Nodo("tkmenor","<",yylineno,yycolumna); }
#line 3336 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 907 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = new Nodo("tkmayoreq",">=",yylineno,yycolumna); }
#line 3342 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 908 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = new Nodo("tkmenoreq","<=",yylineno,yycolumna); }
#line 3348 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 909 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = new Nodo("tkDif","!=",yylineno,yycolumna); }
#line 3354 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 910 "sintact.y" /* yacc.c:1646  */
    { (yyval.nodo) = new Nodo("tkIgual","==",yylineno,yycolumna); }
#line 3360 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 911 "sintact.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo); }
#line 3366 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 912 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("C",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-2].nodo));
        aux->hijos.push_back(new Nodo("tkmas","+",yylineno,yycolumna));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 3378 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 919 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("C",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-2].nodo));
        aux->hijos.push_back(new Nodo("tkmenos","-",yylineno,yycolumna));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
}
#line 3390 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 926 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("C",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 3400 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 931 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("D",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-2].nodo));
        aux->hijos.push_back(new Nodo("tkpor","*",yylineno,yycolumna));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 3412 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 938 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("D",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-2].nodo));
        aux->hijos.push_back(new Nodo("tkdiv","/",yylineno,yycolumna));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 3424 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 945 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("D",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 3434 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 950 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("F",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-2].nodo));
        aux->hijos.push_back(new Nodo("tkpot","^",yylineno,yycolumna));
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 3446 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 957 "sintact.y" /* yacc.c:1646  */
    {
    Nodo *aux = new Nodo("F",yylineno,yycolumna);
    aux->hijos.push_back((yyvsp[0].nodo));
    (yyval.nodo) = aux;
}
#line 3456 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 962 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("G",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 3466 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 967 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("G",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[-1].nodo));
        (yyval.nodo) = aux;
    }
#line 3476 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 973 "sintact.y" /* yacc.c:1646  */
    {
        Nodo * aux2 = new Nodo("tId",string((yyvsp[0].cadena)),yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 3487 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 979 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux2 = new Nodo("tEntero",string((yyvsp[0].cadena)),yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 3498 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 985 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux2 = new Nodo("tkdec",string((yyvsp[0].cadena)),yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 3509 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 991 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux2 = new Nodo("tkcar",string((yyvsp[0].cadena)),yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 3520 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 997 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux2 = new Nodo("tStr",string((yyvsp[0].cadena)),yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 3531 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1003 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux2 = new Nodo("tkTrue","verdadero",yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 3542 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1009 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux2 = new Nodo("tkFalse","falso",yylineno,yycolumna);
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back(aux2);
        (yyval.nodo) = aux;
    }
#line 3553 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1015 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 3563 "sintact.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1020 "sintact.y" /* yacc.c:1646  */
    {
        Nodo *aux = new Nodo("VALOR",yylineno,yycolumna);
        aux->hijos.push_back((yyvsp[0].nodo));
        (yyval.nodo) = aux;
    }
#line 3573 "sintact.cpp" /* yacc.c:1646  */
    break;


#line 3577 "sintact.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1027 "sintact.y" /* yacc.c:1906  */

