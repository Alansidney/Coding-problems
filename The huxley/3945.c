#include <stdio.h>
#include <string.h>

int n;

typedef struct{
    char nome[20];
    char tipo[4];
    int atk;
    int def;
}Pokemon;

Pokemon * setPokemons(Pokemon* pokemons,int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%s\n%s\n%d\n%d",pokemons[i].nome, pokemons[i].tipo, &pokemons[i].atk, &pokemons[i].def);
    }
    return pokemons;
}


void list(Pokemon* pPoke, char* comando){

    int i=0;
    int count = 1;
    char* tipo = (char*)malloc(sizeof(char)*4);
    tipo = strstr(comando," ")+1;

    for(i=0;i<n;i++){
        if(strcmp(pPoke[i].tipo,tipo)==0){
            printf("Pokemon %d: %s\n Ataque: %d\n Defesa: %d\n", count, pPoke[i].nome,pPoke[i].atk,pPoke[i].def);
            count++;
        }
    }
}

void luta(Pokemon* pPoke){
    char poke1[20]={};
    char poke2[20]={};
    int i, posP1,posP2;
    int atkdef1=0,atkdef2=0;

    scanf("%s vs %s", poke1, poke2);

    for(i=0;i<n;i++){
        if(strcmp(pPoke[i].nome,poke1)==0){
            posP1 = i;
        }else if(strcmp(pPoke[i].nome,poke2)==0){
            posP2 = i;
        }
    }

    atkdef1 = pPoke[posP1].atk-pPoke[posP2].def;
    atkdef2 = pPoke[posP2].atk-pPoke[posP1].def;
    if(atkdef1>atkdef2){
        printf("%s deitou %s na porrada\n",poke1,poke2);
    }else if(atkdef1<atkdef2){
        printf("%s deitou %s na porrada\n",poke2,poke1);
    }else{
        printf("parece que temos um empate\n");
    }

}

int main(){
    int i;
    scanf("%d", &n);

    Pokemon pokemons[n];
    Pokemon* pPoke;
    pPoke = setPokemons(pokemons,n);

    char comando[20]={};
    scanf(" %[^\n]", comando);

    while(strcmp(comando,"0")!=0){
        if (strcmp(comando,"luta")==0){
            luta(pPoke);
        }else{
            list(pPoke, comando);
        }
        scanf(" %[^\n]", comando);
    }
}
 