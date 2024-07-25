//도전 6
#include<stdio.h>

int h=0,m=0,s=0;
int t=0;

int hour(int t){
    if(t/3600!=0){
        h+=t/3600;
    }
}

int minute(int t){
    if(t/60!=0){
        m+=t/60;
    }
}

int main(){
    printf("second : ");
    scanf("%d",&t);

    hour(t);
    t-=3600*h;

    minute(t);
    t-=60*m;

    s=t;

    printf("%d : %d : %d",h,m,s);
}