#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20121003

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 3 "token.y"
  
    extern int yylineno;
    extern yytext;
    extern char *alcance;
    extern void setVariable(char *variable, char *alcance);
    extern void setParametro(char *variable, char *alcance, char* funcion);
    extern void setFuncion(char *variable, char *alcance, char* funcion);
    extern int buscaValor(char *variable);
    extern void asignarValor(char *variable,char *alcance,int valor);
    extern void setEtiqueta(char *variable, char *alcance);
    extern void marcarUtilizada(char *variable,char *alcance);
    extern int fueDeclarada(char *variable,char *alcance);
    void yyerror(char *s);
    void erroresSemanticos(char *tipoerror, char *texto);
    void errorSaltoCondicion(char *condicion,char *operador);
#line 21 "token.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
    int num; 
    int id;
    char *stringVal;
    
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 49 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define FINL 257
#define ESPACIONBLANCO 258
#define COMENTARIO 259
#define DOCUMENTACION 260
#define ETIQUETA 261
#define IR 262
#define IMPRIMIR 263
#define LEER 264
#define LLAVEABIERTA 265
#define LLAVECERRADA 266
#define PARENTESISCERRADO 267
#define TRUE 268
#define FALSE 269
#define RETORNAR 270
#define MIENTRAS 271
#define SINO 272
#define HAGA 273
#define ENTONCES 274
#define SI 275
#define DECLARAR 276
#define ASIGNACION 277
#define PARENTESISABIERTO 278
#define FUNCION 279
#define NUM 280
#define ID 281
#define OPERADORRELACIONAL 282
#define OPERADORSUMREST 283
#define OPERADORMULTDIV 284
#define IFX 285
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    7,    7,   10,   10,   10,   11,   12,    8,
   13,   13,    6,    6,    6,    5,    5,    5,    2,    2,
    3,    3,    4,    4,    4,   14,    4,    9,    9,    1,
    1,    1,   17,   16,   19,   19,   18,   18,   21,   20,
   20,   23,   22,   25,   24,   27,   26,   29,   28,   15,
   15,   15,   15,   15,   15,   15,   15,
};
static const short yylen[] = {                            2,
    4,    0,    2,    1,    3,    2,    1,    0,    0,   13,
    1,    2,    4,    3,    1,    3,    1,    2,    3,    1,
    3,    1,    3,    1,    1,    0,    6,    2,    1,    1,
    1,    1,    0,    8,    2,    0,    1,    3,    0,    7,
    4,    0,    4,    0,    4,    0,    4,    0,    4,    1,
    1,    1,    1,    1,    1,    1,    2,
};
static const short yydefred[] = {                         2,
    0,    0,    7,    0,    0,    4,    6,    0,    0,    0,
    3,    5,    0,    0,   15,    0,    0,    0,    0,    0,
    0,    0,    0,   50,    0,   29,   51,   52,   53,   54,
   55,   56,    0,   57,   42,   44,   46,   48,    0,    0,
   37,    0,    0,    0,   28,    8,    0,    0,    0,    0,
    0,   31,   32,    0,    0,   25,   24,   39,    0,    0,
   22,   30,    0,    0,   33,    0,    0,   43,   45,   47,
   49,   18,    0,   26,    0,    0,    0,    0,   38,   41,
    0,   13,    0,   23,    0,    0,    0,   19,   21,    0,
    9,    0,    0,    0,    0,    0,   40,    0,    0,   27,
    0,   34,    0,    0,   35,    0,    0,    0,   11,   10,
   12,
};
static const short yydgoto[] = {                          1,
   58,   59,   60,   61,   62,   24,    5,   10,   25,    6,
   67,   95,  110,   85,   41,   27,   81,   42,  102,   28,
   75,   29,   47,   30,   48,   31,   49,   32,   50,
};
static const short yysindex[] = {                         0,
 -240, -249,    0, -256, -187,    0,    0, -219, -238, -199,
    0,    0, -230, -207,    0, -227, -221, -208, -206, -190,
 -252, -188, -184,    0, -199,    0,    0,    0,    0,    0,
    0,    0, -179,    0,    0,    0,    0,    0, -201, -199,
    0, -172, -201, -195,    0,    0, -154, -153, -152, -151,
 -150,    0,    0, -195, -173,    0,    0,    0, -182, -175,
    0,    0, -222, -195,    0, -147, -156,    0,    0,    0,
    0,    0, -155,    0, -149, -183, -183, -183,    0,    0,
 -148,    0, -145,    0, -165, -159, -168,    0,    0, -158,
    0, -164, -252, -252, -240, -146,    0, -144, -229,    0,
 -252,    0,    0, -143,    0, -157, -220, -141,    0,    0,
    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    2,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   24,    1,
    0,    0,    0,    0,    0,   66,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   45,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   87,    0,    0,
    0,    0, -250,    0,    0,    0,    0,    0,    0,    0,
    0,
};
static const short yygindex[] = {                         0,
   79,  -46,    0,   46,   27,   30,   31,    0,   90,   -5,
    0,    0,    0,    0,   -7,    0,    0,  -79,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 368
static const short yytable[] = {                         11,
   20,    1,   26,   14,   15,    7,    7,    7,   16,   17,
   18,   19,   40,   97,   98,    2,    3,   45,   20,   15,
   21,  105,   22,   17,    8,    7,    2,  103,   23,   87,
    7,   89,   26,   14,   15,    4,  108,   12,   16,   17,
   18,   19,   13,   79,   16,  109,    4,   33,   20,   34,
   21,   23,   22,   35,   51,   45,   14,   15,   23,   36,
   51,   16,   17,   18,   19,   14,   52,   53,    2,    3,
   66,   20,   37,   21,   38,   22,   54,   55,   56,   57,
   73,   23,   54,   55,   56,   57,   36,   39,    4,   43,
   80,    9,   44,   11,   54,   55,   56,   57,   64,   76,
   77,   46,   68,   69,   70,   71,   72,   74,   78,   82,
   83,   84,   92,   93,   77,   94,   96,   86,   90,   91,
  100,   65,   88,  107,  111,   99,  106,  101,  104,   63,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   20,   20,    0,    0,
    0,   20,   20,   20,   20,    0,   20,   20,    0,    0,
   20,   20,   20,   20,    0,   20,   20,    1,    0,   17,
   17,   20,   20,   20,   17,   17,   17,   17,    0,   17,
   17,    0,    0,   17,   17,   17,   17,    0,   17,   17,
   16,   16,    0,    0,   17,   16,   16,   16,   16,    0,
   16,   16,    0,    0,   16,   16,   16,   16,    0,   16,
   16,   14,    0,    0,    0,   16,   14,   14,   14,   14,
    0,   14,    0,    0,    0,   14,   14,   14,   14,    0,
   14,   14,   36,   36,    0,    0,   14,   36,   36,   36,
   36,    0,   36,    0,    0,    0,    0,   36,    0,   36,
    0,   36,   36,    0,    0,    0,    0,   36,
};
static const short yycheck[] = {                          5,
    0,    0,   10,  256,  257,  256,  257,  257,  261,  262,
  263,  264,  265,   93,   94,  256,  257,   25,  271,  270,
  273,  101,  275,    0,  281,  276,  256,  257,  281,   76,
  281,   78,   40,  256,  257,  276,  257,  257,  261,  262,
  263,  264,  281,  266,    0,  266,  276,  278,  271,  257,
  273,  281,  275,  281,  256,   63,  256,  257,  281,  281,
  256,  261,  262,  263,  264,    0,  268,  269,  256,  257,
   44,  271,  281,  273,  281,  275,  278,  279,  280,  281,
   54,  281,  278,  279,  280,  281,    0,  278,  276,  278,
   64,  279,  277,   99,  278,  279,  280,  281,  271,  282,
  283,  281,  257,  257,  257,  257,  257,  281,  284,  257,
  267,  267,  278,  273,  283,  274,  281,  267,  267,  265,
  267,   43,   77,  281,  266,   95,  270,  272,   99,   40,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  256,  257,   -1,   -1,
   -1,  261,  262,  263,  264,   -1,  266,  267,   -1,   -1,
  270,  271,  272,  273,   -1,  275,  276,  276,   -1,  256,
  257,  281,  282,  283,  261,  262,  263,  264,   -1,  266,
  267,   -1,   -1,  270,  271,  272,  273,   -1,  275,  276,
  256,  257,   -1,   -1,  281,  261,  262,  263,  264,   -1,
  266,  267,   -1,   -1,  270,  271,  272,  273,   -1,  275,
  276,  256,   -1,   -1,   -1,  281,  261,  262,  263,  264,
   -1,  266,   -1,   -1,   -1,  270,  271,  272,  273,   -1,
  275,  276,  256,  257,   -1,   -1,  281,  261,  262,  263,
  264,   -1,  266,   -1,   -1,   -1,   -1,  271,   -1,  273,
   -1,  275,  276,   -1,   -1,   -1,   -1,  281,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 285
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"FINL","ESPACIONBLANCO",
"COMENTARIO","DOCUMENTACION","ETIQUETA","IR","IMPRIMIR","LEER","LLAVEABIERTA",
"LLAVECERRADA","PARENTESISCERRADO","TRUE","FALSE","RETORNAR","MIENTRAS","SINO",
"HAGA","ENTONCES","SI","DECLARAR","ASIGNACION","PARENTESISABIERTO","FUNCION",
"NUM","ID","OPERADORRELACIONAL","OPERADORSUMREST","OPERADORMULTDIV","IFX",
};
static const char *yyrule[] = {
"$accept : Programa",
"Programa : Programa ListaVariables ListaFunciones ListaDeclaraciones",
"Programa :",
"ListaVariables : ListaVariables DeclaracionVariable",
"ListaVariables : DeclaracionVariable",
"DeclaracionVariable : DECLARAR ID FINL",
"DeclaracionVariable : error FINL",
"DeclaracionVariable : FINL",
"$$1 :",
"$$2 :",
"ListaFunciones : FUNCION ID PARENTESISABIERTO ID $$1 PARENTESISCERRADO LLAVEABIERTA $$2 ListaVariables DeclaracionAsignacion RETORNAR ID FinFuncion",
"FinFuncion : LLAVECERRADA",
"FinFuncion : FINL LLAVECERRADA",
"DeclaracionAsignacion : ID ASIGNACION Expresion FINL",
"DeclaracionAsignacion : ID ASIGNACION Expresion",
"DeclaracionAsignacion : FINL",
"Expresion : ExpresionSuma OPERADORRELACIONAL ExpresionSuma",
"Expresion : ExpresionSuma",
"Expresion : error FINL",
"ExpresionSuma : ExpresionSuma OPERADORSUMREST Termino",
"ExpresionSuma : ExpresionMult",
"ExpresionMult : ExpresionMult OPERADORMULTDIV ExpresionSuma",
"ExpresionMult : Termino",
"Termino : PARENTESISABIERTO Expresion PARENTESISCERRADO",
"Termino : ID",
"Termino : NUM",
"$$3 :",
"Termino : FUNCION ID $$3 PARENTESISABIERTO ID PARENTESISCERRADO",
"ListaDeclaraciones : ListaDeclaraciones Declaracion",
"ListaDeclaraciones : Declaracion",
"ExpresionCondicion : Expresion",
"ExpresionCondicion : TRUE",
"ExpresionCondicion : FALSE",
"$$4 :",
"DeclaracionSeleccion : SI PARENTESISABIERTO ExpresionCondicion $$4 PARENTESISCERRADO ENTONCES ListaDeclaracionesCondicionadas Sisolo",
"Sisolo : SINO ListaDeclaracionesCondicionadas",
"Sisolo :",
"ListaDeclaracionesCondicionadas : Declaracion",
"ListaDeclaracionesCondicionadas : LLAVEABIERTA ListaDeclaraciones LLAVECERRADA",
"$$5 :",
"DeclaracionIteracion : MIENTRAS PARENTESISABIERTO ExpresionCondicion $$5 PARENTESISCERRADO HAGA ListaDeclaracionesCondicionadas",
"DeclaracionIteracion : HAGA ListaDeclaracionesCondicionadas MIENTRAS Expresion",
"$$6 :",
"DeclaracionEtiqueta : ETIQUETA ID $$6 FINL",
"$$7 :",
"DeclaracionSaltoEtiqueta : IR ID $$7 FINL",
"$$8 :",
"DeclaracionImprimir : IMPRIMIR ID $$8 FINL",
"$$9 :",
"DeclaracionLeerCaracterDePantalla : LEER ID $$9 FINL",
"Declaracion : DeclaracionAsignacion",
"Declaracion : DeclaracionSeleccion",
"Declaracion : DeclaracionIteracion",
"Declaracion : DeclaracionEtiqueta",
"Declaracion : DeclaracionSaltoEtiqueta",
"Declaracion : DeclaracionImprimir",
"Declaracion : DeclaracionLeerCaracterDePantalla",
"Declaracion : error FINL",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 149 "token.y"
void yyerror(char *t){
  printf("Error sintactico en linea %d,Texto Encontrado %s\n",yylineno,yytext);   
}
void erroresSemanticos(char *tipoerror, char *texto){
    printf("Error semantico de tipo %s en linea %d,con el Texto Encontrado %s\n",tipoerror,yylineno,texto);
}
void errorSaltoCondicion(char *condicion,char *operador){
    //printf("Error semantico por condicion: %s en el: %s en linea: %d\n",condicion,operador,yylineno);
}
#line 385 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 5:
#line 59 "token.y"
	{setVariable(yystack.l_mark[-1].stringVal,alcance);}
break;
case 6:
#line 60 "token.y"
	{yyerrok;}
break;
case 8:
#line 63 "token.y"
	{setParametro(yystack.l_mark[0].stringVal,alcance,yystack.l_mark[-2].stringVal);setFuncion(yystack.l_mark[0].stringVal,alcance,yystack.l_mark[-2].stringVal);}
break;
case 9:
#line 63 "token.y"
	{alcance="i";}
break;
case 10:
#line 64 "token.y"
	{alcance="o";}
break;
case 13:
#line 69 "token.y"
	{if(fueDeclarada(yystack.l_mark[-3].stringVal,alcance)==0){erroresSemanticos("la variable no existe",yystack.l_mark[-3].stringVal);};if(fueDeclarada(yystack.l_mark[-3].stringVal,alcance)==1){asignarValor(yystack.l_mark[-3].stringVal,alcance,yystack.l_mark[-1].num);};}
break;
case 14:
#line 70 "token.y"
	{if(fueDeclarada(yystack.l_mark[-2].stringVal,alcance)==0){erroresSemanticos("la variable no existe",yystack.l_mark[-2].stringVal);};if(fueDeclarada(yystack.l_mark[-2].stringVal,alcance)==1){asignarValor(yystack.l_mark[-2].stringVal,alcance,yystack.l_mark[0].num);};}
break;
case 15:
#line 71 "token.y"
	{;}
break;
case 16:
#line 73 "token.y"
	{
                                if(strcmp(yystack.l_mark[-1].stringVal,">=") == 0){yyval.num=yystack.l_mark[-2].num>=yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"==") == 0){yyval.num=yystack.l_mark[-2].num==yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"<=") == 0){yyval.num=yystack.l_mark[-2].num<=yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,">") == 0){yyval.num=yystack.l_mark[-2].num>yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"<") == 0){yyval.num=yystack.l_mark[-2].num<yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"!=") == 0){yyval.num=yystack.l_mark[-2].num!=yystack.l_mark[0].num;}}
