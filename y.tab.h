/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

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
     PARENTESISABIERTO = 268,
     PARENTESISCERRADO = 269,
     TRUE = 270,
     FALSE = 271,
     NUM = 272,
     ID = 273,
     RETORNAR = 274,
     MIENTRAS = 275,
     SINO = 276,
     HAGA = 277,
     ENTONCES = 278,
     SI = 279,
     DECLARAR = 280,
     ASIGNACION = 281,
     OPERADORRELACIONAL = 282,
     FUNCION = 283,
     OPERADORSUMREST = 284,
     OPERADORMULTDIV = 285
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
#define PARENTESISABIERTO 268
#define PARENTESISCERRADO 269
#define TRUE 270
#define FALSE 271
#define NUM 272
#define ID 273
#define RETORNAR 274
#define MIENTRAS 275
#define SINO 276
#define HAGA 277
#define ENTONCES 278
#define SI 279
#define DECLARAR 280
#define ASIGNACION 281
#define OPERADORRELACIONAL 282
#define FUNCION 283
#define OPERADORSUMREST 284
#define OPERADORMULTDIV 285



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 14 "token.y"

    int num; 
    int id;
    char *stringVal;
    


/* Line 2053 of yacc.c  */
#line 125 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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
