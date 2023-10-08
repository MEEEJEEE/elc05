#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int input;
    
    printf("Input an integer: ");
    
    // scanf로 정수 입력 받기
    if (scanf("%d", &input) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    // 입력값이 음수일 경우 양수로 변환
    if (input < 0) {
        input = -input;
    }

    // 결과 출력 
    printf("Absolute value is %d\n", input);
    
    return 0;
}
