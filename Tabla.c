#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Tabla.h"
//#include "y.tab.h"

typedef struct nodeTable {
    int value;
    int line;
    char* alcance;
    char* isParameter;
    char* name;
    char* function;
    char* isUsed;
    char* parameter;

    struct nodeTable* next;
} nodeTable;

struct nodeTable* newNode(int line, char* isParameter, char* name
        , char* function, char* isUsed, char* parameter, char* alcance, int value) {
    struct nodeTable* node = (struct nodeTable*) malloc(sizeof (nodeTable));
    if (node != NULL) {
        node->line = line;
        node->isParameter = isParameter;
        node->name = name;
        node->function = function;
        node->isUsed = isUsed;
        node->parameter = parameter;
        node->next = NULL;
        node->alcance = alcance;
        node->value = value;
    }
    return node;
}

struct nodeTable* addFront(struct nodeTable* head, int line, char* isParameter
        , char* name, char* function, char* isUsed, char* parameter, char* alcance, int value) {

    struct nodeTable* node = newNode(line, isParameter, name, function
            , isUsed, parameter, alcance, value);
    if (node == NULL) {
        return head;
    }
    node->next = head;
    return node;
}

int estaDeclarada(nodeTable* head, char* nombre, char* alcance) {
    nodeTable *p;
    for (p = head; p != NULL; p = p->next) {
        if ((strcmp(p->name, nombre) == 0) && (strcmp(p->alcance, alcance) == 0)) {
            return 1;
        }
    }
    return 0;
}

void updateIsUsed(nodeTable* head, char* nombre, char* alcance, char* newData) {
    nodeTable *p;
    for (p = head; p != NULL; p = p->next) {
        if ((strcmp(p->name, nombre) == 0) && p->alcance == alcance) {
            p->isUsed = newData;
        }
    }
}

void updateValue(nodeTable* head, char* nombre, char* alcance, int newValue) {
    nodeTable *p;
    for (p = head; p != NULL; p = p->next) {

        if ((strcmp(p->name, nombre) == 0) &&(strcmp(p->alcance, alcance) == 0)) {

            p->value = newValue;
            break;
        }
    }
}

void escribirErroresTXT(nodeTable* head) {
    FILE *ptr_file;
    int x;

    ptr_file = fopen("Tabla Manejo de errores.txt", "w");

    if (!ptr_file)
        return 1;

    fprintf(ptr_file, "%s\n", "");
    fprintf(ptr_file, "%s\n", "                          ***************************************************************************************************************");
    fprintf(ptr_file, "%s\n", "                          *                                                  Tabla                                                      *");
    fprintf(ptr_file, "%s\n", "                          *                                            Manejo de Errores                                                *");
    fprintf(ptr_file, "%s\n", "                          ***************************************************************************************************************");
    fprintf(ptr_file, "%s\n", "                          *  Linea        *Tipo                           *Descripción                    *Texto Encontrado             *");

    nodeTable *p;
    for (p = head; p != NULL; p = p->next) {

        fprintf(ptr_file, "%s", "                          *  ");
        fprintf(ptr_file, "%d", p->line);
        int i = strlen("             ") - get_int_len(p->line);
        while (i > 0) {
            fprintf(ptr_file, "%s", " ");
            i = i - 1;
        }

        fprintf(ptr_file, "%s", p->isParameter);
        i = strlen("                                 ") - strlen(p->isParameter);
        while (i > 0) {
            fprintf(ptr_file, "%s", " ");
            i = i - 1;
        }

        fprintf(ptr_file, "%s", p->name);

        i = strlen("                               ") - strlen(p->name);
        while (i > 0) {
            fprintf(ptr_file, "%s", " ");
            i = i - 1;
        }
        
       fprintf(ptr_file, "%s", p->function);
       
        i = strlen("                             ") - strlen(p->function);
        while (i > 0) {
            fprintf(ptr_file, "%s", " ");
            i = i - 1;
        }
       
        fprintf(ptr_file, "%s\n", " *");


    }
    fprintf(ptr_file, "%s\n", "                          ***************************************************************************************************************");
    fprintf(ptr_file, "%s\n", "");
    fclose(ptr_file);

}

void printTable(nodeTable* head) {
    nodeTable *p;
    printf("%s %s %s %s %s %s\n", "|Línea|", "Es Parámetro|", "Nombre  |"
            , "Función|", "Es Utilizada|", "Parámero|Alcance | Valor");
    for (p = head; p != NULL; p = p->next) {
        printf("|%d    |    %s       |  %s   |   %s   |   %s        |  %s     |  %s     |%d\n", p->line, p->isParameter, p->name
                , p->function, p->isUsed, p->parameter, p->alcance, p->value);
    }
}

int getElementValue(nodeTable* head, char* name) {
    struct nodeTable *p;
    for (p = head; p != NULL; p = p->next) {
        if ((strcmp(p->name, name)) == 0) {
            return p->value;

        }
    }

}

