#include <stdio.h>
void fruit(int count);

//

void fruit(int count) {
    printf("apple\n");
     // count가 3이 되면 return 하세요
    if(count == 3) {
        return;
    }
    fruit(count + 1);   // 재귀함수, (매개변수로 count값을 받아감) 재귀를 하면 할 수록 count값이 달라짐
    printf("jam\n");
}

int main() {
    fruit(1);
}

