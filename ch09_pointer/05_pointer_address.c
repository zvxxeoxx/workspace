/*
 * 주소와 포인터
 *  - 주소는 상수
 *  - 포인터는 변수
 *  ※ 상수는 대입연산자 좌측항에 사용 불가
 *   (예) 100(실제 숫자) = 'A'; (X)
 *        *pa(주소 100) = 'A'; (O)
 * 
 *   (EX)
 *     int a, b;    // a 주소 100번지, b 주소 200번지
 *     int *p;
 *     p = &a; (O)
 *     p = &b; (O)
 *     ※ a와 b의 주소는 바뀌지 않음
 *      - 포인터는 a와 b 어떤 주소를 대입하느냐에 따라 달라짐(변수)
 *     &a = &b; (X)
 *     ※ 주소(&a)는 상수이기 때문에 좌측항 사용 불가!
 *      
 *     두 포인터가 같은 주소 저장
 *      - 하나의 변수를 동시에 가리키는 것 가능능
 *     int a;
 *     int *pa, *pb;
 *     pa = pb = &a;
 *     printf("%d", *pb);
 *     
 * ※ 포인터의 크기는 저장할 주소의 크기에 따라 결정
 * ※ 크기가 클수록 넓은 범위의 메모리 사용 가능
 * ※ 포인터의 크기는 컴파일러에 따라 다를 수 있음
 * ※ 모든 주소와 포인터는 가리키는 자료형과 상관없이 크기가 동일함
 * 
 * 
 * 
 */

#include <stdio.h>

int main() {
    char ch;        // 1 Byte
    int in;         // 4 Byte
    double db;      // 8 Byte
    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("int형 변수의 주소 크기: %d\n", sizeof(&in));
    printf("double형 변수의 주소 크기: %d\n", sizeof(&db));


    printf("char형 변수의 주소 크기: %d\n", sizeof(pc));
    printf("int형 변수의 주소 크기: %d\n", sizeof(pi));
    printf("double형 변수의 주소 크기: %d\n", sizeof(pd));

    printf("char *포인터가 가리키는 변수의 크기: %d\n", sizeof(*pc));
    printf("int *포인터가 가리키는 변수의 크기: %d\n", sizeof(*pi));
    printf("double *포인터가 가리키는 변수의 크기: %d\n", sizeof(*pd));

}