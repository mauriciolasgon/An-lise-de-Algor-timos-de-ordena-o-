#ifndef ALGORITIMOSORDENACAO_H_INCLUDED
#define ALGORITIMOSORDENACAO_H_INCLUDED

struct item
{
    int chave;
};

void troca
void InsertionSort(struct item *v,int n){
    struct item aux;
    for(int i=0;i<n;i++){
        for(int j=0;j>=0;j--){
            if(v[j-1].chave>v[j].chave){
                troca(v[j-1],v[j]);
            }
        }
    }
}

void BubbleSort(struct item*v,int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if(v[j].chave<v[j-1].chave)
                troca(v[j-1],v[j]);
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


void MergeSort(int *v,int n){
    int *c=malloc(sizeof(int)*n);
    sort(v,c,0,n-1);
    free(c);
}





#endif // ALGORITIMOSORDENACAO_H_INCLUDED
