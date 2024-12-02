#include <stdio.h>
//나 김준혁은 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.
int main(){
    int num;
    int x, y;
    int x_max=-100, x_min=100;
    int y_max=-100, y_min=100;

    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        scanf("%d %d", &x, &y);
        if(x > x_max)  x_max = x;
        if(x < x_min)  x_min = x;

        if(y > y_max)  y_max = y;
        if(y < y_min)  y_min = y;
    }

    printf("%d %d", x_max-x_min, y_max-y_min);
}