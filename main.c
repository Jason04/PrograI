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
#include "lista.h"
extern char *alcance = "o";
extern int yyparse();
extern int yylex();
struct nodeTable* current;
struct nodeTable* manejoErrores;
struct nodeS* comentario;
extern FILE *yyin;

extern void setAlcance(char *variable, char *alcance);



extern int yylineno;
extern void setVariable(char *variable, char *alcance);
extern void setParametro(char *variable, char *alcance,char* funcion);
extern void setFuncion(char *variable, char *alcance,char* funcion);
extern int buscaValor(char *variable);
extern void asignarValor(char *variable,char *alcance,int valor);
extern void setEtiqueta(char *variable, char *alcance);
extern void marcarUtilizada(char *variable,char *alcance);
extern int fueDeclarada(char *variable, char *alcance);
extern void setComentario(char *comment);
extern void SetError(char *tipo, char *descripcion, char *textoError);
main()
{




    //**********************insertar en la lista******************
//    char *token = "comentario"
//    
//    const char *copy = token;
//    
//    char *copyAux = NULL;
//    
//    copyAux = strdup(copy);
    
    //mandar copy aux a insertar
    
    

    //*********************************************************

        yyin = fopen("prueba","r");
       
        do{
           yyparse();
          // yylex();
        }  while(!feof(yyin));
        fclose(yyin);

    //    escribirHTML(a);

    escribirTablaTXT(current);
    //*********************************************************
   // printf("%d",strlen("                "));


    //    yyin = fopen("prueba", "r");
    //
    //    do {
    //        yyparse();
    //        // yylex();
    //    } while (!feof(yyin));
    //    fclose(yyin);
    //
    //    //    //Imprimer tabla
    //
    //    printTable(current);
    //*********************************************************
    escribirHTML(comentario);
 
    escribirErroresTXT(manejoErrores);
   //*********************************************************
    printTable(manejoErrores);
//este es mio
}

void setComentario(char *comment){
   // printf("Soy comentario %s\n",comment);
    
     
    
    const char *copy = comment;
    
    char *copyAux = NULL;
    
    copyAux = strdup(copy);
    
    
    
    if(comentario==NULL){
        comentario = newNode1(copyAux);}
    else{comentario = addFront1(comentario, copyAux);}
    
}
void SetError(char *tipo, char *descripcion,char *textoError){
    const char *copy = textoError;
    char *texto = NULL;
    texto = strdup(copy);
    if(manejoErrores==NULL){
    manejoErrores= newNode(yylineno,tipo,descripcion,texto,"No","No","No",-1);}
    else{
        manejoErrores= addFront(manejoErrores,yylineno,tipo,descripcion,texto,"No","No","No",-1);
    }
}
void setVariable(char *variable, char *alcance){
    if(current==NULL){
        current=newNode(yylineno, "no", variable, "NA", "no", "Es variable", alcance,-1);}
    else{current=addFront(current,yylineno, "no", variable, "NA", "no", "Es variable", alcance,-1);}

    //printTable(current);
    //printf("se declaro un ID: %s con alcance de: %s en la linea: %d\n",variable,alcance,yylineno);
}

void setParametro(char *variable, char *alcance,char* funcion){
    if(current==NULL){
    current=newNode(yylineno, "si", variable, funcion, "si", "Es variable", alcance,-1);}
    else{current=addFront(current,yylineno, "si", variable, funcion, "si", "Es variable", alcance,-1);}

    //printTable(current);
    //printf("se declaro un ID: %s con alcance de: %s\n",variable,alcance);
}

void setFuncion(char *variable, char *alcance,char* funcion){
    current=addFront(current,yylineno, "no", funcion, "Es funcion", "no", variable, alcance,-1);

    //printTable(current);
    //printf("se declaro un ID: %s con alcance de: %s\n",variable,alcance);
}

void setEtiqueta(char *variable, char *alcance){
    current=addFront(current,yylineno, "Es etiqueta", variable, "NA", "no", "Es etiqueta", alcance,-1);

    //printTable(current);
    //printf("se declaro una etiqueta: %s con alcance de: %s\n",variable,alcance);
}

int buscaValor(char *variable) {
    //printf("el valor que encontro fue: %d para la variable:%s",getElementValue(current,variable),variable);

    return getElementValue(current, variable);
}

void asignarValor(char *variable, char *alcance, int valor) {
    //printf("la variable es: %s con el valor: %d y el alcance: %s\n",variable,valor,alcance);
    updateValue(current, variable, alcance, valor);
    //printTable(current);

}

void marcarUtilizada(char *variable, char *alcance) {
    updateIsUsed(current, variable, alcance, "si");
    //printTable(current);
}

int fueDeclarada(char *variable, char *alcance) {
    return estaDeclarada(current, variable, alcance);

}

void setAlcance(char *variable, char *alcance) {
    printf("se declaro un ID: %s con alcance de: %s\n", variable, alcance);
}





