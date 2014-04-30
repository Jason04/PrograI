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
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
    int num; 
    int id;
    char *stringVal;
    
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
