/*
//문제 1
#include<stdio.h>

int main(){
    int a=1;
    int result=0;

    while (a!=0){
        scanf("%d",&a);
        result+=a;
    }
    printf("%d",result);
}
*/
//문제 2
#include<stdio.h>

int main(){
    int a=0;
    int result=0;
    int c=0;
    do{
        result+=a;
        a+=2;
    } while (a<=100);
    
    printf("%d", result);
}
/*
//문제3
#include<stdio.h>

int main(){
    int a=2;
    int b=0;
    
    do
    {
        b=1;
        do
        {
            printf("%d\n",a*b);
            b++;
        } while (b<10);
        a++;
    } while (a<10);
}
*/