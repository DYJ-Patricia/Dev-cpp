#include <stdio.h>;

int main ()
{

	// ��ʼ�� 
	int price=0, bill=0 ;
	printf("������Ʊ�棺");
	scanf("%d",&bill);
	printf("������۸�");
	scanf("%d",&price);
	if (bill-price<0) {
		printf("���Ľ��㡣\n");
	}  else { 
	printf("����%dԪ��\n",bill-price);
	}

    return 0;
}
