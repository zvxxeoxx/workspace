#include <stdio.h>

// 구조체 선언 및 정의
struct vision {
    double left;
    double right;
};

// 함수 선언
struct vision exchange(struct vision robot);

// 함수 정의
struct vision exchange(struct vision robot) {
    double temp;
    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;
    return robot;
}

int main() {
    struct vision robot;

    printf("시력: ");
    scanf("%lf %lf", &(robot.left), &(robot.right));

    robot = exchange(robot);
    printf("변경 후 시력: %.1lf %.1lf", robot.left, robot.right);
}