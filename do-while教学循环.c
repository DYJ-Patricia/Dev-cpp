#include <stdio.h>

int main ()
{
	printf("请输入一个数字：");
	int x;
	int n=0; 
	scanf("%d",&x);
	do {
		n++ ;
		x /=10;
	} while (x>0);
	printf("这个数字有%d位数",n);
	return 0;
}
