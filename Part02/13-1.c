//문제 1
#include<stdio.h>

int main(){
    int num[5]={1, 2, 3, 4, 5};
    int *ptr=num;
    int i;

    for(i=0; i<5; i++){
        *ptr+=2;
        ptr++;
    }

    for(i=0; i<5; i++)  printf("%d\n", num[i]);
}