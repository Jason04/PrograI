#include "lista.h"

typedef struct nodeS {
    char* data;
    struct nodeS* next;
} nodeS;

struct nodeS* newNode1(char* data) {
    struct nodeS* node1 = (struct nodeS*) malloc(sizeof (nodeS));
    if (node1 != NULL) {
        node1->data = data;
        node1->next = NULL;
    }
    return node1;
}

struct nodeS* addFront1(struct nodeS* head, char* data) {

    struct nodeS* node = newNode1(data);
    if (node == NULL) {
        return head;
    }
    node->next = head;
    return node;
}

void print(nodeS* head) {
    nodeS *p;
    printf(" %s\n", "dato");
    for (p = head; p != NULL; p = p->next) {
        printf("%s\n", p->data);
    }
}

void escribirHTML(nodeS* infoComentarios) {
    FILE *fp;
    fp = fopen("Documentacion.html", "w"); //Archivo para escritura
    fprintf(fp, "<HTML> \n");
    fprintf(fp, "<BODY> \n");

    nodeS *p;

    for (p = infoComentarios; p != NULL; p = p->next) {//se agrega cada
        //elemento de la lista
        char *str = calloc(sizeof (p->data) +
                sizeof (p->data) + sizeof ("<Comentario>") +
                sizeof ("</Comentario><hr>")
                + 1, sizeof *str);
        strcpy(str, "<Comentario>");// Concatenacion
        strcat(str, p->data);
        strcat(str, "</Comentario><hr>");
        fprintf(fp, str);
    }


    fprintf(fp, "</BODY> \n");
    fprintf(fp, "</HTML> \n");

    fclose(fp); // Cerrar el archivo

}