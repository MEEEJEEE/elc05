#include <stdio.h>
#include <stdlib.h>

//덧셈프로그램
int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	int i;
	
	printf("Input a number: ");
	scanf("%d", &num);
	
    //for루프의 시작값을 1로 설정하여 1부터 입력된 숫자까지 더함 
	for (i=1; i<=num; i++)
	{
	    sum += i; //sum = sum + i;
    }
	
	printf("The result is %i\n", sum);
	return 0;
}