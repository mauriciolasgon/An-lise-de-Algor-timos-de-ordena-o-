#include <stdio.h>
#include <stdlib.h>
#include "AlgoritimosOrdenacao.h"
#include <time.h>

int main()
{
    vetor *x;
    int seed=0;
    srand(seed);

    for(int i=0;i<10;i++){
        printf("%d ",100+rand()%1000);
    }
    x=(vetor*)malloc(20*sizeof(vetor));
    for(int i=0;i<20;i++){
        x[i].chave=i+1;
        x[i].valor=0;
    }

    //MergeSort(x,20);
    //printf("\n");
    //for (int i = 0; i < 20; i++) {
		//printf("%d ", x[i].chave);
	//}
    return 0;
}
