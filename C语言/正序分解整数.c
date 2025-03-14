#include <stdio.h>
int main ()
{
	printf("请输入一个非负整数。\n");
	int x;
	int t=0;
	scanf("%d",&x);
	//演示草稿如下： 
	//x=13425;
	//  13425/10000 = 1
	//  13425%10000 = 3425
	//  10000/10    =1000
	//  3425/1000   =3
	//  3425%1000   =425
	//  1000/10     =100
	//  425/100     =4
	//  425%100     =25
	//  100/10      =10
	//  25/10       =2
	//  25%10       =5
	//  10/10       =1
	//  5/1         =5
	//  5%1         =5
	//  1/10        =0
	//先计算x的位数cnt（后面不需要了）顺带得出mask 
	int cnt=0;
	int mask=1;
	t = x; 
	//t用来保持x不变 
	//得把do-while改成while才能算1之类的数 
	while (t>9) {
		t/=10;
		//cnt++;
		mask *=10;
	} 
	printf ("x=%d,mask=%d\n",x,mask);
	//printf("cnt=%d\n",cnt);
	//int mask=10000; 
	//do {
	//	int d=x%10;
	//	t=t*10+d;
	//	x/=10;
	//} while (x>0);
	//printf("x=%d,t=%d\n",x,t);
	//x=t;
	do {
		int d=x/mask;
		printf("%d",d);
		if (mask>9) {
			printf(" ");
		}
		x %=mask;
		mask/=10;
		//printf("x=%d,mask=%d,d=%d\n",x,mask,d);
		//上行可以拿来看每次循环的各数据 
	} while (mask>0);
	printf("\n");
	return 0;
}
