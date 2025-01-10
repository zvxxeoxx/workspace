#include <stdio.h>

// 재귀함수: 자기자신을 호출하는 함수

void fruit(void);

void fruit(void) {
    printf("apple");
    fruit();    // 재귀함수(한 번 더 또 쓰기)
}

int main() {
    fruit();
}