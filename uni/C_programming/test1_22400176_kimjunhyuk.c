#include<stdio.h>

int main(){
    int a, b;
    int add_time;
    scanf("%d %d %d", &a, &b, &add_time);

    a+=add_time/60;
    b+=add_time%60;

    if (b>=60){
        a++;
        b=b%60;
    }
    if(a>=24) a-=24;
    
    printf("%d %d", a, b);
}