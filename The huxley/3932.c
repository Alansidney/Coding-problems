#include <stdio.h>
#include <string.h>

int main(){
    char texto[501] = {};
    scanf(" %[^\n]", texto);
    char letraChar[501] = {};
    char palavras[501] = {};
    char palavrasMod[501] = {};
    int tLen = strlen(texto);
    int letraInt;
    int i,l=0,p=0,p2=0;
    for(i=0;i<tLen;i++){
        if(texto[i]=='['){
            while(texto[i]!=']'){
                i=i+1;
                if(texto[i]=='-'){
                    letraInt=atoi(letraChar);
                    memset(letraChar,0,l);
                    l=0;
                    palavras[p] = (char)letraInt;
                    p++;
                }else if(texto[i]!=']'){
                    letraChar[l]=texto[i];
                    l++;
                }
            }
            palavras[p]='/';
            p++;
        }
    }
    int pLen = strlen(palavras);
    int mai=0,min=0,j=0;

    for(i=0;i<pLen;i++){

        if(palavras[i]!='/'){
            if(palavras[i]>96){
                min++;
            }else{
                mai++;
            }
        }else{
            printf("palavras:%c min:%d mai:%d\n", palavras[i], min,mai);
            if(min>mai){
                for(;j<i;j++){
                    if(palavras[j]<97){
                        palavrasMod[p2]=palavras[j]+32;
                        p2++;
                    }else{
                        palavrasMod[p2]=palavras[j];
                        p2++;
                    }
                    
                }
                palavrasMod[p2]='/';
                p2++;
                j++;
            }else{
                for(;j<i;j++){
                    if(palavras[j]>90){
                        palavrasMod[p2]=palavras[j]-32;
                        p2++;
                    }else{
                        palavrasMod[p2]=palavras[j];
                        p2++;
                    }
                }
                palavrasMod[p2]='/';
                p2++;
                j++;
            }
            min=0;
            mai=0;
        }
    }

    j=0;

    for(i=0;i<tLen;i++){
        if(texto[i]=='['){
            while(texto[i]!=']'){
                i++;
            }
            while(palavrasMod[j]!='/'){
                printf("%c",palavrasMod[j]);
                j++;
            }
            j++;
        }else{
            printf("%c",texto[i]);
        }
    }
    
}