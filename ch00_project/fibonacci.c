#include <stdio.h>

/*
 * 피보나지 수열 코드 개발 (실기 시험 참고)
 *  - 피보나치 수열이란, 첫째 및 둘째 항이 1이며 그 뒤의 모든 항은 바로 앞 두 항의 합인 수열
 *  - 1, 1, 2, 3, 5, 8, 13, ... 
 */

int main() {
    int a = 1, b = 1;
    int fib;

    printf("%d %d ", a, b);

    // 무한 반복
    // 1 → True, 2 → False
    while(1) {
        
        fib = a + b; // 2
        printf("%d ", fib);
        a = b;
        b = fib;

        if (fib > 13) {
            break;
        }
    }   

}