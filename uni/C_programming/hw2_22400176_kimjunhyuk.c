#include<stdio.h>

int main(){
    int num1, num2, num3;
    int c=0;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1%6==0)
        c++;
    
    if (num2%6==0)
        c++;
    
    if (num3%6==0)
        c++;
    
    printf("%d", c);
}