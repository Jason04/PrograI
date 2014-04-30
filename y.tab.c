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
#line 20 "token.y"
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
#line 48 "y.tab.c"

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
    0,    0,    0,    7,    7,   10,   10,   11,   12,    8,
   13,   13,    6,    6,    6,    5,    5,    2,    2,    3,
    3,    4,    4,    4,    4,    9,    9,    1,    1,    1,
   16,   15,   18,   18,   17,   17,   19,   19,   21,   20,
   22,   23,   24,   14,   14,   14,   14,   14,   14,   14,
};
static const short yylen[] = {                            2,
    4,    3,    0,    2,    1,    3,    1,    0,    0,   13,
    1,    2,    4,    3,    1,    3,    1,    3,    1,    3,
    1,    3,    1,    1,    5,    2,    1,    1,    1,    1,
    0,    8,    2,    0,    1,    3,    6,    4,    0,    4,
    3,    3,    3,    1,    1,    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         3,
    0,    0,    7,    0,    0,    5,    2,    0,    0,    0,
    4,    6,    0,   15,    0,    0,    0,    0,    0,    0,
    0,    0,   44,    0,   27,   45,   46,   47,   48,   49,
   50,    0,   39,    0,    0,    0,    0,    0,   35,    0,
    0,    0,   26,    8,    0,   41,   42,   43,   29,   30,
    0,    0,   24,   23,    0,    0,    0,   21,   28,    0,
    0,   31,    0,    0,   40,    0,    0,    0,    0,    0,
    0,   36,   38,    0,   13,    0,   22,    0,    0,    0,
   18,   20,    0,    9,    0,   37,    0,    0,   25,    0,
    0,    0,   32,    0,    0,   33,    0,    0,    0,   11,
   10,   12,
};
static const short yydgoto[] = {                          1,
   55,   56,   57,   58,   59,   23,    5,   10,   24,    6,
   64,   88,  101,   39,   26,   74,   40,   93,   27,   28,
   45,   29,   30,   31,
};
static const short yysindex[] = {                         0,
 -251,   17,    0, -268, -236,    0,    0, -215, -252, -204,
    0,    0, -231,    0, -230, -220, -218, -217, -213, -253,
 -203, -207,    0, -204,    0,    0,    0,    0,    0,    0,
    0, -205,    0, -183, -165, -164, -190, -204,    0, -177,
 -190, -197,    0,    0, -162,    0,    0,    0,    0,    0,
 -197, -185,    0,    0, -170, -228, -186,    0,    0, -225,
 -197,    0, -158, -167,    0, -166, -176, -169, -197, -197,
 -197,    0,    0, -161,    0, -160,    0, -178, -253, -175,
    0,    0, -163,    0, -157,    0, -253, -242,    0, -159,
 -250, -253,    0,    0, -156,    0, -174, -222, -154,    0,
    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    3,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   24,    1,    0,    0,    0,
    0,    0,   66,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   45,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   87,
    0,    0,    0, -208,    0,    0,    0,    0,    0,    0,
    0,    0,
};
static const short yygindex[] = {                         0,
   68,  -52,    0,   46,  -28,   26,   27,    0,   80,   -5,
    0,    0,    0,   -8,    0,    0,   -7,    0,    0,    0,
    0,    0,    0,    0,
};
#define YYTABLESIZE 368
static const short yytable[] = {                         11,
   19,   25,    1,   14,    2,    3,   94,   15,   16,   17,
   18,   38,    8,   63,    3,   43,   80,   19,   82,   20,
    3,   21,   66,   17,    4,    4,    7,   22,   13,   25,
   22,   14,   73,    4,   99,   15,   16,   17,   18,    4,
   72,   12,    9,  100,   16,   19,   32,   20,    7,   21,
   33,   43,   14,   69,   70,   22,   15,   16,   17,   18,
   34,   15,   35,   36,   37,   14,   19,    7,   20,   42,
   21,   86,    7,   46,   41,   44,   22,   49,   50,   90,
   51,   52,   53,   54,   96,   11,   34,   51,   52,   53,
   54,   47,   48,   61,   65,   67,   68,   71,   75,   76,
   77,   78,   85,   79,   84,   83,   98,   70,   62,   89,
   87,  102,   92,   97,   91,   81,   95,   60,    0,    0,
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
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   19,   19,    1,    0,
    0,   19,   19,   19,   19,    0,   19,   19,    0,    0,
   19,   19,   19,   19,    0,   19,   19,    0,    1,   17,
   17,   19,   19,   19,   17,   17,   17,   17,    0,   17,
   17,    0,    0,   17,   17,   17,   17,    0,   17,   17,
   16,   16,    0,    0,   17,   16,   16,   16,   16,    0,
   16,   16,    0,    0,   16,   16,   16,   16,    0,   16,
   16,   14,    0,    0,    0,   16,   14,   14,   14,   14,
    0,   14,    0,    0,    0,   14,   14,   14,   14,    0,
   14,   14,   34,   34,    0,    0,   14,   34,   34,   34,
   34,    0,   34,    0,    0,    0,    0,   34,    0,   34,
    0,   34,   34,    0,    0,    0,    0,   34,
};
static const short yycheck[] = {                          5,
    0,   10,    0,  257,  256,  257,  257,  261,  262,  263,
  264,  265,  281,   42,  257,   24,   69,  271,   71,  273,
  257,  275,   51,    0,  276,  276,   10,  281,  281,   38,
  281,  257,   61,  276,  257,  261,  262,  263,  264,  276,
  266,  257,  279,  266,    0,  271,  278,  273,  257,  275,
  281,   60,  257,  282,  283,  281,  261,  262,  263,  264,
  281,  270,  281,  281,  278,    0,  271,  276,  273,  277,
  275,   79,  281,  257,  278,  281,  281,  268,  269,   87,
  278,  279,  280,  281,   92,   91,    0,  278,  279,  280,
  281,  257,  257,  271,  257,  281,  267,  284,  257,  267,
  267,  278,  281,  273,  265,  267,  281,  283,   41,  267,
  274,  266,  272,  270,   88,   70,   91,   38,   -1,   -1,
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
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  256,  257,  256,   -1,
   -1,  261,  262,  263,  264,   -1,  266,  267,   -1,   -1,
  270,  271,  272,  273,   -1,  275,  276,   -1,  276,  256,
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

"end-of-file",0,0,0,0,0,0,0,0,0,"'\\n'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"FINL","ESPACIONBLANCO",
"COMENTARIO","DOCUMENTACION","ETIQUETA","IR","IMPRIMIR","LEER","LLAVEABIERTA",
"LLAVECERRADA","PARENTESISCERRADO","TRUE","FALSE","RETORNAR","MIENTRAS","SINO",
"HAGA","ENTONCES","SI","DECLARAR","ASIGNACION","PARENTESISABIERTO","FUNCION",
"NUM","ID","OPERADORRELACIONAL","OPERADORSUMREST","OPERADORMULTDIV","IFX",
};
static const char *yyrule[] = {
"$accept : Programa",
"Programa : Programa ListaVariables ListaFunciones ListaDeclaraciones",
"Programa : Programa error '\\n'",
"Programa :",
"ListaVariables : ListaVariables DeclaracionVariable",
"ListaVariables : DeclaracionVariable",
"DeclaracionVariable : DECLARAR ID FINL",
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
"ExpresionSuma : ExpresionSuma OPERADORSUMREST Termino",
"ExpresionSuma : ExpresionMult",
"ExpresionMult : ExpresionMult OPERADORMULTDIV ExpresionSuma",
"ExpresionMult : Termino",
"Termino : PARENTESISABIERTO Expresion PARENTESISCERRADO",
"Termino : ID",
"Termino : NUM",
"Termino : FUNCION ID PARENTESISABIERTO ID PARENTESISCERRADO",
"ListaDeclaraciones : ListaDeclaraciones Declaracion",
"ListaDeclaraciones : Declaracion",
"ExpresionCondicion : Expresion",
"ExpresionCondicion : TRUE",
"ExpresionCondicion : FALSE",
"$$3 :",
"DeclaracionSeleccion : SI PARENTESISABIERTO ExpresionCondicion $$3 PARENTESISCERRADO ENTONCES ListaDeclaracionesCondicionadas Sisolo",
"Sisolo : SINO ListaDeclaracionesCondicionadas",
"Sisolo :",
"ListaDeclaracionesCondicionadas : Declaracion",
"ListaDeclaracionesCondicionadas : LLAVEABIERTA ListaDeclaraciones LLAVECERRADA",
"DeclaracionIteracion : MIENTRAS PARENTESISABIERTO ExpresionCondicion PARENTESISCERRADO HAGA ListaDeclaracionesCondicionadas",
"DeclaracionIteracion : HAGA ListaDeclaracionesCondicionadas MIENTRAS Expresion",
"$$4 :",
"DeclaracionEtiqueta : ETIQUETA ID $$4 FINL",
"DeclaracionSaltoEtiqueta : IR ID FINL",
"DeclaracionImprimir : IMPRIMIR ID FINL",
"DeclaracionLeerCaracterDePantalla : LEER ID FINL",
"Declaracion : DeclaracionAsignacion",
"Declaracion : DeclaracionSeleccion",
"Declaracion : DeclaracionIteracion",
"Declaracion : DeclaracionEtiqueta",
"Declaracion : DeclaracionSaltoEtiqueta",
"Declaracion : DeclaracionImprimir",
"Declaracion : DeclaracionLeerCaracterDePantalla",

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
#line 142 "token.y"
void yyerror(char *t){
  printf("Error sintactico en linea %d,Texto Encontrado %s\n",yylineno,yytext);   
}
void erroresSemanticos(char *tipoerror, char *texto){
    printf("Error semantico de tipo %s en linea %d,con el Texto Encontrado %s\n",tipoerror,yylineno,texto);
}
#line 369 "y.tab.c"

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
case 2:
#line 51 "token.y"
	{yyerrok;}
break;
case 6:
#line 59 "token.y"
	{setVariable(yystack.l_mark[-1].stringVal,alcance,yylineno);}
break;
case 8:
#line 62 "token.y"
	{setParametro(yystack.l_mark[0].stringVal,alcance,yylineno,yystack.l_mark[-2].stringVal);setFuncion(yystack.l_mark[0].stringVal,alcance,yylineno,yystack.l_mark[-2].stringVal);}
break;
case 9:
#line 62 "token.y"
	{alcance="i";}
break;
case 10:
#line 63 "token.y"
	{alcance="o";}
break;
case 13:
#line 67 "token.y"
	{if(fueDeclarada(yystack.l_mark[-3].stringVal,alcance)==0){erroresSemanticos("la variable no existe",yystack.l_mark[-3].stringVal);};if(fueDeclarada(yystack.l_mark[-3].stringVal,alcance)==1){asignarValor(yystack.l_mark[-3].stringVal,alcance,yystack.l_mark[-1].num);};}
break;
case 14:
#line 68 "token.y"
	{if(fueDeclarada(yystack.l_mark[-2].stringVal,alcance)==0){erroresSemanticos("la variable no existe",yystack.l_mark[-2].stringVal);};if(fueDeclarada(yystack.l_mark[-2].stringVal,alcance)==1){asignarValor(yystack.l_mark[-2].stringVal,alcance,yystack.l_mark[0].num);};}
break;
case 15:
#line 69 "token.y"
	{;}
break;
case 16:
#line 71 "token.y"
	{
                                if(strcmp(yystack.l_mark[-1].stringVal,">=") == 0){yyval.num=yystack.l_mark[-2].num>=yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"==") == 0){yyval.num=yystack.l_mark[-2].num==yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"<=") == 0){yyval.num=yystack.l_mark[-2].num<=yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,">") == 0){yyval.num=yystack.l_mark[-2].num>yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"<") == 0){yyval.num=yystack.l_mark[-2].num<yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"!=") == 0){yyval.num=yystack.l_mark[-2].num!=yystack.l_mark[0].num;}}
