/*
//문제 1
#include<stdio.h>

int main(){
    char word[100];
    int len=0;

    scanf("%s",word);

    while(word[len]!=0){
        len++;
    }

    printf("%d",len);
}

//문제 2
#include<stdio.h>

int main(){
    char word[50];
    int len=0,i;

    scanf("%s",word);

    while(word[len]!=0){
        len++;
    }

    for (i=1; i<=len; i++){
        printf("%c",word[len-i]);
    }
}
*/
//문제 3
#include<stdio.h>

int main(){
    char word[50], ascii=0;
    int len=0, i;

    scanf("%s",word);

    while(word[len]!=0){
        len++;
    }

    for(i=0;i<len;i++){
        if(ascii<word[i]){
            ascii=word[i];
        }
    }

    printf("%c",ascii);
}