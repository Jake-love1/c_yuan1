//询问用户输入年龄，然后根据年龄的不同进行不同输出；
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	
//	printf("请输你的年龄：\n");
//	scanf("%d", &a);
//	if (a > 0 && a < 18)
//		printf("你还是未成年人，要好好学习");
//	else if (a == 18)
//		printf("你已是成年人");
//	else if (a > 18 && a <= 45)
//		printf("这段时间需要好好努力");
//	else
//		printf("即将进入老年人生活");
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
	printf("三个数字从小到大为：%lf,%lf,%lf",a,b,c );
	return 0;
}