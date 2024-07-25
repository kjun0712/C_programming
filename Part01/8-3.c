//문제 1
#include<stdio.h>

int main(){
    int n;

    scanf("%d",&n);

    switch (n/10)
    {
    case 0:
        printf("0 < n < 10\n");
        break;

    case 1:
        printf("10 < n < 20\n");
        break;

    case 2:
        printf("20 < n\n");
        break;
    
    default:
        printf("30 < n\n");
    }
}
