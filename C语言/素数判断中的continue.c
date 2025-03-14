#include <stdio.h>

int main ()
{
		int x=6;
	//scanf("%d",&x);
	int i;
	int isPrime=1;
	for (i=2;i<x;i++) {
		if (x%i==0) {
		  isPrime=0;
		  continue;
		}
		printf("%d\n",i);
	}
	if (isPrime=1) {
		printf("是素数\n");
	} else {
		printf("不是素数\n");
	}
	return 0;
}
