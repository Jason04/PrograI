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

struct nodeTable;
typedef struct nodeTable _nodeTable;

/**
 * Crear nuevo nodo
 * @param line
 * @param isParameter
 * @param name
 * @param function
 * @param isUsed
 * @param parameter
 * @param alcance
 * @param value
 * @return 
 */
struct nodeTable* newNode(int line, char* isParameter, char* name
        , char* function, char* isUsed, char* parameter,
        char* alcance, int value);

/**
 * Insertar nodo al inicio de la lista
 * @param head
 * @param line
 * @param isParameter
 * @param name
 * @param function
 * @param isUsed
 * @param parameter
 * @param alcance
 * @param value
 * @return 
 */
struct nodeTable* addFront(struct nodeTable* head, int line, char* isParameter
        , char* name, char* function, char* isUsed, char* parameter,
        char* alcance,int value);

/**
 * Indica si una nombre ya esta declarado en la tabla.
 * Retorna 1 si esta declara, 0 sino.
 * Alcance 0 = fuera de la funcion, 1= dentro de la funcion.
 * El alcance de la funcion es = 0,el alcande del parametro de la funcion es =1.
 * @param head
 * @param nombre
 * @param alcance
 * @return 
 */
int estaDeclarada(_nodeTable* head, char* nombre, char* alcance);

/**
 * Permite actualizar "es utilizada?"
 * @param head
 * @param nombre
 * @param alcance
 * @param newData
 */

void updateIsUsed(_nodeTable* head, char* nombre, char* alcance, char* newData);

/**
 * Permite actualizar "el valor de la variable"
 * @param head
 * @param nombre
 * @param alcance
 * @param newValue
 */
void updateValue(_nodeTable* head, char* nombre, char* alcance,int newValue);

/**
 * Permite imprimer la tabla(ver en consola)
 * @param head
 */
void printTable(_nodeTable* head);

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

