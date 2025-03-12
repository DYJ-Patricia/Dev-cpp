#include<stdio.h>
#include<string.h>

int main(int argc,char const *argv[])
{
	char *src="123";
	char *dst=(char*)malloc(strlen(src)+1);
	strcpy(dst,src);
	printf("%s\n",dst);
	return 0;
}
