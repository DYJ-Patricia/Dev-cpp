#include <stdio.h>

int main ()
{
	int x;
	int digit;
	int ret =0;
	printf("������һ�����֣�\n");
	scanf("%d",&x);
	while(x>0) {
	digit=x%10;
	ret=ret*10+digit;
	x/=10;
}
	printf("%d\n",ret);
	return 0;
}
