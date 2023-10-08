#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int input;
	
	printf("Input an integer : ");
	
	//정수가 아닌 값을 입력받았을때 에러 표시
	if (scanf("%d", &input) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
	if (input < 0)
	    input = -input;

	    
	printf("Absolute value is %d\n", input);
	
	return 0;    
	
}