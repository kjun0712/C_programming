//도전 4
#include<stdio.h>

int main(){
    int b=500, s=700, c=200;
    int money;
    printf("How much do you have? : ");
    scanf("%d",&money);

    for(int bread=1;bread<7;bread++){
        for(int snake=1; snake<5; snake++){
            for(int cola=1; cola<17; cola++){
                if(b*bread+s*snake+c*cola==money){
                    printf("Bread : %d , Snake : %d , Cola : %d\n",bread,snake,cola);
                }
            }
        }
    }
}