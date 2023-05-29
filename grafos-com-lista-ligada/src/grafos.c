#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>  


#include "grafos.h" 
#include "lista_ligada_peso.h" 
//#include "fila_prioridade_heap_binario.h" 

struct Lista {
    int valor;
    Lista *lista_de_adjacencias;
}

struct grafo {
	Lista **lista_de_adjacencias;
    int numero_de_vertices;    
    int visitado;  
};


Grafo *criar_grafo(int numero_de_vertices) {

    Grafo *ptr_no_grafo = (Grafo*) malloc(sizeof(Grafo));

    ptr_no_grafo->numero_de_vertices = numero_de_vertices;

    ptr_no_grafo->lista_de_adjacencias = (Lista**) malloc(numero_de_vertices * sizeof(Lista*));

    for (int i = 0; i < numero_de_vertices; i++) {
        ptr_no_grafo->lista_de_adjacencias[i] = criar_lista();
    }

    return ptr_no_grafo;
}

void destruir_grafo(Grafo *ptr_grafo) {

    if(ptr_grafo != NULL) {


        while(ptr_grafo->lista_de_adjacencias){

            
            free(ptr_grafo->lista_de_adjacencias);
        }

            free(ptr_grafo->numero_de_vertices);
    }


}

void inserir_aresta_grafo(Grafo *ptr_grafo, int vertice_origem, int vertice_destino, bool direcionado, float peso) { 


}

void remover_aresta_grafo(Grafo *ptr_grafo, int vertice_origem, int vertice_destino, bool direcionado) { 

}

int buscaProfundidade_Grafo(Grafo *ptr_grafo, int cont){

        if(ptr_grafo->visitado != 1){
            ptr_grafo->visitado = 1;
            buscaProfundidade_Grafo(ptr_grafo,cont+1);
        }

        ptr_grafo->visitado = 0;

}