void escribirTablaTXT(nodeTable* head) {
    FILE *ptr_file;
    int x;

    ptr_file = fopen("Tabla de Simbolos.txt", "w");

    if (!ptr_file)
        return 1;

    fprintf(ptr_file, "%s\n", "");
    fprintf(ptr_file, "%s\n", "                                ********************************************************************************");
    fprintf(ptr_file, "%s\n", "                                *                                   Variables                                  *");
    fprintf(ptr_file, "%s\n", "                                ********************************************************************************");
    fprintf(ptr_file, "%s\n", "                                *  Nombre        *Línea        *¿Parámetro?        *Función        *¿Utilizada?*");

    nodeTable *p;
    for (p = head; p != NULL; p = p->next) {
        if ((strcmp(p->parameter, "Es variable")) == 0) {
            fprintf(ptr_file, "%s", "                                *  ");
            fprintf(ptr_file, "%s", p->name);
            int i = strlen("               ") - strlen(p->name);
            while (i > 0) {
                fprintf(ptr_file, "%s", " ");
                i = i - 1;
            }

            fprintf(ptr_file, "%d", p->line);


            i = strlen("                  ") - get_int_len(p->line);
            while (i > 0) {
                fprintf(ptr_file, "%s", " ");
                i = i - 1;
            }


            fprintf(ptr_file, "%s", p->isParameter);
            fprintf(ptr_file, "%s", "               ");
            fprintf(ptr_file, "%s", p->function);

            i = strlen("                   ") - strlen(p->function);
            while (i > 0) {
                fprintf(ptr_file, "%s", " ");
                i = i - 1;
            }

            fprintf(ptr_file, "%s", p->isUsed);
            fprintf(ptr_file, "%s\n", "     *     ");

        }
    }
    fprintf(ptr_file, "%s\n", "                                ********************************************************************************");

    fprintf(ptr_file, "%s\n", "                                *                                    Funciones                                 *");
    fprintf(ptr_file, "%s\n", "                                ********************************************************************************");

    fprintf(ptr_file, "%s\n", "                                *  Nombre         *Línea        *Parámetro         *¿Utilizada?                *");

    for (p = head; p != NULL; p = p->next) {
        if ((strcmp(p->function, "Es funcion")) == 0) {
            fprintf(ptr_file, "%s", "                                *  ");
            fprintf(ptr_file, "%s", p->name);

            int i = strlen("                ") - strlen(p->name);
            while (i > 0) {
                fprintf(ptr_file, "%s", " ");
                i = i - 1;
            }
            fprintf(ptr_file, "%d", p->line);

            i = strlen("              ") - get_int_len(p->line);
            while (i > 0) {
                fprintf(ptr_file, "%s", " ");
                i = i - 1;
            }

            fprintf(ptr_file, "%s", p->parameter);

            i = strlen("                           ") - get_int_len(p->parameter);
            while (i > 0) {
                fprintf(ptr_file, "%s", " ");
                i = i - 1;
            }

            fprintf(ptr_file, "%s", p->isUsed);
            fprintf(ptr_file, "%s\n", "                      *     ");
        }
    }
    fprintf(ptr_file, "%s\n", "                                ********************************************************************************");
    fprintf(ptr_file, "%s\n", "                                *                                   Etiquetas                                  *");
    fprintf(ptr_file, "%s\n", "                                ********************************************************************************");

    fprintf(ptr_file, "%s\n", "                                *  Nombre                              *Línea        *¿Utilizada?              *");

    for (p = head; p != NULL; p = p->next) {
        if ((strcmp(p->parameter, "Es etiqueta")) == 0) {
            fprintf(ptr_file, "%s", "                                *  ");
            fprintf(ptr_file, "%s", p->name);
            int i = strlen("                                      ") - 
            strlen(p->name);
            while (i > 0) {
                fprintf(ptr_file, "%s", " ");
                i = i - 1;
            }

            fprintf(ptr_file, "%d", p->line);
            i = strlen("                ") - get_int_len(p->line);
            while (i > 0) {
                fprintf(ptr_file, "%s", " ");
                i = i - 1;
            }
            fprintf(ptr_file, "%s", p->isUsed);
            fprintf(ptr_file, "%s\n", "                    *     ");

        }
    }
    fprintf(ptr_file, "%s\n", "                                ********************************************************************************");
    fprintf(ptr_file, "%s\n", "");
    fclose(ptr_file);



}

int getElementLine(nodeTable* head, char* name) {
    struct nodeTable *p;
    for (p = head; p != NULL; p = p->next) {
        if ((strcmp(p->name, name)) == 0) {
            return p->line;

        }
    }

}

char* getElementAtrib(nodeTable* head, char* name, char caso) {
    struct nodeTable *p;
    for (p = head; p != NULL; p = p->next) {
        if (p->name == name) {
            switch (caso) {
                case 'E':
                    return p->isParameter;
                    break;
                case 'F':
                    return p->function;
                    break;

                case 'U':
                    return p->isUsed;
                    break;

                case 'P':
                    return p->parameter;
                    break;

                case 'A':
                    return p->alcance;
                    break;

            }

        }
    }
}

int get_int_len(int value) {
    int l = 1;
    while (value > 9) {
        l++;
        value /= 10;
    }
    return l;
}

