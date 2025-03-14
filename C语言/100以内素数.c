#include <stdio.h>
int main ()
{
	int x;
	printf("请输入需要从多少到100的素数。\n");
	scanf("%d",&x); 
	for (x=2;x<100;x++)  {
		int i;
		int isPrime=1;
		for(i=2;i<x;i++); {
		   if ( x%i==0)     {
		   	isPrime=0;
		   	break;
		   }
       }	
		if (isPrime==1) {
			printf("%d",x);
		}
	}
	printf("\n");
	return 0;
}
