#include <stdio.h>

/*
 * Break: 즉시 반복문을 빠져나가세요
 * Continue: 즉시 다음 반복으로 넘어가세요
 * 
 * 
 */

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
            // 조건문에 참이면 즉시 다음 반복문 for로 넘어가고, 거짓이면 밑에 printf() 실행행
        }
        if (i == 5) {
            break;
        }
        printf("%d\n", i);
    }
}