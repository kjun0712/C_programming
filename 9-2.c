#include<stdio.h>

int addtotal(int num){
    static int total=0;
    total+=num;
    return total;
}

int main(){
    int num;
    int many;
    printf("Times of addition : ");
    scanf("%d",&many);

    for(int i=1; i<=many; i++){
        printf("number%d: ",i);
        scanf("%d", &num);
        printf("Total is %d\n",addtotal(num));
    }
}