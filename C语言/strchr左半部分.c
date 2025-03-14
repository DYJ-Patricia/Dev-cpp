#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char const *argv[])
{
	char s[]="Hello";
	char *p=strchr(s,'l');
	char c=*p;
	*p='\0';
	char *t=(char*)malloc(strlen(p)+1);
	strcpy(t,s);
	printf("%s\n",t);
	free(t);
	
	return 0 ;
}