break;
case 17:
#line 80 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 18:
#line 81 "token.y"
	{yyerrok;}
break;
case 19:
#line 84 "token.y"
	{ 
                                if(strcmp(yystack.l_mark[-1].stringVal,"+") == 0){yyval.num=yystack.l_mark[-2].num+yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"-") == 0){yyval.num=yystack.l_mark[-2].num-yystack.l_mark[0].num;};}
break;
case 20:
#line 87 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 21:
#line 90 "token.y"
	{
                                if(strcmp(yystack.l_mark[-1].stringVal,"*") == 0){yyval.num=yystack.l_mark[-2].num*yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"/") == 0){if(yystack.l_mark[0].num==0){erroresSemanticos("Zero Division","0");};yyval.num=yystack.l_mark[-2].num/yystack.l_mark[0].num;};}
break;
case 22:
#line 93 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 23:
#line 96 "token.y"
	{yyval.num=yystack.l_mark[-1].num;}
break;
case 24:
#line 97 "token.y"
	{yyval.num=buscaValor(yystack.l_mark[0].stringVal);}
break;
case 25:
#line 98 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 26:
#line 99 "token.y"
	{if(fueDeclarada(yystack.l_mark[0].stringVal,alcance)==0){erroresSemanticos("la funcion no existe",yystack.l_mark[0].stringVal);};}
