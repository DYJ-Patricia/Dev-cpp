#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand (time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0;
	printf("我已经想到了一个一到一百之间的数。");
	do {
		printf("请猜猜这个数字是什么。\n");
		scanf("%d",&a); 
		count++;
		if (a<number) {
			printf("猜小了。\n");
		} else if (a>number){
			printf("猜大了。\n");
		}
	
	} 	while (a!=number);
	printf("恭喜你，你一共猜了%d次就猜对了这个数！\n",count);
	return 0;
}
