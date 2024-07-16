/*
//문제 1
#include<stdio.h>

int main(){
    for (int i = 1; i < 100; i++){
        if (i%7==0 || i%9==0){
            if(i%7==0 && i%9!=0){
                printf("7 x n = %d\n",i);
            }else if(i%7!=0 && i%9==0){
                printf("9 x n = %d\n",i);
            }else{
                printf("7 x 9 x n = %d\n",i);
            }
        }
    } 
}

//문제 2
#include<stdio.h>

int main(){
    int a,b;

    scanf("%d %d",&a, &b);

    if(a>=b){
        printf("a-b=%d",a-b);
    }else if(a<=b){
        printf("b-a=%d",b-a);
    }
}

//문제 3
#include<stdio.h>

int main(){
    int k,e,m,a;

    scanf("%d %d %d",&k,&e,&m);
    a=(k+e+m)/3;

    if (a>=90){
        printf("A");
    }else if(a>=80){
        printf("B");
    }else if(a>=70){
        printf("C");
    }else if(a>=50){
        printf("D");
    }else{
        printf("F");
    }
}
*/
//문제 4
#include<stdio.h>

int main(){
    int a,b;
    int result;

    scanf("%d %d",&a, &b);

    result= (a>b) ? a-b : b-a;

    printf("%d",result);
}