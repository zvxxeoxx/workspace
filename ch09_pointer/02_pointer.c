/*
 * 포인터(pointer)
 * - 변수의 "메모리 주소"를 저장하는 변수
 * - 포인터도 변수이기 때문에 사용하기 전에 선언 필수! (*p → 포인터 변수)
 * - 변수 앞에 *(아스테리스크트) 붙임
 * - 초기화 시에는 포인터 변수의 실제 주소에 값을 저장하는 걸 의미함
 *  (예) *p = 100; (*p → 포인터 변수의 실제 주소에 100 값 저장)
 * 
 * 포인터 사용할 시 주의할 점
 *  1. 반드시 초기화하고 사용할 것!
 *     int num; // 일반 변수 선언
 *     int *p; // 포인터 변수 선언
 *     p = &num; // 포인터 변수 초기화(num변수의 시작 주소를 포인터 변수에 저장)
 *     *P = 100; // 포인터 변수 P에 저장된 주소에 100 값을 대입 (num=100 동일)
 *  2. 포인터가 아무것도 가리키지 않은 경우 NULL(0) 설정
 *   - NULL은 <stdio.h>에서 정수 0으로 정의
 *   - 주소 0을 액세스하면 시스템에서 자동적으로 오류 감지
 *   - 포인터 사용하기 전 NULL 체크(유효성 체크) 추가하면 더 안전한 코드 개발 가능
 *  ※ 객체지향언어 → 객체(참조 변수) → 주소(메모리)
 *   - name = "ccw"; // [python] String(문자열형) → 객체자료형
 *  3. 포인터 자료형 변수의 자료형은 일치해야 함
 *   - 자료형이 다르면 값의 손실이 생길 수 있음
 */

#include <stdio.h>

int main() {
    int a;          // 일반 변수 a 선언
    int *pa;        // 포인터 변수 pa 선언

    /*
    int *pa = NULL;     
    if (pa!= NULL) {    // 유효성 체크(NULL 체크)

    }
    */

    // pa → 포인터 변수
    // &a → a변수의 시작 주소
    pa = &a; // 포인터 변수 pa에 10번지(주소) 저장


    // *pa(간접참조연산자): 포인터 변수 pa의 저장된 주소에 99 값을 저장
    //  - 포인터가 가리키는 위치의 값을 추출
    //  - () 다음으로 높은 우선순위를 가짐 → 다른 연산자보다 먼저 실행됨
    *pa = 99;

    // *pa == a 동일
    printf("포인터로 a 출력: %d\n", *pa);
    printf("변수로 a 출력: %d\n", a);

}