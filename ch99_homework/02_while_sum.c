/*
 * ����: while���� ����ؼ� 1~100������ ���� ����ؼ� Ȧ����, ¦������ ����Ͻÿ�.
 */

#include <stdio.h>

int main() {
    int odd_sum = 0;  // Ȧ�� ��
    int even_sum = 0; // ¦�� ��
    int i = 1;        // ���۰�

    // while�� ����
    while (i <= 100) {
        if (i % 2 == 0) {
            even_sum += i; // ¦���� ���
        } else {
            odd_sum += i;  // Ȧ���� ���
        }
        i++; // i ���� 1 ����
    }

    // ��� ���
    printf("Ȧ�� ��: %d\n", odd_sum);
    printf("¦�� ��: %d\n", even_sum);

    return 0;
}
