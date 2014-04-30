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

/* Line 371 of yacc.c  */
#line 85 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FINL = 258,
     ESPACIONBLANCO = 259,
     COMENTARIO = 260,
     DOCUMENTACION = 261,
     ETIQUETA = 262,
     IR = 263,
     IMPRIMIR = 264,
     LEER = 265,
     LLAVEABIERTA = 266,
     LLAVECERRADA = 267,
     PARENTESISCERRADO = 268,
     TRUE = 269,
     FALSE = 270,
     RETORNAR = 271,
     MIENTRAS = 272,
     SINO = 273,
     HAGA = 274,
     ENTONCES = 275,
     SI = 276,
     DECLARAR = 277,
     ASIGNACION = 278,
     PARENTESISABIERTO = 279,
     FUNCION = 280,
     NUM = 281,
     ID = 282,
     OPERADORRELACIONAL = 283,
     OPERADORSUMREST = 284,
     OPERADORMULTDIV = 285,
     IFX = 286
   };
#endif
/* Tokens.  */
#define FINL 258
#define ESPACIONBLANCO 259
#define COMENTARIO 260
#define DOCUMENTACION 261
#define ETIQUETA 262
#define IR 263
#define IMPRIMIR 264
#define LEER 265
#define LLAVEABIERTA 266
#define LLAVECERRADA 267
#define PARENTESISCERRADO 268
#define TRUE 269
#define FALSE 270
#define RETORNAR 271
#define MIENTRAS 272
#define SINO 273
#define HAGA 274
#define ENTONCES 275
#define SI 276
#define DECLARAR 277
#define ASIGNACION 278
#define PARENTESISABIERTO 279
#define FUNCION 280
#define NUM 281
#define ID 282
#define OPERADORRELACIONAL 283
#define OPERADORSUMREST 284
#define OPERADORMULTDIV 285
#define IFX 286



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 21 "token.y"

    int num; 
    int id;
    char *stringVal;
    


