/* 
 * File:   main.c
 * Author: oscar
 *
 * Created on April 2, 2014, 6:46 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
#include <string.h>
#include "Tabla.h"
extern char *alcance="o";
extern int yyparse();
extern int yylex();
_nodeTable* current;
extern FILE *yyin;
extern void setVariable(char *variable, char *alcance, int linea);
extern void setParametro(char *variable, char *alcance, int linea, char* funcion);
main()
{
    /*
    printf("Escriba algo seguido de enter. Digite 'pare' or 'PARE' para terminar.\n");
    printf("\n");*/
    // Start the parser
/* Aqui se compilan el analizador lexico(lex) y el analizador sintactico y se 
   unen para crear un ejecutable bas.exe */
/* yyparse() corre el compilador */
    
    /*yyleng();
    yylex();
    return 0;*/
    //******************************tabla********************
    /**
    //Crear la tabla
    _nodeTable* test = newNode(1, "no", "var1", "NA", "si", "NA", "i",12);
    
    //insertar en la tabla
    test = addFront(test, 2, "no", "var2", "NA", "si", "NA", "o",23);
        
    updateIsUsed(test,"var1","i","no");**/
    
    
    
    
    
    
    yyin = fopen("prueba","r");
   
    do{
       yyparse();
      // yylex();
    }  while(!feof(yyin));
    fclose(yyin);
    
    //Imprimer tabla
    printTable(current);
   //*********************************************************
    
}
void setVariable(char *variable, char *alcance, int linea){
    if(current==NULL){
    current=newNode(linea, "no", variable, "NA", "no", "NA", alcance,12);}
    else{current=addFront(current,linea, "no", variable, "NA", "no", "NA", alcance,-1);}
    printf("se declaro un ID: %s con alcance de: %s\n",variable,alcance);
}
void setParametro(char *variable, char *alcance, int linea, char* funcion){
    if(current==NULL){
    current=newNode(linea, "si", variable, funcion, "si", "NA", alcance,12);}
    else{current=addFront(current,linea, "si", variable, funcion, "si", "NA", alcance,-1);}
    printf("se declaro un ID: %s con alcance de: %s\n",variable,alcance);
}






