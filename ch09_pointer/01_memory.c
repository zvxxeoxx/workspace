/*
 * 변수: 하나의 값을 저장하는 '메모리 공간'
 *  - 프로그래밍 언어에서는 메모리에 데이터들을 저장
 *  - 메모리는 주소를 가지고 있음(1번지, 2번지, ... , 101번지, ...)
 *  - 1번지마다 1 Byte 크기
 *   (예) 10 Byte 메모리를 사용중
 *      주소 → 0번지 ~ 99번지
 *  - 변수의 자료형에 따라 사용하는 주소의 크기가 다름
 *   (예) char   → 1 Byte   char a = 'A'; / 0번지('A') 저장
 *        short  → 2 Byte   
 *        int    → 4 Byte   int num = 4; / 1~4번지(4) 저장
 *        float  → 4 Byte
 *        double → 8 Byte   double dl = 3.14; / 5~12번지(3.14) 저장
 *  - 변수이름이 동일하더라도 선언된 곳에 따라서 별도의 저장공간 확보
 *  
 *  - 주소 연산자(&): 변수가 할당된 메모리 공간의 시작 주소를 의미 (중요)
 */

#include <stdio.h>

int main() {
    char a;
    int b;
    double c;

    // %u(unsigned): 기호 제거해서 양수만 표현할 수 있게끔 함
    printf("char형 변수의 주소: %u\n", &a);
    printf("int형 변수의 주소: %u\n", &b);
    printf("double형 변수의 주소: %u\n", &c);
}