break;
case 17:
#line 78 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 18:
#line 81 "token.y"
	{ 
                                if(strcmp(yystack.l_mark[-1].stringVal,"+") == 0){yyval.num=yystack.l_mark[-2].num+yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"-") == 0){yyval.num=yystack.l_mark[-2].num-yystack.l_mark[0].num;};}
break;
case 19:
#line 84 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 20:
#line 87 "token.y"
	{
                                if(strcmp(yystack.l_mark[-1].stringVal,"*") == 0){yyval.num=yystack.l_mark[-2].num*yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"/") == 0){if(yystack.l_mark[0].num==0){erroresSemanticos("Zero Division","0");};yyval.num=yystack.l_mark[-2].num/yystack.l_mark[0].num;};}
break;
case 21:
#line 90 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 22:
#line 93 "token.y"
	{yyval.num=yystack.l_mark[-1].num;}
break;
case 23:
#line 94 "token.y"
	{printf(" el VALOOOOR es:%d para el ID: %s\n",buscaValor(yystack.l_mark[0].stringVal),yystack.l_mark[0].stringVal);yyval.num=buscaValor(yystack.l_mark[0].stringVal);}
break;
case 24:
#line 95 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 25:
#line 96 "token.y"
	{;}
break;
case 28:
#line 103 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 29:
#line 104 "token.y"
	{yyval.num=1;}
break;
case 30:
#line 105 "token.y"
	{yyval.num=0;}
break;
case 31:
#line 108 "token.y"
	{if(yystack.l_mark[0].num == 0) printf("LA CONDICION ES: %d",yystack.l_mark[0].num);}
break;
case 34:
#line 111 "token.y"
	{alcance="o";}
break;
case 39:
#line 122 "token.y"
	{setEtiqueta(yystack.l_mark[0].stringVal,alcance,yylineno);}
break;
case 43:
#line 128 "token.y"
	{printf("Hacer analisis semantico\n");}
break;
#line 685 "y.tab.c"
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
