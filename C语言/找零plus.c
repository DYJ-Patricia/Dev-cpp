#include <stdio.h>;

int main ()
{

	// 初始化 
	int price=0, bill=0 ;
	printf("请输入票面：");
	scanf("%d",&bill);
	printf("请输入价格：");
	scanf("%d",&price);
	if (bill-price<0) {
		printf("您的金额不足。\n");
	}  else { 
	printf("找您%d元。\n",bill-price);
	}

    return 0;
}
