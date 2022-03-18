#include <stdio.h>

int main(){
    int vet[1000000], count[1000000];
    int n,i=0, aux,res = 0;
    char c=' ';
    
    while(scanf("%d",&n) !=EOF){// recebe vetor
        vet[i]=n;
        i++;
    }
    
    for(int j =0;j<i-1;j++){// ordena vet
        for(int k=0;k<i-j-1;k++){
            if(vet[k]>vet[k+1]){
                aux = vet[k];
                vet[k] = vet[k+1];
                vet[k+1] = aux;
            }
        }
    }

    for(int j=0;j<i;j++){//atribui a quantidade de cartas no count
        count[vet[j]]++;
    }
    for(int j=0;j<i;j++){//printa vetor ordenado
        printf("%d ", vet[j]);
    }printf("\n");

    for(int j=0;j<i;j++){//printa count[j] ímpar
        if(count[j]%2!=0){
            res = j;
            break;
        }
    }
    printf("%d", res);

    return 0;
}