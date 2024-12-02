#include<stdio.h>
#include<string.h>

int main(){
    char string[50];
    int i, count=1;
    int max=0, max_index;

    scanf("%s", string);
    for(i=1; i<strlen(string); i++){
        if (string[i]==string[i-1]){
            count++;
            if(i==strlen(string)-1){
                max=count;
                max_index=i-1;
            }
        }else{
            if(count>max){
                max=count;
                max_index=i-1;
            }
            count=1;
        }
    }

    printf("%c %d", string[max_index], max);
}