#include <stdio.h>
int main ()
{
	printf("������һ���Ǹ�������\n");
	int x;
	scanf("%d",&x);
	int mask=1;
	int t = x; 
	while (t>9) {
		t/=10;
		//cnt++;
		mask *=10;
	} 
	printf ("x=%d,mask=%d\n",x,mask);
	do {
		int d=x/mask;
		printf("%d",d);
		if (mask>9) {
			printf(" ");
		}
		x %=mask;
		mask/=10;
	} while (mask>0);
	printf("\n");
	return 0;
}
