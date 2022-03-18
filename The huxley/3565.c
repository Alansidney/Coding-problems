#include <stdio.h>
#include <math.h>

int main(){
    int n,x;
    int aux;
    scanf("%d %d", &n,&x);

    while(n!=-1){
        int vet[n],vetOrd[n], pos[n];
        int cont = 0, ind = 0;
        for(int i=0;i<n;i++){//recebe vet e vetOrd
            scanf("%d", &vet[i]);
            vetOrd[i]=vet[i];
        }

        for(int i=0;i<n-1;i++){//bubble sort
            for(int j=0;j<n-i-1;j++){
                if(vetOrd[j]>vetOrd[j+1]){
                    aux = vetOrd[j];
                    vetOrd[j] = vetOrd[j+1];
                    vetOrd[j+1] = aux;
                }
            }
        }

        /*for(int i=0;i<n;i++){
            printf("%d ", vetOrd[i]);
        }*/

        for(int i = 0;i<n;i++){
            if(abs(vet[i]-vetOrd[i])==x){
                cont++;
                pos[ind] = i;
                ind++;
            }
        }
        printf("%d\n", cont);
        for(int i=0;i<cont;i++){
            printf("%d %d %d\n", vet[pos[i]], vetOrd[pos[i]], pos[i]+1);
        }

        scanf("%d %d", &n,&x);
    }
}