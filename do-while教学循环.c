#include <stdio.h>

int main ()
{
	printf("������һ�����֣�");
	int x;
	int n=0; 
	scanf("%d",&x);
	do {
		n++ ;
		x /=10;
	} while (x>0);
	printf("���������%dλ��",n);
	return 0;
}
