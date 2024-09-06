#include<stdio.h>
#include<windows.h>
#include<time.h>

int main(){
    while(1){
        int year=time(NULL)/365/24/60/60+1970;
        int month=(time(NULL)/24/60/60)%12;//문제
        int day=(time(NULL)/356*12/24/60/60)%30;;
        int hour=(time(NULL)/365/60/60)%24;
        int min=(time(NULL)/365/24/60)%60;//문제
        int sec=time(NULL)%60;
        printf("%d : %d : %d : %d : %d : %d\n", year, month, day, hour, min, sec);
        Sleep(1000);
    }
}