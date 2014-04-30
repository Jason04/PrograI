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
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
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
/* Line 2053 of yacc.c  */
#line 21 "token.y"

    int num; 
    int id;
    char *stringVal;
    
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
