#include <stdio.h>
#include <string.h>

#ifndef TERRITORIO_H 
#define TERRITORIO_H 

#define MAX_TERRITORIOS 5

typedef struct {
    char nome [30];
    char cor [10];
    int tropas;
} Territorio; 

// Declaração das funções
void cadastrarTerritorios(Territorio *mapa, int qtd);
void exibirTerritorios(Territorio *mapa, int qtd);

#endif