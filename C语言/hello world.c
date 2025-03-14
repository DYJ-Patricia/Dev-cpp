#include <stdio.h>

int main ()
{
	int n,j;
	scanf("%d",&n);
	int fact=1;
	int i=1;
    int s=0; 
for (i = 1; i <= n; i++ ) {
	fact=1;
	for(j = 1; j <= i; j++) {
		fact*=j;

    }
    printf("%d!=%d\n",i,fact);
     s+=fact;
     }
     printf("1!+2!+бн+%d!=%d",n,s);
	return 0;
}
