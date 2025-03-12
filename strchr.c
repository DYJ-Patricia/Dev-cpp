#include<stdio.h>
#include<string.h>

int main(int argc,char const *argv[])
{
	char s[]="Hello";
	char *p=strchr(s,'l');
	printf("%s\n",p);
	
	return 0;
}
