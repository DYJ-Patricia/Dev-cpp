#include <stdio.h>

int main ()
{
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬"
	       "������\"5 7\"��ʾ5Ӣ��7Ӣ�磺");
	int foot;
	int inch;
	scanf("%d %d", &foot, &inch);
	printf("�����%f�� \n",(foot+inch/12.0)*0.3048);
	
	return 0;
}
