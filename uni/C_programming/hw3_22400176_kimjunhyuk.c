#include<stdio.h>

int main(){
    int y, m, d;
    int c;
    scanf("%d %d %d", &y, &m, &d);

    if(d==28)
        c=1;
    else if (d==30)
        c=2;
    else if (d==31)
        c=3;
    
    switch (c){
    case 1:
        if(m==2){
            m+=1;
            d=1;
        }else
            d++;
        break;
    
    case 2:
        if(m==4 || m==6 || m==9 ||m==11){
            m++;
            d=1;
        }else
            d++;
        break;
    
    case 3:
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10){
            m++;
            d=1;
        }else if(m==12){
            y++;
            m=1;
            d=1;
        }
        break;
    
    default:
        d++;
        break;
    }

    printf("%d %d %d", y, m, d);
}