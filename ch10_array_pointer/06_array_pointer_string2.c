#include <stdio.h>

int main() {
    // ���� ���ڿ� ���� �� char[]�迭
    // ���� ���ڿ� ���� �� ������ ����
    // �̰� ������ ���̳�? ~> ��. "apple" �� 'a'�� �����ּҷ� �����ϴϱ�

    // ���� �̰� �迭�� ���� ���� �ʾƵ�
    // char fruit[6] = "apple"; �� ���ڿ��� ���� �迭�� ���� �ʾƵ� �����Ϸ��� ���ڿ��� char[]�� �����ؼ� ������
    //                          �� ���� ���ڿ��� ���ڿ��� ù ������ �ּҸ� ������
    char *dessert = "apple"; // ���ڿ��� ���� �迭�� ���� ���� ����

    printf("���� �Ľ��� %s�Դϴ�.\n", dessert); // ������ ���� �ּҰ� *dessert�� ��������ϱ� �װ� �����Ͷ�...?
    dessert = "banana"; // ���� ����
    printf("���� �Ľ��� %s�Դϴ�.\n", dessert);

    // ���� ���ڿ� ����� ���� �� ����� ��
    // "grape" ���ڿ��� �޸𸮿� �����ϰ� �� �ּҸ� �����ϵ��� ��
    //  - ��, ���� �� ����ص� ���ڿ��� 1���� �����
    // �� ��ü������� ���ڿ��� ��ü�� �����ϰ�, ���� ���ڿ��� ȣ���� ��� ��ü�� �����ؼ� ����ϵ��� ��
    
    char *pa = "grape";
    char *pb = "grape";
    char *pc = "grape";
}