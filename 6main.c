#include <stdio.h>
#include <stdlib.h>


int main() {
    int answer = 59; // 정답 숫자를 지정:59
    int num; // 사용자 입력을 저장할 변수
    int trial = 0; // 시도 횟수를 저장할 변수

    do {
        printf("Guess the number: ");
        scanf("%d", &num);
        trial++; // 시도 횟수 증가 
        
/*답과 큰지/작은지 여부를 판단하고 메시지 출력*/

            //입력값이 정답보다 클때
        if (num > answer) {
            printf("Too high! Try again.\n"); 
            //입력값이 정답보다 작을때
        } else if (num < answer) {
            printf("Too low! Try again.\n");  
        } else {
            printf("Congratulations! You guessed the number in %d trial.\n", trial);
        }
    } while (num != answer); // 정답을 맞출 때까지 반복

    return 0;
}
