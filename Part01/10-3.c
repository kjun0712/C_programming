//도전 3
#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    if(a<b){
        for(int i=a; i>=0; i--){
            if(a%i==0 && b%i==0){
                printf("%d",i);
                break;
            }
        }
    }else{
        for(int i=b; i>=0; i--){
            if(a%i==0 && b%i==0){
                printf("%d",i);
                break;
            }
        }
    }
}