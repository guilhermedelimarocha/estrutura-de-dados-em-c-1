#include <stdio.h>
#include <stdbool.h>  

typedef struct grafo Grafo;

Grafo *criar_grafo(int numero_de_vertices);
void destruir_grafo(Grafo *ptr_grafo);

void inserir_aresta_grafo(Grafo *ptr_grafo, int vertice_origem, int vertice_destino, bool direcionado, float peso);
void remover_aresta_grafo(Grafo *ptr_grafo, int vertice_origem, int vertice_destino, bool direcionado);

//busca_profundidade
int buscaProfundidade_Grafo(Grafo *gr, int cont);
//busca_largura
// void busca_largura(Grafo *gr, int ini, int *visitado);
//menor_caminho
// void menor_caminho(Grafo *gr, int ini, int *visitado);