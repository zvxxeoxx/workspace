/*
 * 문제: while문을 사용해서 1~100까지의 값을 사용해서 홀수합, 짝수합을 계산하시오.
 */

#include <stdio.h>

int main() {
    int odd_sum = 0;  // 홀수 합
    int even_sum = 0; // 짝수 합
    int i = 1;        // 시작값

    // while문 실행
    while (i <= 100) {
        if (i % 2 == 0) {
            even_sum += i; // 짝수인 경우
        } else {
            odd_sum += i;  // 홀수인 경우
        }
        i++; // i 값을 1 증가
    }

    // 결과 출력
    printf("홀수 합: %d\n", odd_sum);
    printf("짝수 합: %d\n", even_sum);

    return 0;
}
