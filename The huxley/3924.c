#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ehPrimo(int n){
    for(int i=2;i<n;i++){
        if(n%i==0 || n==1)
            return false;
    }
    return true;
}
bool ehMult3Primo(int n){
    
}

bool ehMult17(int n){
    bool ehMult17;
    if(n%17==0)
        ehMult17=true;
    return ehMult17;
} 

int main(){
    char palavra[1000];
    scanf("%s",palavra);
    int tam = strlen(palavra);
    int soma = 0;
    
    for(int i=0;i<tam;i++){
        soma += palavra[i];
    }
    //printf("soma=%d\n",soma);
    bool x = ehPrimo(5);
    printf("%d", x);

}