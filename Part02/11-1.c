/*
//문제 1
#include<stdio.h>

int main(){
    int a[5];
    int high=0, low=0, total=0;

    for(int i=0; i<=4; i++){
        scanf("%d",&a[i]);
        if(a[i]>high && i>0 || i==0){
            high=a[i];
        }

        if(a[i]<low && i>0 || i==0){
            low=a[i];
        }
        
        total+=a[i];
    }

    printf("High: %d\nLow: %d\nTotal: %d",high,low,total);
}
*/
//문제 2
#include<stdio.h>

int main(){
    char word[]={'G','o','o','d',' ','t','i','m','e'};

    int size = sizeof(word) / sizeof(char);
    
    for(int i=0; i<size; i++){
        printf("%c",word[i]);
    }
}