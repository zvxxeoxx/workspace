#include <stdio.h>

/*
 * Parameter(매개변수)
 *  - 함수의 입력값
 *  - 여러 개 사용 가능(, 구분)
 *  - 똑같은 이름의 매개변수는 사용 불가능
 *  - 매개변수를 사용하지 않을 때는 void 사용용
 * 
 * 
 * 
 */

int get_num(void);

int get_num(void) {
    return 5;
}

int main() {
    printf("%d", get_num());
}