#include<stdio.h>
#include<string.h>


char mycpy(char *dst,const char *src)
{
	char* ret=dst;
	while(*src!='\0'){
		*dst=*src;
		dst++;
		src++;
	}
	*dst='\0';
	return ret;
}
int main(int argc,char const *argv[])
{
	char *src="123";
	char *dst=(char*)malloc(strlen(src)+1);
	mycpy(dst,src);
	printf("%s\n",dst);
	return 0;
}
