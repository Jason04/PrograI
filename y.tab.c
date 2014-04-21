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
  
    #include <stdio.h>
    extern int yylineno;
    extern char* yytext;
    void yyerror(char *s);
#line 11 "token.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {int num; char* id;} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 34 "y.tab.c"

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
    0,    1,    1,    4,    4,    2,    6,    6,    5,    5,
    5,    7,    7,    8,    8,   10,   10,    9,    9,    9,
    9,    3,    3,   12,   12,   12,   13,   13,   14,   14,
   15,   15,   16,   17,   18,   19,   11,   11,   11,   11,
   11,   11,   11,
};
static const short yylen[] = {                            2,
    3,    2,    1,    3,    1,   11,    1,    2,    4,    3,
    1,    3,    1,    3,    1,    3,    1,    3,    1,    1,
    5,    2,    1,    1,    1,    1,    6,    8,    1,    3,
    6,    4,    3,    3,    3,    3,    1,    1,    1,    1,
    1,    1,    1,
};
static const short yydefred[] = {                         0,
    5,    0,    0,    0,    3,    0,    0,    0,    2,    4,
    0,   11,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   37,   23,   38,   39,   40,   41,   42,   43,    0,
    0,    0,    0,    0,    0,    0,    0,   29,    0,    0,
   22,    0,   33,   34,   35,   36,    0,   20,   19,    0,
    0,    0,   17,    0,   25,   26,   24,    0,    0,    0,
    0,    0,    0,    0,    9,    0,    0,    0,    0,   30,
   32,    0,    0,   18,    0,    0,   14,    0,    0,    0,
    0,    0,   31,    0,    0,    0,   21,    0,    0,   28,
    0,    0,    7,    6,    8,
};
static const short yydgoto[] = {                          3,
    4,    8,   21,    5,   22,   94,   57,   52,   53,   54,
   38,   58,   24,   39,   25,   26,   27,   28,   29,
};
static const short yysindex[] = {                      -247,
    0, -266,    0, -254,    0, -250, -226, -183,    0,    0,
 -245,    0, -225, -213, -211, -210, -262, -204, -224, -203,
 -183,    0,    0,    0,    0,    0,    0,    0,    0, -207,
 -190, -184, -175, -174, -196, -258, -183,    0, -189, -258,
    0, -180,    0,    0,    0,    0, -196,    0,    0, -188,
 -167, -264,    0, -192,    0,    0,    0, -172, -206, -196,
 -171, -166, -170, -173,    0, -196, -196, -196, -176,    0,
    0, -169, -247,    0, -168, -182,    0, -182, -224, -224,
 -249, -165,    0, -164,    0, -163,    0, -224, -160,    0,
 -221, -161,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  102,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   87,   49,    0,   26,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   69,    0,    1,    0,    0,
    0,    0,    0,  107, -252,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
   33,    0,   72,   -4,   32,    0,  -31,  -24,   47,    0,
   -6,   75,    0,  -45,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 385
static const short yytable[] = {                          9,
   16,   23,    1,   51,    5,    6,   10,   85,   47,    1,
   55,   56,   48,   49,   41,   63,   66,   35,   67,    5,
   11,   30,   17,   50,    2,   15,    5,    7,   71,    2,
   23,    2,   12,   83,   84,   92,   13,   14,   15,   16,
   37,   76,   90,   78,   93,   11,   31,   17,   13,   18,
   12,   19,   41,   20,   13,   14,   15,   16,   32,   70,
   33,   34,   36,   40,   42,   17,   43,   18,   12,   19,
   47,   20,   44,   12,   48,   49,    9,   13,   14,   15,
   16,   45,   46,   64,   60,   50,   10,   62,   17,   65,
   18,   68,   19,   75,   20,   69,   72,   74,   73,   79,
   67,    1,   87,   82,   95,   81,   27,   80,   59,   89,
   88,   91,   86,   77,   61,    0,    0,    0,    0,    0,
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
    0,    0,    0,    0,    0,    0,    0,   16,    0,    0,
    0,   16,   16,   16,   16,    0,   16,    0,   16,    0,
    0,    0,   16,   16,   16,   16,   16,    0,   16,    0,
    0,   16,   15,    0,   16,    0,   15,   15,   15,   15,
    0,   15,    0,   15,    0,    0,    0,   15,   15,   15,
   15,   15,    0,   15,    0,   13,   15,    0,   15,   13,
   13,   13,   13,    0,   13,    0,   13,    0,    0,    0,
   13,   13,   13,   13,   13,   12,   13,    0,    0,   12,
   12,   12,   12,    0,   12,    0,   12,    0,    0,    0,
   12,   12,   12,   12,   12,    0,   12,   10,   10,   10,
   10,    0,   10,    0,    0,    0,    0,    0,   10,   10,
   10,   10,   10,   27,   10,    0,    0,   27,   27,   27,
   27,    0,   27,    0,    0,    0,    0,    0,   27,    0,
   27,    0,   27,    0,   27,
};
static const short yycheck[] = {                          4,
    0,    8,  257,   35,  257,  272,  257,  257,  267,  257,
  269,  270,  271,  272,   21,   47,  281,  280,  283,  272,
  273,  267,  272,  282,  279,    0,  279,  282,   60,  279,
   37,  279,  257,   79,   80,  257,  261,  262,  263,  264,
  265,   66,   88,   68,  266,  272,  272,  272,    0,  274,
  257,  276,   59,  278,  261,  262,  263,  264,  272,  266,
  272,  272,  267,  267,  272,  272,  257,  274,    0,  276,
  267,  278,  257,  257,  271,  272,   81,  261,  262,  263,
  264,  257,  257,  272,  274,  282,    0,  268,  272,  257,
  274,  284,  276,  267,  278,  268,  268,  268,  265,  276,
  283,    0,  268,  272,  266,   73,    0,  277,   37,  273,
  275,  272,   81,   67,   40,   -1,   -1,   -1,   -1,   -1,
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
"ListaFunciones : FUNCION ID PARENTESISABIERTO ID PARENTESISCERRADO LLAVEABIERTA ListaVariables DeclaracionAsignacion RETORNAR ID FinFuncion",
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
#line 132 "token.y"
void yyerror(char *t){
  printf("Error sintactico en linea %d,Texto Encontrado %s\n",yylineno,yytext);   
}


#line 345 "y.tab.c"

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
case 36:
#line 118 "token.y"
	{printf("Hacer analisis semantico\n");}
break;
#line 555 "y.tab.c"
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
