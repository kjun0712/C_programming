#include<stdio.h>
#include<string.h>

int main(){
    char password[12];
    int i;
    int alpa_count=0, num_count=0;
    int count=1, max=0, max_index;
    int check=0;

    scanf("%s", password);
    if(strlen(password)<5)  printf("1총 5자리 이상 12자리 이하이어야 합니다.\n");
    else check++;

    for(i=0; i<strlen(password); i++){
        if(password[i]>='a' && password[i]<='z')  alpa_count++;
        if(password[i]>='0' && password[i]<='9')  num_count++;
    }
    if(alpa_count==0 || num_count==0)  printf("2영문자와 숫자를 반드시 포함하여야 합니다.\n");
    else check++;

    for(i=1; i<strlen(password); i++){
        if (password[i]==password[i-1]){
            count++;
            if(i==strlen(password)-1)  max=count;
        }else{
            if(count>max)  max=count;
            count=1;
        }
    }
    //printf("%d", max);
    if(max>=3)  printf("3동일한 문자를 연속으로 3회 이상 사용할 수 없음.\n");
    else check++;

    if(check==3)  printf("4정상적인 password 입니다.\n");
}