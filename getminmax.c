# include <stdio.h>
//정수 3개를 입력해서 최대값과 최소값 구하기 
void main()
{
	int a,b,c;
	int max,min;
	
	a=10;
	b=25;
	c=40;
	
	if(a>b){
		if(a>c){
			max = a;
		}
		else{
			max = c; 
		}
	}
	else{
		if(b>c) {
			max = b;
		}
		else{
			max = c;
		}
	 } 
	
	if(a<b){
		if(a<c){
			min = a;
		}
		else{
			min = c; 
		}
	}
	else{
		if(b<c) {
			min = b;
		}
		else{
			min = c;
		}
	 } 
	printf("최대값은 %d 입니다.\n",max);
	printf("최소값은 %d 입니다.\n",min); 
}
