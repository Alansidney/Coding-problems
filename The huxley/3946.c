#include <stdio.h>
#include <string.h>
#include <stdio.h>

typedef struct {
    char nome[16];
    int nJog;
    int nTit;
    char temMeninoNey[4];
    char ehFla[4];
    float pontos;
}Clube;

int main(){
    int n,i;
    scanf("%d", &n);
    Clube* clubes = (Clube*)malloc(sizeof(Clube)*n);
    float tPontos=0;

    for(i=0;i<n;i++){
        tPontos=0;
        scanf("%s\n%f %d %d\n %s\n%s", clubes[i].nome, &clubes[i].pontos, &clubes[i].nJog, &clubes[i].nTit, clubes[i].temMeninoNey, clubes[i].ehFla);
        tPontos = tPontos + clubes[i].nJog * 100 + clubes[i].nTit * 2000;
        if(strcmp(clubes[i].temMeninoNey,"sim")==0){
            tPontos += 10000.00;
        }
        if(strcmp(clubes[i].ehFla,"sim")==0){
            tPontos += 20000.00;
        }
        clubes[i].pontos += tPontos;
        printf("Pontos %s:%.2f\n",clubes[i].nome, clubes[i].pontos);
    }

    return 0;
}