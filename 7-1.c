/*
//문제 1
#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    int i=0;
    while (i<a){
        printf("Hellow World!\n");
        i++;
    }
}

//문제 2
#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    int i=1;
    while (i<=a){
        printf("%d\n",3*i);
        i++;
    }
}

//문제 3
#include<stdio.h>

int main(){
    int a=1,b;

    while(a==0){
        scanf("%d",&a);
        b+=a;
        a=1;
    }

    printf("%d",b);
}
*/
//문제 4
#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    int i=10;
    while(i<0){
        printf("%d \n",a*i);
        i--;
    }
}