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
//문제 2  해결못함
#include<stdio.h>

int main(){
    int a=0;
    int result=0;

    do{
        do{
            result+=a;
        } while (a/2==0);
        a++;
    } while (a>=100);
    
    printf("%d", result);
}