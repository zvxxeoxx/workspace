#include <stdio.h>

// while문으로 구구단 2단 출력

int main() {

    printf("for문으로 만든 구구단 2단\n");
    for (int i = 1; i <= 9; i++) {
        printf("2 X %d = %d\n", i, 2*i);
    }

    printf("while문으로 만든 구구단 2단\n");

    int j = 1;  // while은 밖에서 선언해야 함

    while(j <= 9) {
        printf("2 X %d = %d\n", j, 2*j);
        j += 1;
    }
}