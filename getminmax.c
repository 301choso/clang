# include <stdio.h>
//���� 3���� �Է��ؼ� �ִ밪�� �ּҰ� ���� �� 
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
	printf("�ִ밪�� %d �Դϴ�.\n",max);
	printf("�ּҰ��� %d �Դϴ�.\n",min); 
}
