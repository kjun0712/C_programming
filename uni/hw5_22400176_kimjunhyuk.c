#include<stdio.h>

int main(){
    int dan;
    printf("Select a column of multiplication table : ");
    scanf("%d", &dan);
    for(int i=1; i<10; i++)
        printf("%d * %d = %d\n", dan, i, dan*i);
}