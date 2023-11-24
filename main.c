#include <stdio.h>
#include <stdlib.h>
#include "AlgoritimosOrdenacao.h"
#include <time.h>
#include <math.h>

int main()
{
    vetor **vet=NULL;
    int tam=pow(10,4);
    double media=0;
    clock_t inicio,fim;
    double tempDecorrido;


    vet=geradorDeVetorAleatorio(vet,tam);
    printf("----------------TESTES DE UM VETOR ALEATÓRIO----------------\n");
    printf("\n Tamanho do vetor: %d",tam);
    printf("\n Teste Radix: \n");
    for(int i=0;i<10;i++){
        inicio=clock();
        Radixsort(vet[i],tam);
        fim=clock();
        tempDecorrido=((double) (fim-inicio))/CLOCKS_PER_SEC ;
        media+=tempDecorrido;
        printf("Vetor %d: %f s \n",i+1,tempDecorrido );
    }
    printf("\nTempo medio: %f s", media/10);
    printf("\n");

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

    media=0;
    printf("\n Teste Merge: \n");
    for(int i=0;i<10;i++){
        inicio=clock();
        MergeSort(vet[i],tam);
        fim=clock();
        tempDecorrido=((double) (fim-inicio))/CLOCKS_PER_SEC ;
        media+=tempDecorrido;
        printf("Vetor %d: %f s \n",i+1,tempDecorrido );
    }
    printf("\nTempo medio: %f s", media/10);
    printf("\n");

    media=0;
    printf("\n Teste Shell: \n");
    for(int i=0;i<10;i++){
        inicio=clock();
        ShellSort(vet[i],tam);
        fim=clock();
        tempDecorrido=((double) (fim-inicio))/CLOCKS_PER_SEC ;
        media+=tempDecorrido;
        printf("Vetor %d: %f s \n",i+1,tempDecorrido );
    }
    printf("\nTempo medio: %f s", media/10);
    printf("\n");

    media=0;
    printf("\n Teste Insertion: \n");
    for(int i=0;i<10;i++){
        inicio=clock();
        InsertionSort(vet[i],tam);
        fim=clock();
        tempDecorrido=((double) (fim-inicio))/CLOCKS_PER_SEC ;
        media+=tempDecorrido;
        printf("Vetor %d: %f s \n",i+1,tempDecorrido );
    }
    printf("\nTempo medio: %f s", media/10);
    printf("\n");


    media=0;
    printf("\n Teste Bubble: \n");
    for(int i=0;i<10;i++){
        inicio=clock();
        BubbleSort(vet[i],tam);
        fim=clock();
        tempDecorrido=((double) (fim-inicio))/CLOCKS_PER_SEC ;
        media+=tempDecorrido;
        printf("Vetor %d: %f s \n",i+1,tempDecorrido );
    }
    printf("\nTempo medio: %f s", media/10);
    printf("\n");


    liberaVetor(vet);

    printf("\n----------------TESTES DE UM VETOR CRESCENTE----------------\n");
    printf("\n Tamanho do vetor: %d",tam);
    vet=geradorDeVetorCrescente(vet,tam);
    printf("\n Teste Radix: \n");
    for(int i=0;i<10;i++){
        inicio=clock();
        Radixsort(vet[i],tam);
        fim=clock();
        tempDecorrido=((double) (fim-inicio))/CLOCKS_PER_SEC ;
        media+=tempDecorrido;
        printf("Vetor %d: %f s \n",i+1,tempDecorrido );
    }
    printf("\nTempo medio: %f s", media/10);
    printf("\n");

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

    media=0;
    printf("\n Teste Merge: \n");
    for(int i=0;i<10;i++){
        inicio=clock();
        MergeSort(vet[i],tam);
        fim=clock();
        tempDecorrido=((double) (fim-inicio))/CLOCKS_PER_SEC ;
        media+=tempDecorrido;
        printf("Vetor %d: %f s \n",i+1,tempDecorrido );
    }
    printf("\nTempo medio: %f s", media/10);
    printf("\n");

    media=0;
    printf("\n Teste Shell: \n");
    for(int i=0;i<10;i++){
        inicio=clock();
        ShellSort(vet[i],tam);
        fim=clock();
        tempDecorrido=((double) (fim-inicio))/CLOCKS_PER_SEC ;
        media+=tempDecorrido;
        printf("Vetor %d: %f s \n",i+1,tempDecorrido );
    }
    printf("\nTempo medio: %f s", media/10);
    printf("\n");

    media=0;
    printf("\n Teste Insertion: \n");
    for(int i=0;i<10;i++){
        inicio=clock();
        InsertionSort(vet[i],tam);
        fim=clock();
        tempDecorrido=((double) (fim-inicio))/CLOCKS_PER_SEC ;
        media+=tempDecorrido;
        printf("Vetor %d: %f s \n",i+1,tempDecorrido );
    }
    printf("\nTempo medio: %f s", media/10);
    printf("\n");


    media=0;
    printf("\n Teste Bubble: \n");
    for(int i=0;i<10;i++){
        inicio=clock();
        BubbleSort(vet[i],tam);
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
