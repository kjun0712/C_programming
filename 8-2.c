/*
//문제 1
#include<stdio.h>

int main(){
    for(int i=1;i<=8;i++){
        if(i%2==1){
            continue;
        }else{
            for(int k=1;k<=i;k++){
                printf("%d x %d = %d\n",i,k,i*k);
            }
        }
    }
}
*/
//문제 2
#include<stdio.h>

int main(){
    for(int A=0;A<10;A++){
        for(int Z=0;Z<10;Z++){
            if((A+Z)*10+A+Z==99){
                printf("A : %d, Z : %d\n",A,Z);
            }
        }
    }
}