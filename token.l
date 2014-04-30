%{

#include "y.tab.h"
extern char *alcance; 
extern yylineno; //numero de linea 
void errorLexico(char *s,int linenumber);
extern void setComentario(char *comment);
extern void SetError(char *tipo, char *descripcion,char *textoError);
%}
%option nounput yylineno

letra           [a-zA-Z]

digito	        [0-9]   

%%

"{"									{return LLAVEABIERTA;}
"}"									{return LLAVECERRADA;}
"("									{return PARENTESISABIERTO;}
")"									{return PARENTESISCERRADO;}
"funcion"								{return FUNCION;}
"retornar"								{return RETORNAR;}
"declarar"								{return DECLARAR;}
"true"									{return TRUE;}
"false"									{return FALSE;}
"si"									{return SI;}
"entonces"								{return ENTONCES;}
"haga"									{return HAGA;}
"mientras"								{return MIENTRAS;}
"sino"									{return SINO;}
"etiqueta"								{return ETIQUETA;}
"imprimir"								{return IMPRIMIR;}
"ir"									{return IR;}
"leer"									{return LEER;}
({letra}|"_")({letra}|{digito}){0,31} 					{yylval.stringVal=strdup(yytext);return ID;}
{digito}{digito}*							{yylval.num=atoi(yytext);return NUM;}

\/\*+"*"([^*]|[\t\n]|(\*+([^*/]|[\t\n])))*\*+"*"+\/			{setComentario(yytext);}
\/\*([^*]|[\t\n]|(\*+([^*/]|[\t\n])))*\*+\/				{printf("COMENTARIO: %s\n", yytext);};
"="									{return ASIGNACION;}
"<"|">"|"<="|">="|"=="|"!="						{yylval.stringVal=strdup(yytext);return OPERADORRELACIONAL;}
[\n]								        {return FINL;}	
"+"|"-"									{yylval.stringVal=strdup(yytext);return OPERADORSUMREST;}
"*"|"/"									{yylval.stringVal=strdup(yytext);return OPERADORMULTDIV;}
[ \t]									;
.									{SetError("Error Lexico","Error Lexico",yytext);}


%% 

int yywrap()  {  
	return (1);
} 
