#include <stdio.h>

int main ()
{
	int number;
	int count=0;
	int sum=0;
	while (number!=-1) {
	  printf("请输入一个数字：");
	  scanf("%d",&number);
	  count++;
	  sum+=number;
	  } 
	
	printf("平均数是%f\n",1.0*sum/count);
	return 0;
}
