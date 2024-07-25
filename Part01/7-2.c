/*
//문제 1
#include<stdio.h>

int main(){
    int a=0;
    int b;
    int result=0;

    while (a<5){
        scanf("%d",&b);
        while (b<1){
            scanf("%d",&b);
        }
        result=result + b;
        a++;
    }
    
    printf("%d",result);
}
*/
//문제 2
#include<stdio.h>

int main(){
    int a=0;
    int b=0;
    while(a<5){
        while(b<a){
            printf("o ");
            b++;
        }
        printf("*\n");
        a++;
        b=0;
    }
}
