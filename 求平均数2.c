#include <stdio.h>

int main ()
{
	int number;
	int count=0;
	int sum=0;
	while (number!=-1) {
	  printf("������һ�����֣�");
	  scanf("%d",&number);
	  count++;
	  sum+=number;
	  } 
	
	printf("ƽ������%f\n",1.0*sum/count);
	return 0;
}
