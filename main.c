#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    // 1개의 정수 입력
    printf("Input an integer: ");
    scanf("%d", &num);

    // 입력된 숫자가 양수, 음수, 0인지를 판단하여 출력
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}