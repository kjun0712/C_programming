#include<stdio.h>

int main(){
    int num_adult;
    int num_child;
    int pay=0;

    scanf("%d %d", &num_adult, &num_child);

    if(num_adult>=10){
        pay+=10000*10*(num_adult/10)*0.8;
        if(num_adult%10+num_child>=10){
            pay+=(10000*(num_adult%10)+5000*10*(num_child/10))*0.8+5000*((num_child-(num_adult%10))%10);
        }else  pay+=10000*(num_adult%10)+5000*num_child;
    }else  pay+=10000*num_adult+5000*num_child;

    printf("%d", pay);
}