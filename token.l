%{

#include "y.tab.h"
extern char *alcance; 
extern yylineno; //numero de linea 
void errorLexico(char *s,int linenumber);

%}
%option nounput yylineno

letra           [a-zA-Z]

digito	        [0-9]   


%%


"{"									{printf("llaveabierta: %s\n",yytext);return LLAVEABIERTA;}
"}"									{printf("llavecerrada: %s\n",yytext);return LLAVECERRADA;}
"("									{printf("parentesisabierto: %s\n",yytext);return PARENTESISABIERTO;}
")"									{printf("parentesiscerrado: %s\n",yytext);return PARENTESISCERRADO;}
"funcion"								{printf("reservada: %s\n",yytext);return FUNCION;}
"retornar"								{printf("reservada: %s\n",yytext);return RETORNAR;}
"declarar"								{printf("reservada: %s\n",yytext);return DECLARAR;}
"true"									{printf("reservada: %s\n",yytext);return TRUE;}
"false"									{printf("reservada: %s\n",yytext);return FALSE;}
"si"									{printf("reservada: %s\n",yytext);return SI;}
"entonces"								{printf("reservada: %s\n",yytext);return ENTONCES;}
"haga"									{printf("reservada: %s\n",yytext);return HAGA;}
"mientras"								{printf("reservada: %s\n",yytext);return MIENTRAS;}
"sino"									{printf("reservada: %s\n",yytext);return SINO;}
"etiqueta"								{printf("reservada: %s\n",yytext);return ETIQUETA;}
"imprimir"								{printf("reservada: %s\n",yytext);return IMPRIMIR;}
"ir"									{printf("reservada: %s\n",yytext);return IR;}
"leer"									{printf("reservada: %s\n",yytext);return LEER;}
({letra}|"_")({letra}|{digito}){0,31} 					{printf("ID: %s", yytext);yylval.stringVal=strdup(yytext);return ID;}
{digito}{digito}*							{printf("NUM: %s\n", yytext);yylval.num=atoi(yytext);return NUM;}

\/\*+"*"([^*]|[\t\n]|(\*+([^*/]|[\t\n])))*\*+"*"+\/			{printf("DOCUMENTACION: %s\n", yytext);}
\/\*([^*]|[\t\n]|(\*+([^*/]|[\t\n])))*\*+\/				{printf("COMENTARIO: %s\n", yytext);};
"="									{printf("ASIGNACION: %s\n", yytext);return ASIGNACION;}
"<"|">"|"<="|">="|"=="|"!="						{printf("OPERADORRELACIONAL: %s\n", yytext);yylval.stringVal=strdup(yytext);return OPERADORRELACIONAL;}
[\n]								        {printf("Salto de linea: %s\n",yytext);return FINL;}	
"+"|"-"									{printf("OPERADORSUMRETS: %s\n", yytext);return OPERADORSUMREST;}
"*"|"/"									{printf("OPERADORSUMRETS: %s\n", yytext);return OPERADORMULTDIV;}
[ \t]									;
.									printf("Error lexico  linea %d,%s\n", yylineno, yytext);


%% 

int yywrap()  {  
	return (1);
} 
