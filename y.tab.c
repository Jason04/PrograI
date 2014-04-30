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
    extern void setAlcance(char *variable, char *alcance);
    void yyerror(char *s);
    
#line 13 "token.y"
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
#line 41 "y.tab.c"

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
#define PARENTESISABIERTO 267
#define PARENTESISCERRADO 268
#define TRUE 269
#define FALSE 270
#define NUM 271
#define ID 272
#define RETORNAR 273
#define MIENTRAS 274
#define SINO 275
#define HAGA 276
#define ENTONCES 277
#define SI 278
#define DECLARAR 279
#define ASIGNACION 280
#define OPERADORRELACIONAL 281
#define FUNCION 282
#define OPERADORSUMREST 283
#define OPERADORMULTDIV 284
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    6,    6,    9,    9,   10,    7,   11,   11,    5,
    5,    5,    4,    4,    1,    1,    2,    2,    3,    3,
    3,    3,    8,    8,   13,   13,   13,   14,   14,   15,
   15,   16,   16,   17,   18,   19,   20,   12,   12,   12,
   12,   12,   12,   12,
};
static const short yylen[] = {                            2,
    3,    2,    1,    3,    1,    0,   12,    1,    2,    4,
    3,    1,    3,    1,    3,    1,    3,    1,    3,    1,
    1,    5,    2,    1,    1,    1,    1,    6,    8,    1,
    3,    6,    4,    3,    3,    3,    3,    1,    1,    1,
    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
    5,    0,    0,    0,    3,    0,    0,    0,    2,    4,
    0,   12,    0,    0,    0,    0,    0,    0,    0,    0,
   38,    0,   24,   39,   40,   41,   42,   43,   44,    0,
    0,    0,    0,    0,    0,    0,    0,   30,    0,    0,
   23,    0,   34,   35,   36,   37,    0,   21,   20,    0,
    0,    0,   18,    0,   26,   27,   25,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   10,    0,   31,
   33,    0,    6,   19,    0,    0,   15,    0,    0,    0,
    0,    0,   32,    0,    0,   22,    0,    0,    0,   29,
    0,    0,    0,    8,    7,    9,
};
static const short yydgoto[] = {                          3,
   51,   52,   53,   57,   21,    4,    8,   22,    5,   81,
   95,   38,   58,   24,   39,   25,   26,   27,   28,   29,
};
static const short yysindex[] = {                      -247,
    0, -261,    0, -254,    0, -233, -237, -186,    0,    0,
 -231,    0, -229, -227, -226, -225, -215, -200, -224, -194,
    0, -186,    0,    0,    0,    0,    0,    0,    0, -193,
 -177, -175, -174, -173, -263, -208, -186,    0, -189, -208,
    0, -179,    0,    0,    0,    0, -263,    0,    0, -181,
 -239, -191,    0, -163,    0,    0,    0, -172, -206, -263,
 -171, -170, -169, -167, -263, -263, -263,    0, -178,    0,
    0, -176,    0,    0, -168, -180,    0, -180, -224, -224,
 -247, -166,    0, -165, -245,    0, -224,    0, -164,    0,
 -161, -251, -160,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  105,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   49,   26,    0,   87,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   69,    0,    1,    0,    0,
    0,    0,    0,  107,    0,    0,    0, -250,    0,    0,
    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  -47,    0,   42,  -30,   27,   32,    0,   77,   -4,    0,
    0,   -6,   75,    0,  -66,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 385
static const short yytable[] = {                          9,
   17,   23,    1,   47,   54,   93,    5,   48,   49,    1,
    6,   88,   83,   84,   94,   41,   63,   76,   50,   78,
   90,    5,   12,   10,    2,   16,   17,    7,    5,   71,
   23,    2,   12,    2,   11,   30,   13,   14,   15,   16,
   37,   65,   31,   66,   32,   33,   34,   17,   14,   18,
   12,   19,   41,   20,   13,   14,   15,   16,   47,   70,
   55,   56,   48,   49,   35,   17,   36,   18,   13,   19,
   12,   20,   40,   50,   13,   14,   15,   16,   42,   43,
    9,   44,   45,   46,   60,   17,   11,   18,   62,   19,
   64,   20,   67,   68,   73,   69,   72,   79,   74,   75,
   80,   86,   66,   82,    1,   96,   28,   77,   91,   87,
   92,   89,   85,   59,   61,    0,    0,    0,    0,    0,
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
    0,    0,    0,    0,    0,    0,    0,   17,    0,    0,
    0,   17,   17,   17,   17,    0,   17,    0,   17,    0,
    0,    0,   17,   17,   17,   17,   17,    0,   17,    0,
    0,   17,   16,    0,   17,    0,   16,   16,   16,   16,
    0,   16,    0,   16,    0,    0,    0,   16,   16,   16,
   16,   16,    0,   16,    0,   14,   16,    0,   16,   14,
   14,   14,   14,    0,   14,    0,   14,    0,    0,    0,
   14,   14,   14,   14,   14,   13,   14,    0,    0,   13,
   13,   13,   13,    0,   13,    0,   13,    0,    0,    0,
   13,   13,   13,   13,   13,    0,   13,   11,   11,   11,
   11,    0,   11,    0,    0,    0,    0,    0,   11,   11,
   11,   11,   11,   28,   11,    0,    0,   28,   28,   28,
   28,    0,   28,    0,    0,    0,    0,    0,   28,    0,
   28,    0,   28,    0,   28,
};
static const short yycheck[] = {                          4,
    0,    8,  257,  267,   35,  257,  257,  271,  272,  257,
  272,  257,   79,   80,  266,   22,   47,   65,  282,   67,
   87,  272,  273,  257,  279,    0,  272,  282,  279,   60,
   37,  279,  257,  279,  272,  267,  261,  262,  263,  264,
  265,  281,  272,  283,  272,  272,  272,  272,    0,  274,
  257,  276,   59,  278,  261,  262,  263,  264,  267,  266,
  269,  270,  271,  272,  280,  272,  267,  274,    0,  276,
  257,  278,  267,  282,  261,  262,  263,  264,  272,  257,
   85,  257,  257,  257,  274,  272,    0,  274,  268,  276,
  272,  278,  284,  257,  265,  268,  268,  276,  268,  267,
  277,  268,  283,  272,    0,  266,    0,   66,  273,  275,
  272,   85,   81,   37,   40,   -1,   -1,   -1,   -1,   -1,
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
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,   -1,   -1,
   -1,  261,  262,  263,  264,   -1,  266,   -1,  268,   -1,
   -1,   -1,  272,  273,  274,  275,  276,   -1,  278,   -1,
   -1,  281,  257,   -1,  284,   -1,  261,  262,  263,  264,
   -1,  266,   -1,  268,   -1,   -1,   -1,  272,  273,  274,
  275,  276,   -1,  278,   -1,  257,  281,   -1,  283,  261,
  262,  263,  264,   -1,  266,   -1,  268,   -1,   -1,   -1,
  272,  273,  274,  275,  276,  257,  278,   -1,   -1,  261,
  262,  263,  264,   -1,  266,   -1,  268,   -1,   -1,   -1,
  272,  273,  274,  275,  276,   -1,  278,  261,  262,  263,
  264,   -1,  266,   -1,   -1,   -1,   -1,   -1,  272,  273,
  274,  275,  276,  257,  278,   -1,   -1,  261,  262,  263,
  264,   -1,  266,   -1,   -1,   -1,   -1,   -1,  272,   -1,
  274,   -1,  276,   -1,  278,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 284
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
"LLAVECERRADA","PARENTESISABIERTO","PARENTESISCERRADO","TRUE","FALSE","NUM",
"ID","RETORNAR","MIENTRAS","SINO","HAGA","ENTONCES","SI","DECLARAR",
"ASIGNACION","OPERADORRELACIONAL","FUNCION","OPERADORSUMREST","OPERADORMULTDIV",
};
static const char *yyrule[] = {
"$accept : Programa",
"Programa : ListaVariables ListaFunciones ListaDeclaraciones",
"ListaVariables : ListaVariables DeclaracionVariable",
"ListaVariables : DeclaracionVariable",
"DeclaracionVariable : DECLARAR ID FINL",
"DeclaracionVariable : FINL",
"$$1 :",
"ListaFunciones : FUNCION ID PARENTESISABIERTO ID PARENTESISCERRADO LLAVEABIERTA $$1 ListaVariables DeclaracionAsignacion RETORNAR ID FinFuncion",
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
"DeclaracionSeleccion : SI PARENTESISABIERTO ExpresionCondicion PARENTESISCERRADO ENTONCES ListaDeclaracionesCondicionadas",
"DeclaracionSeleccion : SI PARENTESISABIERTO ExpresionCondicion PARENTESISCERRADO ENTONCES ListaDeclaracionesCondicionadas SINO ListaDeclaracionesCondicionadas",
"ListaDeclaracionesCondicionadas : Declaracion",
"ListaDeclaracionesCondicionadas : LLAVEABIERTA ListaDeclaraciones LLAVECERRADA",
"DeclaracionIteracion : MIENTRAS PARENTESISABIERTO ExpresionCondicion PARENTESISCERRADO HAGA ListaDeclaracionesCondicionadas",
"DeclaracionIteracion : HAGA ListaDeclaracionesCondicionadas MIENTRAS Expresion",
"DeclaracionEtiqueta : ETIQUETA ID FINL",
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
#line 126 "token.y"
void yyerror(char *t){
  printf("Error sintactico en linea %d,Texto Encontrado %s\n",yylineno,yytext);   
}


#line 353 "y.tab.c"

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
case 4:
#line 47 "token.y"
	{setAlcance(yystack.l_mark[-1].stringVal,alcance);}
break;
case 6:
#line 50 "token.y"
	{alcance="i";}
break;
case 7:
#line 51 "token.y"
	{alcance="o";}
break;
case 10:
#line 55 "token.y"
	{printf("el valor de la expresion: %d para el ID: %s\n",yystack.l_mark[-1].num,yystack.l_mark[-3].stringVal);}
break;
case 11:
#line 56 "token.y"
	{printf("el valor de la expresion: %d para el ID: %s\n",yystack.l_mark[0].num,yystack.l_mark[-2].stringVal);}
break;
case 12:
#line 57 "token.y"
	{;}
break;
case 13:
#line 60 "token.y"
	{
                                if(strcmp(yystack.l_mark[-1].stringVal,">=") == 0){yyval.num=yystack.l_mark[-2].num>=yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"==") == 0){yyval.num=yystack.l_mark[-2].num==yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"<=") == 0){yyval.num=yystack.l_mark[-2].num<=yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,">") == 0){yyval.num=yystack.l_mark[-2].num>yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"<") == 0){yyval.num=yystack.l_mark[-2].num<yystack.l_mark[0].num;};
                                if(strcmp(yystack.l_mark[-1].stringVal,"!=") == 0){yyval.num=yystack.l_mark[-2].num!=yystack.l_mark[0].num;}}
break;
case 14:
#line 67 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 15:
#line 70 "token.y"
	{yyval.num=yystack.l_mark[-2].num+yystack.l_mark[0].num;}
break;
case 16:
#line 71 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 17:
#line 74 "token.y"
	{yyval.num=yystack.l_mark[-2].num*yystack.l_mark[0].num;}
break;
case 18:
#line 75 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 19:
#line 78 "token.y"
	{yyval.num=yystack.l_mark[-1].num;}
break;
case 20:
#line 79 "token.y"
	{yyval.num=yystack.l_mark[0].stringVal;}
break;
case 21:
#line 80 "token.y"
	{yyval.num=yystack.l_mark[0].num;}
break;
case 22:
#line 81 "token.y"
	{;}
break;
case 37:
#line 112 "token.y"
	{printf("Hacer analisis semantico\n");}
break;
#line 633 "y.tab.c"
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
