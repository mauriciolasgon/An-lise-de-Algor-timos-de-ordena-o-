#include <stdio.h>
#include <stdlib.h>
#include "AlgoritimosOrdenacao.h"
#include <time.h>

int main()
{
    int tam=10;
    vetor** vet = (vetor**)malloc(sizeof(vetor));
    vet = geradorDeVetor(vet,tam);
    //MergeSort(x,20);
    printf("\n");

    imprimeVetor(vet,tam);

    for(int i=0;i<tam;i++){
        Radixsort(vet[i],tam);
    }
    printf("\n");

    imprimeVetor(vet,tam);

    liberaVetor(vet);
    //liberaVetor(vet);
    return 0;
}