/* Line 387 of yacc.c  */
#line 198 "y.tab.c"
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 48 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 226 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   137

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNRULES -- Number of states.  */
#define YYNSTATES  113

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    14,    18,    21,    23,
      24,    25,    39,    41,    44,    49,    53,    55,    59,    61,
      64,    68,    70,    74,    76,    80,    82,    84,    85,    92,
      95,    97,    99,   101,   103,   104,   113,   116,   117,   119,
     123,   124,   132,   137,   138,   143,   144,   149,   150,   155,
     156,   161,   163,   165,   167,   169,   171,   173,   175
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      33,     0,    -1,    33,    34,    36,    46,    -1,    -1,    34,
      35,    -1,    35,    -1,    22,    27,     3,    -1,     1,     3,
      -1,     3,    -1,    -1,    -1,    25,    27,    24,    27,    37,
      13,    11,    38,    34,    40,    16,    27,    39,    -1,    12,
      -1,     3,    12,    -1,    27,    23,    41,     3,    -1,    27,
      23,    41,    -1,     3,    -1,    42,    28,    42,    -1,    42,
      -1,     1,     3,    -1,    42,    29,    44,    -1,    43,    -1,
      43,    30,    42,    -1,    44,    -1,    24,    41,    13,    -1,
      27,    -1,    26,    -1,    -1,    25,    27,    45,    24,    27,
      13,    -1,    46,    62,    -1,    62,    -1,    41,    -1,    14,
      -1,    15,    -1,    -1,    21,    24,    47,    49,    13,    20,
      51,    50,    -1,    18,    51,    -1,    -1,    62,    -1,    11,
      46,    12,    -1,    -1,    17,    24,    47,    53,    13,    19,
      51,    -1,    19,    51,    17,    41,    -1,    -1,     7,    27,
      55,     3,    -1,    -1,     8,    27,    57,     3,    -1,    -1,
       9,    27,    59,     3,    -1,    -1,    10,    27,    61,     3,
      -1,    40,    -1,    48,    -1,    52,    -1,    54,    -1,    56,
      -1,    58,    -1,    60,    -1,     1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    52,    56,    57,    59,    60,    61,    63,
      63,    63,    67,    67,    69,    70,    71,    73,    80,    81,
      84,    87,    90,    93,    96,    97,    98,    99,    99,   102,
     103,   106,   107,   108,   112,   112,   115,   116,   119,   120,
     123,   123,   124,   127,   127,   129,   129,   132,   132,   134,
     134,   136,   137,   138,   139,   140,   141,   142,   143
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FINL", "ESPACIONBLANCO", "COMENTARIO",
  "DOCUMENTACION", "ETIQUETA", "IR", "IMPRIMIR", "LEER", "LLAVEABIERTA",
  "LLAVECERRADA", "PARENTESISCERRADO", "TRUE", "FALSE", "RETORNAR",
  "MIENTRAS", "SINO", "HAGA", "ENTONCES", "SI", "DECLARAR", "ASIGNACION",
  "PARENTESISABIERTO", "FUNCION", "NUM", "ID", "OPERADORRELACIONAL",
  "OPERADORSUMREST", "OPERADORMULTDIV", "IFX", "$accept", "Programa",
  "ListaVariables", "DeclaracionVariable", "ListaFunciones", "$@1", "$@2",
  "FinFuncion", "DeclaracionAsignacion", "Expresion", "ExpresionSuma",
  "ExpresionMult", "Termino", "$@3", "ListaDeclaraciones",
  "ExpresionCondicion", "DeclaracionSeleccion", "$@4", "Sisolo",
  "ListaDeclaracionesCondicionadas", "DeclaracionIteracion", "$@5",
  "DeclaracionEtiqueta", "$@6", "DeclaracionSaltoEtiqueta", "$@7",
  "DeclaracionImprimir", "$@8", "DeclaracionLeerCaracterDePantalla", "$@9",
  "Declaracion", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    33,    34,    34,    35,    35,    35,    37,
      38,    36,    39,    39,    40,    40,    40,    41,    41,    41,
      42,    42,    43,    43,    44,    44,    44,    45,    44,    46,
      46,    47,    47,    47,    49,    48,    50,    50,    51,    51,
      53,    52,    52,    55,    54,    57,    56,    59,    58,    61,
      60,    62,    62,    62,    62,    62,    62,    62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     1,     3,     2,     1,     0,
       0,    13,     1,     2,     4,     3,     1,     3,     1,     2,
       3,     1,     3,     1,     3,     1,     1,     0,     6,     2,
       1,     1,     1,     1,     0,     8,     2,     0,     1,     3,
       0,     7,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     1,     1,     1,     1,     1,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,     8,     0,     0,     5,     7,     0,
       0,     4,     0,     6,     0,     0,    16,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,    52,    53,    54,
      55,    56,    57,    30,     0,    58,    43,    45,    47,    49,
       0,     0,     0,    38,     0,     0,    29,     9,     0,     0,
       0,     0,     0,    32,    33,     0,     0,    26,    25,    31,
      18,    21,    23,    40,     0,     0,    34,    15,     0,    44,
      46,    48,    50,    19,     0,    27,     0,     0,     0,     0,
      39,    42,     0,    14,     0,    24,     0,    17,    20,    22,
       0,     0,    10,     0,     0,     0,     0,     0,    41,    37,
       0,    28,     0,    35,     8,     0,    36,     0,     0,     0,
      12,    11,    13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     6,     7,    12,    68,    96,   111,    25,    59,
      60,    61,    62,    86,    26,    63,    27,    82,   103,    42,
      28,    79,    29,    48,    30,    49,    31,    50,    32,    51,
      43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -73
