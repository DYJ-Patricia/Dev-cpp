#include <stdio.h>;

int main ()
{
	int hour1, minute1;
	int hour2, minute2;
	printf("请输入时间：");
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	int ih=hour1- hour2;
	int im=minute1-minute2;
	if (im<=0) {
		im=60+im;
		ih -- ;
	}  
	printf("时间差是%d小时%d分钟。\n",ih, im);
	return 0;

}
