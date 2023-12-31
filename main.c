#include <stdio.h>
#include <stdlib.h>
#include "AlgoritimosOrdenacao.h"
#include <time.h>
#include <math.h>

int main()
{
    vetor **vet;
    int tam=5*pow(10,4);
    double media=0;
    clock_t inicio,fim;
    double tempDecorrido;

    vet=inicializaVetor(tam);
    vet=geradorDeVetorAleatorio(vet,tam);


    printf("----------------TESTES DE UM VETOR ALEATÓRIO----------------\n");

    media=0;
    printf("\n Teste Quick: \n");
    for(int i=0;i<10;i++){
        inicio=clock();
        QuickSort(vet[i],0,tam-1);
        fim=clock();
        tempDecorrido=((double) (fim-inicio))/CLOCKS_PER_SEC ;
        media+=tempDecorrido;
        printf("Vetor %d: %f s \n",i+1,tempDecorrido );
    }
    printf("\nTempo medio: %f s", media/10);
    printf("\n");


    liberaVetor(vet);

    return 0;
}