static const yytype_int8 yypact[] =
{
     -73,    90,   -73,     5,   -73,   -13,    77,   -73,   -73,    14,
      -9,   -73,    62,   -73,    -4,    19,   -73,    17,    22,    31,
      33,    43,    24,    49,    23,   -73,     2,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,    55,   -73,   -73,   -73,   -73,   -73,
      61,    62,    60,   -73,    61,    12,   -73,   -73,    81,    89,
      95,   100,   101,   -73,   -73,    12,    79,   -73,   -73,   -73,
      68,    80,   -73,   -73,    47,    12,   -73,   104,    96,   -73,
     -73,   -73,   -73,   -73,    98,   -73,    92,    92,    92,   107,
     -73,   -73,   108,   -73,   102,   -73,    99,    85,   -73,   -73,
     103,   105,   -73,    97,    24,    24,    39,   113,   -73,   109,
      25,   -73,    24,   -73,   112,   114,   -73,   106,     4,   117,
     -73,   -73,   -73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,    35,    -6,   -73,   -73,   -73,   -73,    32,    50,
     -72,   -73,    57,   -73,    94,    93,   -73,   -73,   -73,     6,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -11
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -17
static const yytype_int8 yytable[] =
{
      11,    33,    -2,    15,    87,    16,    89,   109,     8,    17,
      18,    19,    20,    52,     9,    46,   110,    13,    14,    21,
      34,    22,    35,    23,    -2,    15,     3,    16,   104,    24,
      33,    17,    18,    19,    20,    41,    55,    56,    57,    58,
       3,    21,     4,    22,    36,    23,    45,     5,    15,    37,
      16,    24,    24,    46,    17,    18,    19,    20,    38,    80,
      39,     5,    52,    15,    21,    16,    22,    40,    23,    17,
      18,    19,    20,    44,    24,    53,    54,    65,     3,    21,
       4,    22,    47,    23,    69,    55,    56,    57,    58,    24,
       2,     3,    70,     4,    11,    67,    76,    77,    71,     5,
      98,    99,    10,    72,    73,    74,    75,    83,   106,    84,
      78,    85,     5,    92,    77,    81,    55,    56,    57,    58,
      90,    91,    94,    93,    97,    95,   101,   102,   -16,   112,
     107,   100,   105,   108,    88,    64,     0,    66
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-73)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       6,    12,     0,     1,    76,     3,    78,     3,     3,     7,
       8,     9,    10,     1,    27,    26,    12,     3,    27,    17,
      24,    19,     3,    21,    22,     1,     1,     3,     3,    27,
      41,     7,     8,     9,    10,    11,    24,    25,    26,    27,
       1,    17,     3,    19,    27,    21,    23,    22,     1,    27,
       3,    27,    27,    64,     7,     8,     9,    10,    27,    12,
      27,    22,     1,     1,    17,     3,    19,    24,    21,     7,
       8,     9,    10,    24,    27,    14,    15,    17,     1,    17,
       3,    19,    27,    21,     3,    24,    25,    26,    27,    27,
       0,     1,     3,     3,   100,    45,    28,    29,     3,    22,
      94,    95,    25,     3,     3,    55,    27,     3,   102,    13,
      30,    13,    22,    11,    29,    65,    24,    25,    26,    27,
      13,    13,    19,    24,    27,    20,    13,    18,    16,    12,
      16,    96,   100,    27,    77,    41,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,     0,     1,     3,    22,    34,    35,     3,    27,
      25,    35,    36,     3,    27,     1,     3,     7,     8,     9,
      10,    17,    19,    21,    27,    40,    46,    48,    52,    54,
      56,    58,    60,    62,    24,     3,    27,    27,    27,    27,
      24,    11,    51,    62,    24,    23,    62,    27,    55,    57,
      59,    61,     1,    14,    15,    24,    25,    26,    27,    41,
      42,    43,    44,    47,    46,    17,    47,    41,    37,     3,
       3,     3,     3,     3,    41,    27,    28,    29,    30,    53,
      12,    41,    49,     3,    13,    13,    45,    42,    44,    42,
      13,    13,    11,    24,    19,    20,    38,    27,    51,    51,
      34,    13,    18,    50,     3,    40,    51,    16,    27,     3,
      12,    39,    12
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
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

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
/* Line 1787 of yacc.c  */
#line 59 "token.y"
    {setVariable((yyvsp[(2) - (3)].stringVal),alcance);}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 60 "token.y"
    {yyerrok;}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 63 "token.y"
    {setParametro((yyvsp[(4) - (4)].stringVal),alcance,(yyvsp[(2) - (4)].stringVal));setFuncion((yyvsp[(4) - (4)].stringVal),alcance,(yyvsp[(2) - (4)].stringVal));}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 63 "token.y"
    {alcance="i";}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 64 "token.y"
    {alcance="o";}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 69 "token.y"
    {if(fueDeclarada((yyvsp[(1) - (4)].stringVal),alcance)==0){erroresSemanticos("la variable no existe",(yyvsp[(1) - (4)].stringVal));};if(fueDeclarada((yyvsp[(1) - (4)].stringVal),alcance)==1){asignarValor((yyvsp[(1) - (4)].stringVal),alcance,(yyvsp[(3) - (4)].num));};}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 70 "token.y"
    {if(fueDeclarada((yyvsp[(1) - (3)].stringVal),alcance)==0){erroresSemanticos("la variable no existe",(yyvsp[(1) - (3)].stringVal));};if(fueDeclarada((yyvsp[(1) - (3)].stringVal),alcance)==1){asignarValor((yyvsp[(1) - (3)].stringVal),alcance,(yyvsp[(3) - (3)].num));};}
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 71 "token.y"
    {;}
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 73 "token.y"
    {
                                if(strcmp((yyvsp[(2) - (3)].stringVal),">=") == 0){(yyval.num)=(yyvsp[(1) - (3)].num)>=(yyvsp[(3) - (3)].num);};
                                if(strcmp((yyvsp[(2) - (3)].stringVal),"==") == 0){(yyval.num)=(yyvsp[(1) - (3)].num)==(yyvsp[(3) - (3)].num);};
                                if(strcmp((yyvsp[(2) - (3)].stringVal),"<=") == 0){(yyval.num)=(yyvsp[(1) - (3)].num)<=(yyvsp[(3) - (3)].num);};
                                if(strcmp((yyvsp[(2) - (3)].stringVal),">") == 0){(yyval.num)=(yyvsp[(1) - (3)].num)>(yyvsp[(3) - (3)].num);};
                                if(strcmp((yyvsp[(2) - (3)].stringVal),"<") == 0){(yyval.num)=(yyvsp[(1) - (3)].num)<(yyvsp[(3) - (3)].num);};
                                if(strcmp((yyvsp[(2) - (3)].stringVal),"!=") == 0){(yyval.num)=(yyvsp[(1) - (3)].num)!=(yyvsp[(3) - (3)].num);}}
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 80 "token.y"
    {(yyval.num)=(yyvsp[(1) - (1)].num);}
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 81 "token.y"
    {yyerrok;}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 84 "token.y"
    { 
                                if(strcmp((yyvsp[(2) - (3)].stringVal),"+") == 0){(yyval.num)=(yyvsp[(1) - (3)].num)+(yyvsp[(3) - (3)].num);};
                                if(strcmp((yyvsp[(2) - (3)].stringVal),"-") == 0){(yyval.num)=(yyvsp[(1) - (3)].num)-(yyvsp[(3) - (3)].num);};}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 87 "token.y"
    {(yyval.num)=(yyvsp[(1) - (1)].num);}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 90 "token.y"
    {
                                if(strcmp((yyvsp[(2) - (3)].stringVal),"*") == 0){(yyval.num)=(yyvsp[(1) - (3)].num)*(yyvsp[(3) - (3)].num);};
                                if(strcmp((yyvsp[(2) - (3)].stringVal),"/") == 0){if((yyvsp[(3) - (3)].num)==0){erroresSemanticos("Zero Division","0");};(yyval.num)=(yyvsp[(1) - (3)].num)/(yyvsp[(3) - (3)].num);};}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 93 "token.y"
    {(yyval.num)=(yyvsp[(1) - (1)].num);}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 96 "token.y"
    {(yyval.num)=(yyvsp[(2) - (3)].num);}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 97 "token.y"
    {(yyval.num)=buscaValor((yyvsp[(1) - (1)].stringVal));}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 98 "token.y"
    {(yyval.num)=(yyvsp[(1) - (1)].num);}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 99 "token.y"
    {if(fueDeclarada((yyvsp[(2) - (2)].stringVal),alcance)==0){erroresSemanticos("la funcion no existe",(yyvsp[(2) - (2)].stringVal));};}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 99 "token.y"
    {;}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 106 "token.y"
    {(yyval.num)=(yyvsp[(1) - (1)].num);}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 107 "token.y"
    {(yyval.num)=1;}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 108 "token.y"
    {(yyval.num)=0;}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 112 "token.y"
    {if((yyvsp[(3) - (3)].num) == 0)errorSaltoCondicion("falsa","if");}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 116 "token.y"
    {alcance="o";}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 123 "token.y"
    {if((yyvsp[(3) - (3)].num) == 0) errorSaltoCondicion("falsa","mientras");}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 127 "token.y"
    {setEtiqueta((yyvsp[(2) - (2)].stringVal),alcance);}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 129 "token.y"
    {if(fueDeclarada((yyvsp[(2) - (2)].stringVal),alcance)==0){erroresSemanticos("la etiqueta no existe",(yyvsp[(2) - (2)].stringVal));};}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 132 "token.y"
    {if(fueDeclarada((yyvsp[(2) - (2)].stringVal),alcance)==0){erroresSemanticos("la variable no existe",(yyvsp[(2) - (2)].stringVal));};}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 134 "token.y"
    {if(fueDeclarada((yyvsp[(2) - (2)].stringVal),alcance)==0){erroresSemanticos("la variable no existe",(yyvsp[(2) - (2)].stringVal));};}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 143 "token.y"
    {yyerrok;}
    break;


/* Line 1787 of yacc.c  */
#line 1717 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 148 "token.y"

void yyerror(char *t){
  printf("Error sintactico en linea %d,Texto Encontrado %s\n",yylineno,yytext);   
}
void erroresSemanticos(char *tipoerror, char *texto){
    printf("Error semantico de tipo %s en linea %d,con el Texto Encontrado %s\n",tipoerror,yylineno,texto);
}
void errorSaltoCondicion(char *condicion,char *operador){
    printf("Error semantico por condicion: %s en el: %s en linea: %d\n",condicion,operador,yylineno);
}
