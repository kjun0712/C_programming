#include<stdio.h>

int main(){
    int a=11, b=7;
    int money;
    scanf("%d", &money);

    while (1){
        if(money%a==0 || money%b==0)  money=0;
        
        if(money%a < money%b)  money-=a;
        else if(money%a > money%b)  money-=b;
        
        if(money<b)  break;
    }
    
    printf("%d", money);
}