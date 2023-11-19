#include <stdio.h>
#include <stdlib.h>
#include "AlgoritimosOrdenacao.h"
#include <time.h>

int main()
{
    vetor **vet;
    int tam=10;
    vet=geradorDeVetor(vet,tam);
    //MergeSort(x,20);
    printf("\n");

    imprimeVetor(vet,tam);

    for(int i=0;i<10;i++){
        MergeSort(vet[i],tam);
    }
    printf("\n");

    imprimeVetor(vet,tam);

    liberaVetor(vet);
    //liberaVetor(vet);
    return 0;
}
