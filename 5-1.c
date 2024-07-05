//문제 1
#include<stdio.h>

int main(){
    int x1, y1, x2, y2;

    printf("좌 상단의 x,y 좌표: ");
    scanf("%d %d",&x1, &y1);
    printf("우 하단의 x,y 좌표: ");
    scanf("%d %d",&x2, &y2);

    printf("두 점이 이루는 직사각형의 넓이는 %d입니다.",(x2-x1)*(y2-y1));
}

//문제 2
#include<stdio.h>

int main(){
    double a,b;
    scanf("%lf %lf",&a, &b);
    printf("%f\n%f\n%f\n%f",a+b,a-b,a*b,a/b);
}

//문제 4
#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("%c: %d",a,a);
}

//문제 5
#include<stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    printf("%c: %d",a,a);
}