//ѯ���û��������䣬Ȼ���������Ĳ�ͬ���в�ͬ�����
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	
//	printf("����������䣺\n");
//	scanf("%d", &a);
//	if (a > 0 && a < 18)
//		printf("�㻹��δ�����ˣ�Ҫ�ú�ѧϰ");
//	else if (a == 18)
//		printf("�����ǳ�����");
//	else if (a > 18 && a <= 45)
//		printf("���ʱ����Ҫ�ú�Ŭ��");
//	else
//		printf("������������������");
//			
//	return 0;
//}
#include <stdio.h>
int main()
{
	double a, b, c, tmp;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a > c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b > c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("�������ִ�С����Ϊ��%lf,%lf,%lf",a,b,c );
	return 0;
}