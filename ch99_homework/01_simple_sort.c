#include <stdio.h>

// 3개의 수를 입력받고, 큰 숫자로 정렬해서 출력하는 프로그램

/*
int main() {
    // 고정 코드
    int num1 = 20, num2 = 10, num3 = 50;
    
    // 고정 코드
    printf("%d > %d > %d", num1, num2, num3);
}
*/

int main() {
    // 고정 코드
    int num1 = 20, num2 = 10, num3 = 50;
    
    int min, med, max;

    //min = num2;  // 10 → num3
    //med = num1;  // 20 → num2
    //max = num3;  // 50 → num1

    if (num3 > num1 && num3 > num2) {
      max = num3;
    }
    if (num2 < num1 && num2 < num3) {
      min = num2;
    }
    if (num1 < num3 && num1 > num2) {
      med = num1;
    }

    num1 = max;
    num2 = med;
    num3 = min;

    // 고정 코드
    printf("%d > %d > %d", num1, num2, num3);
}