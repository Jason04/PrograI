/**Define la gramatica **/

%{  
    extern int yylineno;
    extern yytext;
    extern char *alcance;
    extern void setVariable(char *variable, char *alcance, int linea);
    extern void setParametro(char *variable, char *alcance, int linea, char* funcion);
    extern void setFuncion(char *variable, char *alcance, int linea, char* funcion);
    extern int buscaValor(char *variable);
    extern void asignarValor(char *variable,char *alcance,int valor);
    extern void setEtiqueta(char *variable, char *alcance, int linea);
    extern void marcarUtilizada(char *variable,char *alcance);
    extern int fueDeclarada(char *variable,char *alcance);
    void yyerror(char *s);
    void erroresSemanticos(char *tipoerror, char *texto);
%}


%union {
    int num; 
    int id;
    char *stringVal;
    
}


%token FINL ESPACIONBLANCO COMENTARIO DOCUMENTACION ETIQUETA IR IMPRIMIR LEER 
%token LLAVEABIERTA LLAVECERRADA PARENTESISCERRADO TRUE FALSE RETORNAR MIENTRAS SINO HAGA 
%token ENTONCES SI DECLARAR ASIGNACION PARENTESISABIERTO FUNCION 
%token <num> NUM
%token <stringVal> ID
%token <stringVal> OPERADORRELACIONAL 
%token <stringVal> OPERADORSUMREST
%token <stringVal> OPERADORMULTDIV
%type <num> ExpresionCondicion
%type <num> ExpresionSuma
%type <num> ExpresionMult
%type <num> Termino
%type <num> Expresion
%type <num> DeclaracionAsignacion
%left OPERADORSUMREST
%left OPERADORMULTDIV
%nonassoc IFX
%nonassoc SINO
%start Programa

%%

Programa:		       Programa ListaVariables ListaFunciones ListaDeclaraciones
                               |Programa error '\n'    {yyerrok;}
                               |
                               ;


ListaVariables:	 	        ListaVariables DeclaracionVariable
				| DeclaracionVariable
				;
DeclaracionVariable:		DECLARAR ID FINL {setVariable($2,alcance,yylineno);}
				|FINL
				; 
ListaFunciones:                FUNCION ID PARENTESISABIERTO ID {setParametro($4,alcance,yylineno,$2);setFuncion($4,alcance,yylineno,$2);}PARENTESISCERRADO LLAVEABIERTA {alcance="i";}ListaVariables DeclaracionAsignacion RETORNAR ID FinFuncion
                               {alcance="o";};

FinFuncion:                    LLAVECERRADA | FINL LLAVECERRADA;    
				
DeclaracionAsignacion:		ID ASIGNACION Expresion FINL {if(fueDeclarada($1,alcance)==0){erroresSemanticos("la variable no existe",$1);};if(fueDeclarada($1,alcance)==1){asignarValor($1,alcance,$3);};}
				|ID ASIGNACION Expresion  {if(fueDeclarada($1,alcance)==0){erroresSemanticos("la variable no existe",$1);};if(fueDeclarada($1,alcance)==1){asignarValor($1,alcance,$3);};}
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

ExpresionSuma:			ExpresionSuma OPERADORSUMREST Termino { 
                                if(strcmp($2,"+") == 0){$$=$1+$3;};
                                if(strcmp($2,"-") == 0){$$=$1-$3;};}
			        |ExpresionMult {$$=$1;}
				;

ExpresionMult:			ExpresionMult OPERADORMULTDIV ExpresionSuma {
                                if(strcmp($2,"*") == 0){$$=$1*$3;};
                                if(strcmp($2,"/") == 0){if($3==0){erroresSemanticos("Zero Division","0");};$$=$1/$3;};}
                                |Termino {$$=$1;}
				;

Termino:			PARENTESISABIERTO Expresion PARENTESISCERRADO {$$=$2;}
				|ID {printf(" el VALOOOOR es:%d para el ID: %s\n",buscaValor($1),$1);$$=buscaValor($1);}
				|NUM {$$=$1;}
				|FUNCION ID PARENTESISABIERTO ID PARENTESISCERRADO {;}
				;

ListaDeclaraciones:            ListaDeclaraciones Declaracion
                               |Declaracion
                               ;

ExpresionCondicion:		Expresion {$$=$1;}
				|TRUE {$$=1;}
				|FALSE {$$=0;}
				;

DeclaracionSeleccion:		SI PARENTESISABIERTO ExpresionCondicion {if($3 == 0) printf("LA CONDICION ES: %d",$3);} PARENTESISCERRADO ENTONCES ListaDeclaracionesCondicionadas Sisolo
                                ;
Sisolo:                         SINO ListaDeclaracionesCondicionadas 
                                |%prec IFX {alcance="o";}
                                ;

ListaDeclaracionesCondicionadas:  Declaracion
                                  |LLAVEABIERTA ListaDeclaraciones LLAVECERRADA
                                  ;

DeclaracionIteracion:		MIENTRAS PARENTESISABIERTO ExpresionCondicion PARENTESISCERRADO HAGA ListaDeclaracionesCondicionadas 
				|HAGA ListaDeclaracionesCondicionadas MIENTRAS Expresion
                                ;

DeclaracionEtiqueta:		ETIQUETA ID  {setEtiqueta($2,alcance,yylineno);} FINL;

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
void erroresSemanticos(char *tipoerror, char *texto){
    printf("Error semantico de tipo %s en linea %d,con el Texto Encontrado %s\n",tipoerror,yylineno,texto);
}
