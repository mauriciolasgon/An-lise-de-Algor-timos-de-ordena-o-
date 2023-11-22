#include <stdio.h>
#include <stdlib.h>
#include "AlgoritimosOrdenacao.h"
#include <time.h>
#include <math.h>

int main()
{

    vetor **vet=NULL;
    int tam=10;
    double media=0;
    clock_t inicio,fim;
    double tempDecorrido;

    int tam=10;
    vetor** vet = (vetor**)malloc(sizeof(vetor));
    vet = geradorDeVetor(vet,tam);
    //MergeSort(x,20);
    printf("\n");


    vet=geradorDeVetorAleatorio(vet,tam);


    imprimeVetores(vet,tam);
    printf("\n");
    for(int i=0;i<10;i++){
        inicio=clock();
        QuickSort(vet[i],0,tam-1);
        fim=clock();
        tempDecorrido=((double) (fim-inicio))/CLOCKS_PER_SEC ;
        media+=tempDecorrido;
        printf("Vetor %d: %f s \n",i+1,tempDecorrido );

    for(int i=0;i<tam;i++){
        Radixsort(vet[i],tam);

    }
    printf("\nTempo medio: %f s", media/10);
    printf("\n");

    imprimeVetores(vet,tam);
    liberaVetor(vet);

    return 0;
}
