/*
//문제 1
#include<stdio.h>

int main(){
    int a=0,b=0;
    int t=0;

    scanf("%d %d",&a,&b);

    for (int i=a; i<=b; i++)
    {
        t=t+i;
    }
    printf("%d",t);
}
*/
//문제 2
#include<stdio.h>

int main(){
    int n=0;
    int total=1;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        total*=i;
    }

    printf("%d",total);
}
