#include<stdio.h>

int main(){
    int list[100]={5, 8, 7, 0, 0, 2, 1, 9, 2, 8, 0, 2, 2, 4, 7, 5, 4, 9, 7, 7, 0, 0, 8, 6, 9, 9, 7, 4, 2, 7, 4, 7, 8, 1,
                    9, 0, 5, 0, 0, 9, 1, 2, 4, 3, 6, 1, 8, 0, 0, 7, 0, 2, 8, 8, 8, 9, 7, 8, 3, 9, 7, 9, 8, 5, 2, 7, 8,
                    7, 0, 0, 6, 1, 2, 2, 4, 8, 3, 4, 1, 5, 1, 1, 7, 1, 1, 8, 0, 8, 6, 5, 9, 5, 4, 7, 1, 8, 6, 1, 5, 6};
    int count=1;
    int longest_num, longest_count=0;

    for(int i=0; i<100; i++){
        if(list[i]==list[i+1]){
            count++;
            if(count>longest_count){
                longest_count=count;
                longest_num=list[i];
            }
        }else
            count=1;
    }
    printf("%d %d", longest_num, longest_count);
}