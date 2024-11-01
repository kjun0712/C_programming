#include<stdio.h>
#include<string.h>

int main(){
    char string[50];

    scanf("%s", string);
    int count=strlen(string);
    for(int i=0; i<strlen(string); i++){
        for(int j=i; j<strlen(string); j++){
            if((string[i]==string[j] || string[i]==string[j]+32) && i!=j){
                count--;
                break;
            }
        }
    }

    printf("%d", count);
}