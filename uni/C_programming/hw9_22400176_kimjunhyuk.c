#include<stdio.h>

int month_days(int y, int m);
int first_days(int y, int m);
void print_calender(int ndays, int d1);

int main(){
    int y, m, ndays, d1;
    scanf("%d %d", &y, &m);
    ndays=month_days(y, m);
    d1=first_days(y, m);
    print_calender(ndays, d1);
}

int month_days(int y, int m){
    //해당 월의 날짜수
    switch(m){
    case 2:
        if(y%400==0 || y%100!=0 && y%4==0)  return 29;
        else  return 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
        break;
    default:
        return 31;
    }
}

int first_days(int y, int m){
    //해당 월의 1일의 요일
    int sum_days=0;
    int i;
    for(i=1900; i<y; i++){
        if(i%400==0 || i%100!=0 && i%4==0)  sum_days+=366;
        else  sum_days+=365;
    }
    
    for(i=1; i<m; i++){
        switch(i){
        case 2:
            if(y%400==0 || y%100!=0 && y%4==0){
                sum_days+=29;
                break;
            }else{
                sum_days+=28;
                break;
            }
        case 4:
        case 6:
        case 9:
        case 11:  sum_days+=30;
                  break;
        default:  sum_days+=31;
                  break;
        }
    }
    return (sum_days%7+1)%7;
}

void print_calender(int ndays, int d1){
    //달력 출력
    int day[5][7]={0};
    int i, j=0;
    for(i=0; i<ndays; i++){
        if(d1==7){
            d1=0;
            j++;
        }
        day[j][d1]=i+1;
        d1++;
    }

    printf("| Su | Mo | Tu | We | Th | Fr | Sa |\n");
    for(i=0; i<5; i++){
        printf("------------------------------------\n");
        printf("|");
        for(j=0; j<7; j++){
            printf(" %2d |", day[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------------");
}