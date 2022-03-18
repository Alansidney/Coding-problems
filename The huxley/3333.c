#include <stdio.h>

int main(){
    char letra, temp = 'A';
    scanf("%c", &letra);
    int linhas = letra - 64;
    int colunas = linhas*2 -1;
    char matriz[linhas][colunas];

    for(int i=0;i<colunas;i++){//preechendo a ultima linha da matriz
        if(i<linhas-1){
            matriz[linhas-1][i]=temp;
            temp++;
        }else{
            matriz[linhas-1][i]=temp;
            temp--;
        }
    }
    for (int i=linhas-1;i>0;i--){//preencheno a matriz de baixo pra cima
        for(int j=0;j<colunas;j++){
            if(matriz[i][j]=='.'){
                matriz[i-1][j]='.';
            }else if(matriz[i][j]=='A'){
                matriz[i-1][j]='.';
            }else{
                matriz[i-1][j]= matriz[i][j]-1;
            }
        }
    }

    for (int i=0;i<linhas;i++){//printando matriz
        for(int j=0;j<colunas;j++){
            printf("%c",matriz[i][j]);
        }printf("\n");
    }
    return 0;
}