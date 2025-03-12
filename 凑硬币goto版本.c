#include <stdio.h>
int main ()
{
	int x;
	int one,two,five;
	scanf ("%d",&x);
	for(one=1;one<10*x;one++) {
		for(two=1;two<10*x/2;two++) {
			for(five=1;five<10*x/5;five++) {
				if(one*1+two*2+five*5==x*10){
					printf("可以用%d个一角，%d个两角和%d个五角凑成%d元\n",one,two,five,x);
					goto out;
				}
			}
		}
	}
	out:
	return 0;
}
