#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    float temp;
    char det;
}Sprinklers;

int main(){
    int testes,n,i,count=1;
    float somaTemp=0, mediaTemp=0;

    scanf("%d",&testes);
    
    while(testes>0){
        scanf("%d",&n);
        Sprinklers* pSprinklers= (Sprinklers*)malloc(sizeof(Sprinklers)*n);
        for(i=0;i<n;i++){
            scanf("%d %f %c", &pSprinklers[i].id, &pSprinklers[i].temp, &pSprinklers[i].det);
            somaTemp += pSprinklers[i].temp;
        }
        mediaTemp = somaTemp / n;
        printf("TESTE %d\n", count);
        for(i=0;i<n;i++){
            if(pSprinklers[i].det=='S')
                printf("%d\n", pSprinklers[i].id);
            else if(pSprinklers[i].temp>(mediaTemp*1.15)){
                printf("%d\n", pSprinklers[i].id);
            }else if(pSprinklers[i].temp>40){
                printf("%d\n", pSprinklers[i].id);
            }
        }
        testes--;
    }
    
    return 0;
}