break;
case 27:
#line 99 "token.y"
	{;}
break;
case 30:
#line 106 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 31:
#line 107 "token.y"
	{yyval.num=1;}
break;
case 32:
#line 108 "token.y"
	{yyval.num=0;}
break;
case 33:
#line 112 "token.y"
	{if(yystack.l_mark[0].num == 0)errorSaltoCondicion("falsa","if");}
break;
case 36:
#line 116 "token.y"
	{alcance="o";}
break;
case 39:
#line 123 "token.y"
	{if(yystack.l_mark[0].num == 0) errorSaltoCondicion("falsa","mientras");}
break;
case 42:
#line 127 "token.y"
	{setEtiqueta(yystack.l_mark[0].stringVal,alcance);}
break;
case 44:
#line 129 "token.y"
	{if(fueDeclarada(yystack.l_mark[0].stringVal,alcance)==0){erroresSemanticos("la etiqueta no existe",yystack.l_mark[0].stringVal);};}
break;
case 46:
#line 132 "token.y"
	{if(fueDeclarada(yystack.l_mark[0].stringVal,alcance)==0){erroresSemanticos("la variable no existe",yystack.l_mark[0].stringVal);};}
break;
case 48:
#line 134 "token.y"
	{if(fueDeclarada(yystack.l_mark[0].stringVal,alcance)==0){erroresSemanticos("la variable no existe",yystack.l_mark[0].stringVal);};}
break;
case 57:
#line 143 "token.y"
	{yyerrok;}
break;
#line 725 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
