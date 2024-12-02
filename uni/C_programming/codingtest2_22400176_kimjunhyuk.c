#include<stdio.h>

int main(){
    int num[7];
    int i;
    int max=0, second_max=0;

    for(i=0; i<7; i++){
        scanf("%d", &num[i]);
    }

    for(i=0; i<7; i++){
        if(max<num[i]){
            second_max=max;
            max=num[i];
        }else if(second_max<num[i])  second_max=num[i];
    }

    printf("%d", second_max);
}