#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num%2==0){
        for(int i=0; i<num; i++){
            for (int j=0; j<num; j++){
                if(i==0 || i==num-1)
                    printf("*");
                else if(j==0 || j==num-1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }else{
        for(int i=0; i<num/2+1; i++){
            for (int j=0; j<num; j++){
                if(j<num/2-i || j>num/2+i)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
    }
}