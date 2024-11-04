//문제 3
#include<stdio.h>

int main(){
    int num[5]={1, 2, 3, 4, 5};
    int *ptr=num+4;
    int sum=0, i;

    for(i=0; i<5; i++)  sum+=*(ptr-i);

    printf("%d", sum);
}