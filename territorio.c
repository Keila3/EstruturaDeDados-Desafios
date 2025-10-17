#include "territorio.h"
#include <stdlib.h>
#include <time.h>


// CADASTRO DOS TERRITORIOS
void cadastrarTerritorios(Territorio *mapa, int qtd) {
    int i = 0;

    //CADASTRO DOS DADOS 
    for (i = 0; i < qtd; i++){
 //Nome
    printf("Digite o nome do Territorio %d:", i + 1);
    scanf("%s", mapa[i].nome);
 // Cor
    printf("Digite a cor do exercito do Territorio %d:", i + 1);
    scanf("%s", mapa[i].cor);
 //Tropas
    printf("Adicione suas tropas %d:", i + 1);
    scanf("%d", &mapa[i].tropas);
    }
 }

 // EXIBIÇAO DOS DADOS
 void exibirTerritorios(Territorio *mapa, int qtd){
    int i = 0;

    printf("\n*** TERRITORIO ***\n");
    for ( i = 0; i < qtd; i++)
    {
        printf("%d:\n Nome: %s\n Cor: %s\n Tropas: %d\n\n",
            i + 1,
            mapa[i].nome,
            mapa[i].cor,
            mapa[i].tropas
        );
        
    }
 }