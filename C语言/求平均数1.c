#include <stdio.h>

int main ()
{
	int number;
	int count=0;
	int sum=0;
	do {
	  printf("������һ�����֣�");
	  scanf("%d",&number);
	  if (number!=-1) {
	  	 count++;
	  	 sum+=number;
	  } 
	} while (number!=-1);
	printf("ƽ������%f\n",1.0*sum/count);
	return 0;
}
