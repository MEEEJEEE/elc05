#include <stdio.h>

int main(int argc, char *argv[]) {
    char c;
    int num = 0;
    
    printf("Input a string: ");
    
    // 문자열 입력 받기
    while ((c = getchar()) != '\n') {
        // 숫자인지 확인하고 개수 세기
        if (c >= '0' && c <= '9') {
            num++;
        }
    }
    
    printf("The number of digits is %d\n", num);
    
    return 0;
}
