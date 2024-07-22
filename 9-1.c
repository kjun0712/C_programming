//문제 1
#include<stdio.h>

int number(int a, int b, int c){
    if(a>b && a>c){
        if(b>c){
            printf("high : %d, low : %d",a,c);
        }else{
            printf("high : %d, low : %d",a,b);
        }
    }else if(b>a && b>c){
        if(a>c){
            printf("high : %d, low : %d",b,c);
        }else{
            printf("high : %d, low : %d",b,a);
        }
    }else if(c>b && c>a){
        if(a>b){
            printf("high : %d, low : %d",c,b);
        }else{
            printf("high : %d, low : %d",c,a);
        }
    }
}

int main(){
    int num1, num2, num3;
    scanf("%d %d %d",&num1, &num2, &num3);

    number(num1, num2, num3);
}