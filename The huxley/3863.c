#include <stdio.h>
#include <string.h>

int main(){
    int N;
    scanf("%d", &N);
    char lado;
    char str[13]={};
    char strFinal[1000]={};
    char strProc[1000]={};
    char *strPos;
    int i,s=0,count=0,len;

    
    while(N>0){

        scanf(" %c",&lado);
        scanf(" %[^\n]", str);

        if(lado=='d'){
            for(i=0;i<6;i++){
                strFinal[s]=str[i];
                s++;
            }
        }else{
            for(i=11;i>5;i--){
                strFinal[s]=str[i];
                s++;
            }
        }
        N--;
    }
    scanf(" %[^\n]", strProc);
    len = strlen(strProc);

    strPos = strstr(strFinal,strProc);
    while(strPos!=NULL){
        count++;
        strncpy(strPos," ",len);
        strPos = strstr(strFinal,strProc);
        printf("%s", strFinal);
    }
    
    return 0;

}