//문제 4
#include<stdio.h>

int main(){
    int num[6]={1, 2, 3, 4, 5, 6};
    int *ptr=num;
    int changer, i;

    for(i=0; i<3; i++){
        changer=*(ptr+i);
        *(ptr+i)=*(ptr+5-i);
        *(ptr+5-i)=changer;
    }

    for(i=0; i<6; i++)  printf("%d\n", num[i]);
}