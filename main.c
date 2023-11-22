#include <stdio.h>
#include <stdlib.h>
#include "AlgoritimosOrdenacao.h"
#include <time.h>

int main()
{
    vetor **vet=NULL;
    int tam=pow(10,5);
    clock_t inicio,fim;
    double tempDecorrido;

    vet=geradorDeVetorAleatorio(vet,tam);
    //MergeSort(x,20);


    printf("\n");
    for(int i=0;i<10;i++){
        inicio=clock();
        ShellSort(vet[i],tam);
        fim=clock();
        tempDecorrido=((double) (fim-inicio))/CLOCKS_PER_SEC ;
        printf("Vetor %d: %f s \n",i+1,tempDecorrido );
    }
    printf("\n");



    liberaVetor(vet);
    //liberaVetor(vet);
    return 0;
}
