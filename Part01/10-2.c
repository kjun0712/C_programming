//도전 2
#include<stdio.h>

int main(){
    int a=0,b=0;
    scanf("%d %d",&a, &b);

    if(a<b){
        for (a=a; a<=b; a++){
            for(int t=1; t<10; t++){
                printf("%d x %d = %d\n",a,t,a*t);
            }
            printf("-------------------\n");
        }
    }else{
        for (b=b; b<=a; b++){
            for(int t=1; t<10; t++){
                printf("%d x %d = %d\n",b,t,b*t);
            }
            printf("-------------------\n");
        }
    }
}