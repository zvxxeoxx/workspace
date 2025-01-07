/*
 * 형 변환(Casting)
 *  1. 프로모션(small type → big type)
 *   - 문제 없음(일반저그올 자동으로 형 변환)
 *    (예) int값 → double값
 *  2. 캐스팅(big type → small type)
 *   - 값의 손실이 생김
 * 
 */

#include <stdio.h>

int main() {
    // 1. 프로모션
    double res;
    res = 5;
    printf("%.1lf", res);

    // 2. 캐스팅
    double pi = 3.14;
    int a;
    a = (int)pi;
    printf("%.2lf, %d", pi, a);

}