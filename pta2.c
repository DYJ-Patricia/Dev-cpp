/*#include <stdio.h>

int CountDigit( int number, int digit );
    
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

int CountDigit( int number, int digit ) {
    int count=0;
    if(number<0) {
    	number=-number;
	} 
    while(number>0){
        if(number%10==digit){
            count+=1;
        }
        number/=10;
    }
    return count;
}*/

//空心金字塔 
/*#include <stdio.h>

void hollowPyramid ( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}

void hollowPyramid ( int n ) {
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
      if(i==1){
      	printf("%d",i);
	  }else if(i==n){
	  	for(k=1;k<=2*i-1;k++){
	  		printf("%d",i);
		  }
	  }else{
	  	printf("%d",i);
	  	for(k=1;k<=2*(i-1)-1;k++){
	  		printf(" ");
		  }
		  printf("%d",i);
	  }
	  printf("\n");
    }
}*/

//泰勒展开 
#include <stdio.h>
#include <math.h>

double funcos(double e, double x) {
    double term = 1.0;
    double sum = term;
    int n = 1;

    while (fabs(term) >= e) {
        term *= -x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }
    return sum;
}

int main() {    
    double e, x;
    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    return 0;
}


