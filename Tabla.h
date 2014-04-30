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
typedef struct nodeTable nodeTable;

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



void escribirTablaTXT(nodeTable* head);

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
int estaDeclarada(nodeTable* head, char* nombre, char* alcance);

/**
 * Permite actualizar "es utilizada?"
 * @param head
 * @param nombre
 * @param alcance
 * @param newData
 */

void updateIsUsed(nodeTable* head, char* nombre, char* alcance, char* newData);

/**
 * Permite actualizar "el valor de la variable"
 * @param head
 * @param nombre
 * @param alcance
 * @param newValue
 */
void updateValue(nodeTable* head, char* nombre, char* alcance,int newValue);

/**
 * Permite imprimer la tabla(ver en consola)
 * @param head
 */
void printTable(nodeTable* head);

/**
 * Permite obtener un elemento de la tabla dado el nombre
 * @param head
 * @param pos
 * @return 
 */
int getElementValue(struct nodeTable* head, char* name);

/**
 * Permite obtener la linea
 * @param head
 * @param name
 * @return 
 */
int getElementLine(nodeTable* head, char* name);

/**
 * Devulve el atributo dado el 'caso':
 *'E'= es parametro           
 * 'F' = funcion
 * 'U = es utilizada
 * 'P' = parametro
 * 'A' = alcance
 * @param head
 * @param name
 * @param caso
 * @return 
 */
char* getElementAtrib(nodeTable* head, char* name, char caso);

/**
 * Permiete escribir la tabla de simbolos en formato xtx.
 * @param head
 */
void escribirTablaTXT(nodeTable* head);

/**
 * Permiete escribir la tabla de manejo de erroes en formato xtx.
 * @param head
 */
void escribirErroresTXT(nodeTable* head); 

/**
 * Permite Obtener el largo del un numero
 * @param value
 * @return 
 */
int get_int_len(int value);

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

