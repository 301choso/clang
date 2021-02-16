/*
chap05-functions
chap05-function-01.c
*/


#include <stdio.h>
void print(); //선언 declare : 함수의 프로토타입
void printx(int x);
int sum(int value1, int value2);
int minus(int value1, int value2);

void main(void)
{
	printf("main function!\n");
	//printx(10.1f);// 자료소실 발생, 자료형을 일치시켜야 함
	printx(10);
	int result = sum(10, 50); //호출자(caller)
	printx(result);

	int result1 = minus(10, 50); //호출자(caller)
	printx(result1);
}

void printx(int x) 
{
	printf("print function(%d)!\n", x);

}

/*
함수 정의 : 본체, 내용이 기술
*/
void print()
{
	printf("print function!");

}
/*
int sum(int, int)

*/
int sum(int value1, int value2)
{
	int result = value1 + value2;
	return result;

}

int minus(int value1, int value2)
{
	int result1 = value1 + value2;
	return result1;

}
