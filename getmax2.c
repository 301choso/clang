# include <stdio.h>
//세 수를 입력하여 가장 큰 값을 구하는 프로그램(삼항연산자) 
void main()
{
	int a,b,c;
	int max;
	
	scanf("%d %d %d", &a, &b, &c);
	
	//결과값 = (조건수식)? 수식1: 수식2; 
	
	(a>b)?( (a>c)?(max=a):(max=c) ):( (b>c)?(max=b):(max=c) ); 
	printf("최대값은 %d 입니다.\n",max);
 
}
