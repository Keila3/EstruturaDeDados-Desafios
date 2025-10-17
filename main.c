#include <stdio.h>
#include "territorio.h"





int main(){

    Territorio territorios[MAX_TERRITORIOS];
    int qtd = MAX_TERRITORIOS;

    cadastrarTerritorios(territorios, qtd); // Chama a função para cadastrar os territórios
    exibirTerritorios(territorios, qtd); // Chama a função para exibir os territórios

        return 0;
}


