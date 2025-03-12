/* 一 #include <stdio.h>
void swap(int*pa ,int*pb);
int main(void)
{
	int a=5;
	int b=6;
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	
	return 0;
	
}

void swap (int *pa,int *pb)
{
	int t = *pa;
	*pa=*pb;
	*pb=t;
}*/

/*   二#include <stdio.h>
void maxmin(int a[],int len,int *max,int *min);
int main (void)
{
	int a[]={2,0,0,6,0,4,0,8,18.10,46};
	int max, min;
	maxmin(a,sizeof(a)/sizeof(a[0]),&max,&min);
	printf("min=%d,max=%d\n",min,max);
	return 0 ;
}
void maxmin(int a[],int len,int *max,int *min) {

	int i;
	*max=*min=a[0];
	for(i=1;i<=len;i++) {
		if(a[i]<*min) {
			*min=a[i];
		}
		if(a[i]>*max) {
			*max=a[i]; 
		}
	}
}*/

//三，将字符串转化为整数输出 

/*#include <stdio.h>
int atoi(char s[]);
int main(void) {
	char s[]="13579";
	printf("%d\n",atoi(s));
	return 0 ;
}
int atoi(char t[]) {
	int n=0;
	int i;
	for(i=0;t[i]>='0'&&t[i]<='9';++i) {
		n=10*n+(t[i]-'0');
		
	}
	return n;
	
} */

// 四，递增减删除hello中的l 
/*#include <stdio.h>
void selfdelete(char a[],int c);
int main (void) {
	char s[]="hello";
	selfdelete(s,'l');
	printf("%s\n",s);
	return 0;
} 
void selfdelete(char a[],int c) {
	int i,j;
	for (i=j=0;a[i]!='\0';i++) {
		if (a[i]!=c) {
			a[j++] = a[i];
		}
	}
	a[j]='\0';
}
*/


//五，strcat的函数表达
 






