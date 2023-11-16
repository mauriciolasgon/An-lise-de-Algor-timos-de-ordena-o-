#include <stdio.h>
#include <stdlib.h>
#include "AlgoritimosOrdenacao.h"

int main()
{
    vetor *x;

    x=(vetor*)malloc(10*sizeof(vetor));
    for(int i=0;i<10;i++){
        x[i].chave=(10-i);
        x[i].valor=0;
    }

    MergeSort(x,10);
    printf("\n");
    for (int i = 0; i < 10; i++) {
		printf("%d ", x[i].chave);
	}
    return 0;
}
