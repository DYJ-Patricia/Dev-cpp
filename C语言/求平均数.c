#include <stdio.h>

int main () 
{
	printf("请输入两个数字：");
	int a, b;
	scanf("%d %d", &a , &b);
	double c=(a+b)/2;
	printf("%d和%d的平均数是%f\n",a,b,c);
	return 0;
	
}
