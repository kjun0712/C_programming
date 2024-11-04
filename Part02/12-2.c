//문제 2
#include<stdio.h>

int main(){
    int num1=10, num2=20;
    int change;
    int *ptr1=&num1;
    int *ptr2=&num2;

    (*ptr1)+=10;
    (*ptr2)-=10;

    change=*ptr1;
    *ptr1=*ptr2;
    *ptr2=change;

    printf("%d %d", *ptr1, *ptr2);
}