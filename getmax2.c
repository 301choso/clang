# include <stdio.h>
//�� ���� �Է��Ͽ� ���� ū ���� ���ϴ� ���α׷�(���׿�����) 
void main()
{
	int a,b,c;
	int max;
	
	scanf("%d %d %d", &a, &b, &c);
	
	//����� = (���Ǽ���)? ����1: ����2; 
	
	(a>b)?( (a>c)?(max=a):(max=c) ):( (b>c)?(max=b):(max=c) ); 
	printf("�ִ밪�� %d �Դϴ�.\n",max);
 
}
