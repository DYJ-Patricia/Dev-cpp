#include <stdio.h>

int main()
{
	int a=0,b=0;
	while (++a>0);
	printf("int���������������%d\n",a-1);
	b++;
	while ((a=a/10)!=0)
	{
		b++;
	}
	printf("int������������������λ�ǣ�%d",b);
	return 0;
}
