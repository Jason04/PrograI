/**Define la gramatica **/

%{  
    #include <stdio.h>
    extern int yylineno;
    extern char* yytext;
    void yyerror(char *s);
%}


%union {int num; char* id;}

%start Programa
%token FINL
%token ESPACIONBLANCO
%token COMENTARIO
%token DOCUMENTACION

%token ETIQUETA
%token IR
%token IMPRIMIR
%token LEER

%token LLAVEABIERTA  
%token LLAVECERRADA 
%token PARENTESISABIERTO
%token PARENTESISCERRADO

%token TRUE
%token FALSE

%token <num> NUM
%token <id> ID

%token RETORNAR
%token MIENTRAS
%token SINO
%token HAGA
%token ENTONCES
%token SI
%token DECLARAR
%token ASIGNACION
%token OPERADORRELACIONAL
%token PARENTESISABIERTO
%token PARENTESISCERRADO

%token LLAVEABIERTA
%token LLAVECERRADA
%token FUNCION
%token OPERADORSUMREST
%token OPERADORMULTDIV
%%

Programa:		       ListaVariables ListaFunciones ListaDeclaraciones
                               ;


ListaVariables:	 	        ListaVariables DeclaracionVariable
				| DeclaracionVariable
				;
DeclaracionVariable:		DECLARAR ID FINL
				|FINL
				; 
ListaFunciones:                FUNCION ID PARENTESISABIERTO ID PARENTESISCERRADO LLAVEABIERTA ListaVariables DeclaracionAsignacion RETORNAR ID FinFuncion
                               ;

FinFuncion:                    LLAVECERRADA | FINL LLAVECERRADA;    
				
DeclaracionAsignacion:		ID ASIGNACION Expresion FINL
				|ID ASIGNACION Expresion 
				|FINL
				; 

Expresion:			ExpresionSuma OPERADORRELACIONAL ExpresionSuma|ExpresionSuma;

ExpresionSuma:			ExpresionSuma OPERADORSUMREST Termino
			        |ExpresionMult
				;

ExpresionMult:			ExpresionMult OPERADORMULTDIV ExpresionSuma
                                |Termino
				;

Termino:			PARENTESISABIERTO Expresion PARENTESISCERRADO
				|ID
				|NUM
				| FUNCION ID PARENTESISABIERTO ID PARENTESISCERRADO
				;

ListaDeclaraciones:            ListaDeclaraciones Declaracion
                               |Declaracion
                               ;

ExpresionCondicion:		Expresion
				|TRUE
				|FALSE
				;

DeclaracionSeleccion:		SI  PARENTESISABIERTO ExpresionCondicion PARENTESISCERRADO ENTONCES ListaDeclaracionesCondicionadas
				|SI PARENTESISABIERTO ExpresionCondicion PARENTESISCERRADO ENTONCES ListaDeclaracionesCondicionadas SINO    					ListaDeclaracionesCondicionadas
				;


ListaDeclaracionesCondicionadas:  Declaracion
                                  |LLAVEABIERTA ListaDeclaraciones LLAVECERRADA
                                  ;

DeclaracionIteracion:		MIENTRAS PARENTESISABIERTO ExpresionCondicion PARENTESISCERRADO HAGA ListaDeclaracionesCondicionadas 
				|HAGA ListaDeclaracionesCondicionadas MIENTRAS Expresion
                                ;

DeclaracionEtiqueta:		ETIQUETA ID FINL;

DeclaracionSaltoEtiqueta:	IR ID FINL;

DeclaracionImprimir:		IMPRIMIR ID FINL;

DeclaracionLeerCaracterDePantalla:	LEER ID FINL{printf("Hacer analisis semantico\n");};

Declaracion:           DeclaracionAsignacion 
		       |DeclaracionSeleccion
                       |DeclaracionIteracion 
                       |DeclaracionEtiqueta 
                       |DeclaracionSaltoEtiqueta 
                       |DeclaracionImprimir
                       |DeclaracionLeerCaracterDePantalla 
 	               ;



%%
void yyerror(char *t){
  printf("Error sintactico en linea %d,Texto Encontrado %s\n",yylineno,yytext);   
}


