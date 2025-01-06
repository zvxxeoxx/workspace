#include <stdio.h>

// format
//  - 정수(%d)      → Decimal
//  - 실수(%lf)     → Float
//  - 문자(%c)      → Character
//  - 문자열(%s)    → String

int main() {
    // %d 위치에 10을 출력!
    printf("%d\n", 10);

    // %lf 위치에 3.45를 출력
    //  + 소수점 1번째 자리까지 반올림해서 출력
    printf("%.1lf\n", 3.45);

    printf("%d와 %d의 합은 %d입니다.", 10, 20, 10+20);
}