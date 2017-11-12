%option noyywrap
%{

#include <iostream>
#include<sintact.h>
using namespace std;

int yyfila = 1;
int yycolumna = 0;

%}


Letra			[a-zA-ZñÑ]
number			[0-9]
entero			{number}+
decimal			({entero}"."{entero})
caracter		[\'][^\'\n][\']
id				{Letra}({Letra}|{number}|_)*

%%

" "				{cout<<yytext; yycolumna+=yyleng; /*'{*/ }
"\t"			{cout<<yytext; yycolumna+=yyleng;}
"\n"			{cout<<yytext; yycolumna=0; yyfila+=1;}
"\r\n"			{cout<<yytext; yycolumna=0; yyfila+=1;}
"EOF"			{cout<<endl<<endl<<endl; yycolumna+=yyleng;}

"$"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkfin;}
"¿"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkAbre;}
"?"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkCierra;}
"int"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkint;}
"bool"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkbool;}
"double"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkdouble;}
"char"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkchar;}
"string"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tString;}
"=="             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkIgual;}
"!="             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkDif;}
"<"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkmenor;}
">"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkmayor;}
">="             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkmayoreq;}
"<="             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkmenoreq;}
"||"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkor;}
"&&"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkand;}
"!&&"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tknand;}
"!||"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tknor;}
"&|"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tknor;}
"!"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tknot;}
"+"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkmas;}
"-"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkmenos;}
"/"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkdiv;}
"*"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkpor;}
"^"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkpot;}
","             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkcma;}
";"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkptocma;}
"="             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkeq;}
"++"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkaum;}
"--"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkdec;}
"true"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkTrue;}
"Clase"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkclase;}
"Import"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkimport;}
"false"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkFalse;}
"publico"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkpublico;}
"privado"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkprivado;}
"arreglo"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkarreglo;}
"["             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkCorA;}
"]"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkCorC;}
"("             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkParA;}
")"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkParC;}
"{"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkLlaA;}
"}"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkLlaC;}
"si"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tksi;}
"sino"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tksino;}
"sino si"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tksinosi;}
"para"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkpara;}
"mientras"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkmientras;}
"hacer"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkhacer;}
"retorna"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkretorna;}
"Graficar"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkgraficar;}
"Pintar_Con"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkpintar;}
"Main"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkmain;}
"salir"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tksalir;}
"void"             {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tkvoid;}
"var"			{cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tVar;}


{entero}        {cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tEntero;}

{caracter}		{cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tCaracter;}

{decimal}		{cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tDecimal;}

{id}			{cout<<yytext; yycolumna+=yyleng; strcpy(yylval.cadena,yytext); return tId;}



.				{
                    yycolumna+=yyleng;
                    cout<<"\n\nError Lexico:\nToken no reconocido "<<yytext<<"\n\n";
                }
%%
