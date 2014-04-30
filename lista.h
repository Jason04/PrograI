/* 
 * File:   Tabla.h
 * Author: Jason 
 *
 * Created on 23 de abril de 2014, 10:49 AM
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct nodeS;
typedef struct nodeS nodeS;

/**
 * Crear nuevo nodo
 * @param data
 * @return 
 */
struct nodeS* newNode1(char* data);

/**
 * Permite escribir y generar un archivo HTML, dada una lista de char*,
 * en la cual cada nodo sera una linea en el archivo HTML.
 * @param infoComentarios
 */
void escribirHTML(nodeS* infoComentarios);

/**
 * Insertar nodo al inicio de la lista
 * @param nodeS
 * @param data
 * @return 
 */
struct nodeS* addFront1(struct nodeS* head,char* data);


/**
 * Permite imprimer la lista(ver en consola)
 * @param head
 */
void print(nodeS* head);

#ifndef TABLA_H
#define	TABLA_H

#ifdef	__cplusplus
extern "C" {
#endif


    //hacer obtner sin uso 

#ifdef	__cplusplus
}
#endif

#endif	/* TABLA_H */

