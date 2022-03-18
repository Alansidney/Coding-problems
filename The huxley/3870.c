#include <stdio.h>
#include <string.h>

int main(){
    char str[30];
    char str2[30];
    scanf(" %[^\n]",str);

    int n,i,sLen,pos,count=0,countFinal=0;
    char subStr[30]={};
    char *cPos;

    scanf("%d", &n);
    while(n>0){

        scanf("%s", subStr);
        sLen = strlen(subStr);
        strcpy(str2,str);

        for(i=0;i<sLen;i++){
            cPos = strchr(str2,subStr[i]);
            if(cPos!=NULL){
                count++;
                pos = cPos-str2;
                str2[pos]='.';
            }
        }
        if(count==sLen){
            countFinal++;
            strcpy(str,str2);
        }
        count=0;
        n--;
    }
    printf("E possivel formar %d palavras com esse conjunto", countFinal);
    return 0;
}