#include<stdio.h>
#include<string.h>


char mycpy(char *dst,const char *src)
{
	int idx=0;
	while(src[idx]!='\0'){
		dst[idx]=src[idx];
		idx++;
	}
	dst[idx]='\0';
	return 0;
}
int main(int argc,char const *argv[])
{
	char *src="123";
	char *dst=(char*)malloc(strlen(src)+1);
	mycpy(dst,src);
	printf("%s\n",dst);
	return 0;
}
