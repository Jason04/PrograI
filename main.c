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
extern FILE *yyin;
extern void setAlcance(char *variable, char *alcance);
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
    
    //Crear la tabla
    _nodeTable* test = newNode(1, "no", "var1", "NA", "si", "NA", "i",12);
    
    //insertar en la tabla
    test = addFront(test, 2, "no", "var2", "NA", "si", "NA", "o",23);
        
    updateIsUsed(test,"var1","i","no");
    
    //Imprimer tabla
    printTable(test);
   //*********************************************************
    
    
    
    
    yyin = fopen("prueba","r");
   
    do{
       yyparse();
      // yylex();
    }  while(!feof(yyin));
    fclose(yyin);
    
    
}
void setAlcance(char *variable, char *alcance){
    printf("se declaro un ID: %s con alcance de: %s\n",variable,alcance);
}






