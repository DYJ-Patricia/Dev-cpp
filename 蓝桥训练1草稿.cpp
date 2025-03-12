/*
#include<stdio.h>
int main(){
	int x=(49+1)*49/2-(6+1)*6/2;
	printf("%d",x);
	return 0;
}
*/

#include<stdio.h>
#include<math.h>

const long long M=2333;
const long long N=233333333333;
int a[N];
bool _is(long long x){
	int i;
	for(i=2;i<sqrt(x)+1;i++){
		if(x%i==0){
			return false;
		}
		continue;
	}
	return true;
}
int main(){
	long long x,p,q;
	int cnt=0;
	for(x=M;x<=N;x++){
		for(p=3;p<sqrt(x)+1;p++){
			for(q=3;q<sqrt(x)+1;q++){
				if(_is(p)&&_is(q)){
					if(x==pow(p,2)*pow(q,2)){
						cnt++;
					}
				}
			}
		}
	}
	printf("%d",cnt);
	return 0;
}
