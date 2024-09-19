#include<stdio.h>

int main(){
    int a, b;
    int num;
    scanf("%d %d", &a, &b);
    for(int i=1; i<=b; i++)
        if((a*i)%b==0)
            num=a*i;
    
    printf("%d", num);
}