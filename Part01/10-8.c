//도전 8
#include<stdio.h>

int num=1;

int result(int r){
    if(r==0){
        printf("%d",num);
    }else{
        num*=2;
        result(r-1);
    }
}

int main(){
    int a=0;
    scanf("%d",&a);

    result(a);
}