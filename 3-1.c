//문제 1
#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d",a-b,a*b);
}

//문제 2
#include<stdio.h>

int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("%dx%d+%d=%d",num1,num2,num3,num1*num2+num3);
}

//문제 3
#include<stdio.h>

int main(){
    int num1;
    scanf("%d",&num1);
    printf("%d",num1*num1);
}

//문제 4
#include<stdio.h>

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d %d",num1/num2,num1%num2);
}

//문제 5
#include<stdio.h>

int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("%d",(num1-num2)*(num2+num3)*(num3%num1));
}