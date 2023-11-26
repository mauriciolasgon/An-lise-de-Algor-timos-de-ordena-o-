#ifndef ALGORITIMOSORDENACAO_H_INCLUDED
#define ALGORITIMOSORDENACAO_H_INCLUDED


typedef struct item
{
    int chave;
    float valor;
}vetor;


void imprimeVetores(vetor **vet,int tam){

    for(int i=0;i<10;i++){
        printf("\n");
        for(int j=0;j<tam;j++){
            printf(" %d", vet[i][j].chave);
        }
    }

}

vetor ** inicializaVetor(int tam){
    vetor **vet=(vetor**)malloc(10*sizeof(vetor*));
    for(int i=0;i<10;i++){
        vet[i]=(vetor*)malloc(tam*sizeof(vetor));
    }

    return vet;
}


vetor ** geradorDeVetorAleatorio(vetor **vet,int tam){
    int seed=0;
    // gera 10 casos de vetores
    srand(seed);
    for(int i=0;i<10;i++){
        for(int j=0;j<tam;j++){
            vet[i][j].chave=rand()%1000;
            vet[i][j].valor=100+rand();
        }
    }


    return vet;
}




void liberaVetor(vetor **vet){
    for(int i=0;i<10;i++){
        free(vet[i]);
    }
    free(vet);
}

void troca(vetor *A, vetor *B){
    vetor troca;
    troca=*A;
    *A=*B;
    *B=troca;
}

void InsertionSort(struct item *v,int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>=0;j--){
            if(v[j-1].chave<v[j].chave){
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

            while(v[j-h].chave<aux.chave){
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

    for(z=i;z<=f;z++){
        c[z]=v[z];
    }
    z=i;

    while(iv<=m && ic<=f)
    {
        if(c[iv].chave >=c[ic].chave)
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
        if(v[m].chave<v[m+1].chave)
        {
            Merge(v,c,i,m,f);
        }
    }

}



void MergeSort(vetor *v,int n){
    vetor *c=(vetor*)malloc(sizeof(vetor)*n);
    Sort(v,c,0,n-1);
    free(c);
}



int particao(vetor *v,int LI,int LS){
    int pivo,e=LI,d=LS,medio=(d-e)/2;
    pivo=v[e].chave;

    while(e<d)
    {
        while((v[e].chave>=pivo)&&(e<LS)){e++;}
        while((v[d].chave<pivo)&&(d>LI)){d--;}
        if(e<d)
        {
            troca(&v[e],&v[d]);

        }
    }
    troca(&v[LI],&v[d]);

    return d;
}



void QuickSort(vetor *v,int LI,int LS){
    if(LI<LS)
    {
        int p;
        p=particao(v,LI,LS);
        QuickSort(v,LI,p-1);
        QuickSort(v,p+1,LS);
    }
}





vetor **geradorDeVetorCrescente(vetor **vet,int tam){
    int seed=0,aux;
    // gera 10 casos de vetores

    srand(seed);
    for(int i=0;i<10;i++){
        aux=0;
        for(int j=0;j<tam;j++){
            vet[i][j].chave=aux+rand()%100;
            vet[i][j].valor=100+rand();
            aux=vet[i][j].chave;
        }
    }
    return vet;
    }


void Radixsort(vetor *vet, int n) {
    int i, exp = 1, m = vet[0].chave;
    vetor *bucket = (vetor*)malloc(n * sizeof(vetor));
    vetor *temp = (vetor*)malloc(n * sizeof(vetor));

    for (i = 1; i < n; i++) {
        if (vet[i].chave > m) {
            m = vet[i].chave;
        }
    }

    while (m / exp > 0) {
        int cont[10] = {0};

        for (i = 0; i < n; i++) {
            int index = (vet[i].chave / exp) % 10;
            cont[index]++;
        }

        for (i = 8; i >= 0; i--) {
            cont[i] += cont[i + 1];
        }

        for (i = n - 1; i >= 0; i--) {
            int index = (vet[i].chave / exp) % 10;
            temp[--cont[index]] = vet[i];
        }

        for (i = 0; i < n; i++) {
            vet[i] = temp[i];
        }

        exp *= 10;
    }

    free(bucket);
    free(temp);
}














#endif // ALGORITIMOSORDENACAO_H_INCLUDED
