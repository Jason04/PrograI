/**Define la gramatica **/

%{  
    extern int yylineno;
    extern yytext;
    extern char *alcance;
    extern void setAlcance(char *variable, char *alcance);
    void yyerror(char *s);
    
%}


%union {
    int num; 
    int id;
    char *stringVal;
    
}


%token FINL ESPACIONBLANCO COMENTARIO DOCUMENTACION ETIQUETA IR IMPRIMIR LEER 
%token LLAVEABIERTA LLAVECERRADA PARENTESISABIERTO 
%token PARENTESISCERRADO TRUE FALSE NUM ID RETORNAR MIENTRAS SINO HAGA 
%token ENTONCES SI DECLARAR ASIGNACION OPERADORRELACIONAL PARENTESISABIERTO 
%token PARENTESISCERRADO LLAVEABIERTA LLAVECERRADA FUNCION OPERADORSUMREST OPERADORMULTDIV

%token <num> NUM
%token <stringVal> ID
%token <stringVal> OPERADORRELACIONAL 

%type <num> ExpresionSuma
%type <num> ExpresionMult
%type <num> Termino
%type <num> Expresion
%type <num> DeclaracionAsignacion
%start Programa

%%

Programa:		       ListaVariables ListaFunciones ListaDeclaraciones
                               ;


ListaVariables:	 	        ListaVariables DeclaracionVariable
				| DeclaracionVariable
				;
DeclaracionVariable:		DECLARAR ID FINL {setAlcance($2,alcance);}
				|FINL
				; 
ListaFunciones:                FUNCION ID PARENTESISABIERTO ID PARENTESISCERRADO LLAVEABIERTA {alcance="i";}ListaVariables DeclaracionAsignacion RETORNAR ID FinFuncion
                               {alcance="o";};

FinFuncion:                    LLAVECERRADA | FINL LLAVECERRADA;    
				
DeclaracionAsignacion:		ID ASIGNACION Expresion FINL {printf("el valor de la expresion: %d para el ID: %s\n",$3,$1);}
				|ID ASIGNACION Expresion  {printf("el valor de la expresion: %d para el ID: %s\n",$3,$1);}
				|FINL {;}
				; 

Expresion:			ExpresionSuma OPERADORRELACIONAL ExpresionSuma {
                                if(strcmp($2,">=") == 0){$$=$1>=$3;};
                                if(strcmp($2,"==") == 0){$$=$1==$3;};
                                if(strcmp($2,"<=") == 0){$$=$1<=$3;};
                                if(strcmp($2,">") == 0){$$=$1>$3;};
                                if(strcmp($2,"<") == 0){$$=$1<$3;};
                                if(strcmp($2,"!=") == 0){$$=$1!=$3;}}
                                |ExpresionSuma {$$=$1;}
                                ;    

ExpresionSuma:			ExpresionSuma OPERADORSUMREST Termino {$$=$1+$3;}
			        |ExpresionMult {$$=$1;}
				;

ExpresionMult:			ExpresionMult OPERADORMULTDIV ExpresionSuma {$$=$1*$3;}
                                |Termino {$$=$1;}
				;

Termino:			PARENTESISABIERTO Expresion PARENTESISCERRADO {$$=$2;}
				|ID {$$=$1;}
				|NUM {$$=$1;}
				| FUNCION ID PARENTESISABIERTO ID PARENTESISCERRADO {;}
				;

ListaDeclaraciones:            ListaDeclaraciones Declaracion
                               |Declaracion
                               ;

ExpresionCondicion:		Expresion
				|TRUE
				|FALSE
				;

DeclaracionSeleccion:		SI  PARENTESISABIERTO ExpresionCondicion PARENTESISCERRADO ENTONCES ListaDeclaracionesCondicionadas
				|SI PARENTESISABIERTO ExpresionCondicion PARENTESISCERRADO ENTONCES ListaDeclaracionesCondicionadas SINO ListaDeclaracionesCondicionadas
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


