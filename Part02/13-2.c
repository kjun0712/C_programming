//문제 2
#include<stdio.h>

int main(){
    int num[5]={1, 2, 3, 4, 5};
    int *ptr=num;
    int i;

    for(i=0; i<5; i++)  *(ptr+i)+=2;

    for(i=0; i<5; i++)  printf("%d\n", num[i]);
}