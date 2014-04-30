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
