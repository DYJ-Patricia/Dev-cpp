#include<stdio.h>
enum color {green,red,blue};
int main(int argc,char const *argv[])
   
{
	int color=-1;
	char *colorname=NULL;
	printf("What is the code of your favorite color?\n ");
	scanf("%d",&color);
	switch (color) {
	case green : colorname="green"; break;
	case red : colorname="red"; break;
	case blue : colorname="blue"; break;
	default : colorname="unknown";break;
	
	}
	printf("Your favorite color is %s\n",colorname);
	
	return 0 ;
	
	
}
