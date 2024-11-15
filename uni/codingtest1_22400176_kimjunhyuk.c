#include<stdio.h>

int main(){
    int num[5];
    int i;

    for(i=0; i<5; i++){
        scanf("%d", &num[i]);
    }

    for (i=1; i<5; i++){
        if(num[i]<num[i-1]){
            printf("No\n");
            break;
        }else if(i==4)  printf("Yes\n");
    }
    
}