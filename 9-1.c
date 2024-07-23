/*
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

//문제 2
#include<stdio.h>

int C(int cel){
    printf("%f",1.8*cel+32);
}

int main(){
    int tem;
    scanf("%d",&tem);

    C(tem);
}
*/
//문제 3  해결못함
#include<stdio.h>

int p(int f, int s){
    printf("%d ", f);
}

int main(){
    int a=0,b=1;
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        p(a,b);
        b+=a;
        a+=b;
    }
}