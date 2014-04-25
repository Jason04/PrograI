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
struct nodeTable* current;
extern FILE *yyin;
extern int yylineno;
extern void setVariable(char *variable, char *alcance, int linea);
extern void setParametro(char *variable, char *alcance, int linea, char* funcion);
extern void setFuncion(char *variable, char *alcance, int linea, char* funcion);
extern int buscaValor(char *variable);
extern void asignarValor(char *variable,char *alcance,int valor);
extern void setEtiqueta(char *variable, char *alcance, int linea);
extern void marcarUtilizada(char *variable,char *alcance);
extern int fueDeclarada(char *variable, char *alcance);
main()
{
    
//    current = newNode(7,"no","prueba","funcion","no","dedeede","o",-1);
//    
//    asignarValor("prueba","o",34);
//    printTable(current);
//    char *a= "aaa";
//    char* aa="aaa";
//    printf("%d",(strcmp(a, aa) == 0) && 1 == 1);
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
    nodeTable* test = newNode(1, "no", "var1", "NA", "si", "NA", "i",12);
    
    //insertar en la tabla
    test = addFront(test, 2, "no", "var2", "NA", "si", "NA", "o",23);
    test = addFront(test, 2, "no", "var3", "NA", "si", "NA", "o",23);
            
    updateIsUsed(test,"var1","i","no");
    
    //Imprimer tabla
    printTable(test);**/
    
//    //obtener valor
//    printf("%d",getElementValue(test,"var1"));
//    
//    //obtener linea
//    printf("%d",getElementLine(test,"var1"));
//    
    //obtener atributo
    /**char atributo =  'A';
    printf("%s",getElementAtrib(test,"var1",atributo));**/
    
   //*********************************************************
    
    
    
    yyin = fopen("prueba","r");
   
    do{
       yyparse();
      // yylex();
    }  while(!feof(yyin));
    fclose(yyin);
    
//    //Imprimer tabla
    
    printTable(current);
   //*********************************************************
    
}
void setVariable(char *variable, char *alcance, int linea){
    if(current==NULL){
        current=newNode(linea, "no", variable, "NA", "no", "NA", alcance,-1);}
    else{current=addFront(current,linea, "no", variable, "NA", "no", "NA", alcance,-1);}
    //printTable(current);
    //printf("se declaro un ID: %s con alcance de: %s en la linea: %d\n",variable,alcance,yylineno);
}
void setParametro(char *variable, char *alcance, int linea, char* funcion){
    if(current==NULL){
    current=newNode(linea, "si", variable, funcion, "si", "NA", alcance,-1);}
    else{current=addFront(current,linea, "si", variable, funcion, "si", "NA", alcance,-1);}
    //printTable(current);
    //printf("se declaro un ID: %s con alcance de: %s\n",variable,alcance);
}
void setFuncion(char *variable, char *alcance, int linea, char* funcion){
    current=addFront(current,linea, "no", funcion, "NA", "no", variable, alcance,-1);
    //printTable(current);
    //printf("se declaro un ID: %s con alcance de: %s\n",variable,alcance);
}
void setEtiqueta(char *variable, char *alcance, int linea){
    current=addFront(current,linea, "no", variable, "NA", "no", "NA", alcance,-1);
    //printTable(current);
    //printf("se declaro una etiqueta: %s con alcance de: %s\n",variable,alcance);
}
int buscaValor(char *variable){
    //printf("el valor que encontro fue: %d para la variable:%s",getElementValue(current,variable),variable);
    
    return getElementValue(current,variable);
}
void asignarValor(char *variable,char *alcance,int valor){
    //printf("la variable es: %s con el valor: %d y el alcance: %s\n",variable,valor,alcance);
    updateValue(current,variable,alcance,valor);
    //printTable(current);
    
}
void marcarUtilizada(char *variable,char *alcance){
    updateIsUsed(current,variable,alcance,"si");
    //printTable(current);
}
int fueDeclarada(char *variable, char *alcance){
    return estaDeclarada(current,variable,alcance);
}






