#ifndef ALGORITIMOSORDENACAO_H_INCLUDED
#define ALGORITIMOSORDENACAO_H_INCLUDED


typedef struct item
{
    int chave;
    float valor;
}vetor;

void troca(vetor *A, vetor *B){
    vetor troca;
    printf("A: %d  B: %d \t",A->chave,B->chave);
    troca=*A;
    *A=*B;
    *B=troca;
    printf("A: %d  B: %d \n",A->chave,B->chave);

}

void InsertionSort(struct item *v,int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>=0;j--){
            if(v[j-1].chave>v[j].chave){
                troca(&v[j-1],&v[j]);
            }
        }
    }
}

void BubbleSort(struct item*v,int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if(v[j].chave<v[j-1].chave){
                troca(&v[j-1],&v[j]);
            }
        }
    }
}


void ShellSort( struct item *v, int n){
    int j,h;
    struct item aux;
    for(int h=1;h<n;h=3*h+1);

    while(h>0){
        h=(h-1)/3;
        for(int i=h;i<n;i++){
            aux=v[i];
            j=i;

            while(v[j-h].chave>aux.chave){
                v[j]=v[j-h];
                j-=h;
                if(j<h)break;
            }
            v[j]=aux;
        }
    }
}



void Merge(vetor *v,vetor *c,int i,int m,int f){
    int z,iv=i,ic=m+1;
    for(z=i;z<=f;z++)c[z]=v[z];
    z=i;
    while(iv<=m && ic<=f)
    {
        if(c[iv].chave <=c[ic].chave)
        {
            v[z++]=c[iv++];
        }
        else
        {
            v[z++]=c[ic++];
        }
    }
    while(iv<=m)
    {
        v[z++]=c[iv++];
    }
    while(ic<=f)
    {
        v[z++]=c[ic++];

    }

}


void Sort(vetor *v,vetor*c,int i,int f){
    if(i<f)
    {
        int m=(i+f)/2;
        Sort(v,c,i,m);
        Sort(v,c,m+1,f);
        if(v[m].chave>v[m+1].chave)
        {
            Merge(v,c,i,m,f);
        }
    }
}



void MergeSort(vetor *v,int n){
    vetor *c=(vetor*)malloc(sizeof(int)*n);
    Sort(v,c,0,n-1);
    free(c);
}

int particao(int *v,int LI,int LS){
    int aux,pivo,e=LI,d=LS;
    pivo=v[e];
    while(e<d)
    {
        while((v[e]<=pivo)&&(e<LS)){e++;}
        while((v[d]>pivo)&&(d>LI)){d--;}
        if(e<d)
        {
            aux=v[e];
            v[e]=v[d];
            v[d]=aux;
        }
    }
    aux=v[LI];
    v[LI]=v[d];
    v[d]=aux;
    return d;
}



void QuickSort(int *v,int LI,int LS){
    if(LI<LS)
    {
        int p;
        p=particao(v,LI,LS);
        QuickSort(v,LI,p-1);
        QuickSort(v,p+1,LS);
    }
}

void Radixsort(int *vet, int n) {
	int i, exp = 1, m = 0, bucket[n], temp[n];

	for(i = 0; i < n; i++) {
		if(vet[i] > m) {
			m = vet[i];
		}
	}

	while((m/exp) > 0) {
		for (i = 0; i < n; i++) {
			bucket[i] = 0;
		}
		for(i = 0; i < n; i++) {
			bucket[(vet[i] / exp) % 10]++;
		}
		for(i = 1; i < n; i++) {
			bucket[i] += bucket[i-1];
		}
		for(i = (n - 1); i >= 0; i--) {
			temp[--bucket[(vet[i] / exp) % 10]] = vet[i];
		}
		for(i = 0; i < n; i++) {
			vet[i] = temp[i];
		}
		exp *= 10;
	}
}














#endif // ALGORITIMOSORDENACAO_H_INCLUDED
