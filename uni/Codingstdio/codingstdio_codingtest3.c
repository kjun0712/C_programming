#include <stdio.h>
#include <string.h>
//22400176 김준혁
//나 김준혁은 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.
int main(){
    char word[100];

    scanf("%s", word);
    for(int i = 0; i < 100; i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            if(word[i] == 'z')  word[i] = 'a';
            else word[i]++;

            word[i]-=32;
        }else if(word[i] >= 'A' && word[i] <= 'Z'){
            if(word[i] == 'A')  word[i] = 'Z';
            else word[i]--;

            word[i]+=32;
        }
    }
    printf("%s", word);
}