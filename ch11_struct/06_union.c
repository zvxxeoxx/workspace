/*
 * 구조체를 사용하면 다양한 자료형을 하나로 묶어서 사용 가능 
 * 구조체를 여러 개 만들어 사용하게 되면 메모리 낭비 발생
 *  → 공용체(union)를 사용하면 메모리 낭비 없이 사용 가능!
 * 
 * 공용체(Union)
 *  - 공용체는 모든 멤버가 하나의 저장 공간을 같이 사용
 *  - struct 대신 union 키워드 사용
 *  - 공용체 변수의 크기는 멤버 중 크기가 가장 큰 멤버로 결정
 * 
 * 공용체 사용처
 *  1. 여러 데이터 중 한 번에 하나만 활성화되는 값을 저장할 때 메모리를 절약
 *  2. 여러 형식의 데이터를 처리해야 하는 경우
 *    (하나의 값을 사용하는데 동적으로 자료형이 변하는 경우)
 * 
 */

#include <stdio.h>

union student {
    int num;
    double grade;
};

int main() {
    // 공용체(union) 변수 선언 및 초기화
    //  - 공용체 멤버 중 가장 큰 자료형 → double 8 Byte 저장공간 확보
    //  - num과 grade가 하나의 공간을 공유!
    union student s1 = {315};

    printf("학번: %d\n", s1.num);
    s1.grade = 4.4;
    printf("학점: %.lf\n", s1.grade);
    printf("학번: %df\n", s1.num);
}