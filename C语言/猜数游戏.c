#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand (time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0;
	printf("���Ѿ��뵽��һ��һ��һ��֮�������");
	do {
		printf("��²����������ʲô��\n");
		scanf("%d",&a); 
		count++;
		if (a<number) {
			printf("��С�ˡ�\n");
		} else if (a>number){
			printf("�´��ˡ�\n");
		}
	
	} 	while (a!=number);
	printf("��ϲ�㣬��һ������%d�ξͲ¶����������\n",count);
	return 0;
}
