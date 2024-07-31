//도전 7
#include<stdio.h>

int main(){
    int n=0,result=1,i=0;
    scanf("%d",&n);

    for(i=0;result*2<=n;i++){
        result*=2;
    }
    printf("%d",i);
}