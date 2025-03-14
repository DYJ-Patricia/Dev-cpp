/*#include <stdio.h>
int a(int n) {
    int i;
    int result=1;
for (i = 1; i <= n; i++ ) {
    result*=i;
}
    return result; 
}
int main ()
{
	int n,i;
	scanf("%d",&n);

	double fact=0.0;
    //double s=0.0;
for (i = 0; i<= (n-1); i++ ) {
	fact+=1.0/a(i);
     }
    
     printf("%lf",fact);
    
	return 0;
}*/
#include <stdio.h>

/*int main() {
    double n;
    double cost=0.0;
    scanf("%lf",&n);
if(n>=0) {
    if(n<=50.0) {
        cost=n*0.53;
    } else {
        cost=50.0*0.53+(n-50.0)*(0.53+0.05);
    }
    printf("cost = .2%lf",cost);
} else {
    printf("Invalid Value!");
}
    return 0;
}*/
#include <stdio.h>

/*int main () {
    int A,B;
    scanf("%d %d",&A,&B);
    printf("%d + %d= %d\n",A,B,A+B);
    printf("%d - %d= %d\n",A,B,A-B);
    printf("%d * %d= %d\n",A,B,A*B);
    printf("%d / %d= %d\n",A,B,A/B);
    printf("%d %% %d= %d\n",A,B,A%B);
    return 0;
}*/


/*#include <stdio.h>
double fact(int n);
int main () {
    int m,n;
    scanf("%d %d",&m , &n);
    if(m<=n) {
    double result=fact(n)/(fact(m)*fact(n-m));
    printf("result =%.0lf\n",result);
    }
    return 0;
}
double fact(int n) {
    int i;
    double fact=1.0;
    for (i=1;i<=n;i++) {
        fact*=i;
    }
    return fact;
}*/
/*#include <stdio.h>
int main() {
    int n,i,j;
    int num = 1;
    if(scanf("%d", &n)!=EOF) {
      for (i = 0; i < n; i++) {
        for (  j = 1; j <= n-1; j++) {
            printf("%4d", num); 
            num++;
        }
        printf("\n"); 
    }
}
  return 0;
}*/


/*#include <stdio.h>
int main() {
    int n,i,flag;
    scanf("%d",&n);
    if(n<2001 || n>2100) {
        printf("Invalid year!\n");
    }
    for(i=2001;i<=n;i++) {
        if((i%4==0&&i%100!=0)||i%400==0) {
            printf("%d\n",i);
            flag=1;
        } 
    }
    if(!flag) {
            printf("None\n");
    }
    return 0;
}

The warning you are encountering is due to the `scanf` function's return value being ignored. The `scanf` function returns the number of input items successfully matched and assigned, and it's a good practice to check this return value, especially when reading user input. Ignoring it might cause issues if the input is invalid.

Here¡¯s how you could modify your code to handle this warning appropriately:

```c*/
/*#include <stdio.h>
int main() {
    int speed, limit;
    scanf("%d %d", &speed, &limit);

    if (speed <= limit) {
        printf("OK\n");
    } else {
        int exceed_percent = (speed - limit) * 100 / limit;  

        if (exceed_percent >= 50) {
            printf("Exceed %d%%. License Revoked\n", exceed_percent);
        } else if (exceed_percent >= 10) {
            printf("Exceed %d%%. Ticket 200\n", exceed_percent);
        } else {
            printf("OK\n");
        }
    }
    return 0;
}*/

/*#include<stdio.h>
int main() {
    int N,i,A=0,B=0,C=0,D=0,E=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++) {
        int a;
        scanf("%d",&a);
        if (a>=90) {
            A++;
        }else if(a<90 && a>=80) {
            B++;
        }else if(a<80 && a>=70) {
            C++;
        }else if(a<70 && a>=60) {
            D++;
        }else {
            E++;
        }
    }
    printf("%d %d %d %d %d\n",A, B, C, D, E);
    return 0;
}*/

/*#include <stdio.h>  

int main() {  
    int N,i,j;  
    scanf("%d", &N);  
    for ( i = 1; i <= N; i++) {  
        for ( j = 1; j <= i; j++) {  
            printf("%d*%d=%-4d", j, i, j * i);  
        }  
        printf("\n");  
    }  

    return 0;  
}
*/
/*
#include <stdio.h>  
#include <math.h>  
int isArmstrong(int num, int n) {  
    int sum = 0, original = num;  
    while (num) {  
        sum += pow(num % 10, n);  
        num /= 10;  
    }  
    return sum == original;  
}  
int main() {  
    int N;  
    scanf("%d", &N);  

    if (N < 3 || N > 7) {  
        return 0; 
    }  
    int lowerLimit = pow(10, N - 1); 
    int upperLimit = pow(10, N) - 1;   
    for (int num = lowerLimit; num <= upperLimit; num++) {  
        if (isArmstrong(num, N)) {  
            printf("%d\n", num);  
        }  
    }  
    return 0;  
}*/
/*
//version1
#include <stdio.h>  
#include <math.h>  

int f(int n, int N);  

int main () {  
    int N, n;  

    scanf("%d", &N);  
    if (N < 3 || N > 7) {  
        return 0;  
    }  

    for (n = pow(10, N - 1); n < pow(10, N); n++) {  
        if (f(n, N)) {  
            printf("%d\n", n);  
        }  
    }  
    
    return 0;  
}  

int f(int n, int N) {  
    int sum = 0, n1 = n;  
    
    while (n > 0) {  
        sum += (int)pow(n % 10, N); 
        n /= 10;  
    }  
    
    return sum == n1;  
}

//version2
#include <stdio.h>
int f(int n, int N);
int main() {
    int N, n, i;
    scanf("%d", &N);
    if (N < 3 || N > 7) {
        return 0;
    }
    for (n = 1; n < 10; n++) { 
        for (int j = 0; j < pow(10, N - 1); j++) {
            int num = n * pow(10, N - 1) + j; 
            if (f(num, N)) {
                printf("%d\n", num);
            }
        }
    }
    return 0;
}

int f(int n, int N) {
    int sum = 0;
    int original = n; 
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit; 
        n /= 10;
    }
    return sum == original; 
}
*/
/*#include<stdio.h>
#include<math.h>
int f(long long num);
int main () {
    long long N,p,q;
    scanf("%lld",&N);
    for(p=2;p<N;p++) {
        for(q=p;q<N;q++) {
            if (f(p) && f(q) && N==p+q) {
                printf("%lld = %lld + %lld\n",N, p, q);
                goto stop;
            }
        }
        
    }
    stop:
    return 0;
}
int f(long long num) {
    int i;
    for(i=2;i<=sqrt(num);i++) {
        if (num%i==0) {
            return 0;
        }
    }
    return 1;
}*/

/*#include <stdio.h>
#include <math.h>
#include <stdbool.h>


bool is_prime(int num) {
	int i;
    if (num < 2) return false;
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int limit = pow(2, n) - 1; 
    bool found = false;

    int p;
    for ( p = 2; ; p++) {
        int m = pow(2, p) - 1;
        if (m > limit) break; 
        if (is_prime(m)) { 
            printf("%d\n", m);
            found = true;
        }
    }

    if (!found) {
        printf("None\n");
    }

    return 0;
}*/


/*#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int is_prime(int num) {
	int i;
    if (num < 2) return 0;
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int limit = pow(2, n) - 1; 
    bool found = false;

    int p;
    for ( p = 2; ; p++) {
        int m = pow(2, p) - 1;
        if (m > limit) break; 
        if (is_prime(m)) { 
            printf("%d\n", m);
            found = true;
        }
    }

    if (!found) {
        printf("None\n");
    }

    return 0;
}*/



/*#include <stdio.h>
#include <math.h>
double f(double x);
double z(int k);

int main() {
    double x, sum;
    if (scanf("%lf", &x) != 1 || x < 0 || x > 5) {
        return 0;
    }
    
    sum = f(x);
    printf("%.4lf\n", sum); 
    return 0;
}
double f(double x) {
    int k;
    double sum = 0.0, result;

    for (k = 0;; k++) {
        result = pow(x, k) / z(k);
        
        if (result < 0.00001) { 
            break;
        }
        
        sum += result;
    }
    
    return sum;
}
double z(int k) {
	int i;
    double result = 1.0;
    if (k == 0 || k == 1) {
        return 1.0;
}
    for (i = 2; i <= k; i++) {
        result *= i;
    }
    
    return result;
}*/

/*#include <stdio.h>
#include <math.h>

double dist( double x1, double y1, double x2, double y2 );

int main()
{    
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));
    
    return 0;
}

double dist(double x1, double y1, double x2, double y2) {
    double fact;
    fact=sqrt(pow(y2-y1,2)+pow(x2-x1,2));
    return fact;
}*/

/*#include <stdio.h>

int fib( int n );
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", fib(n));

    return 0;
}

int fib(int n){
	int i,a=1,b=1,c;
	if(n==1 || n==2) {
		return 1;
	}
	for(i=3;i<=n;i++) {
		c=a+b;
		a=b;
		b=c;
	}
	return b;
}*/

/*#include<stdio.h>
#include <math.h>
int main()
{
    int i,j,n;
    printf("Please input numbers: ");
    scanf("%d",&n);
    j=(int)sqrt(n);
    for(i=2;i<=j;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(j<i)
      {
        printf("%d is prime!\n",n);
      }
    else
      {
        printf("%d is not prime!\n",n);
      }
     return 0;
}*/
/*#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );
    
int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime(int p) {
    int i,j;
j=sqrt(i);
for(i=2;i<=j;i++) {
	if(p%i==0){
         return 1;
         break;
        }else {
        return 0;
    }  
}

}
int PrimeSum( int m, int n ) {
    int i,j,p,sum=0;
    for(i=m;i<=n;i++) {
        j=sqrt(i);
        for(p=2;p<=j;p++) {
            if(i%p==0){
                sum+=i;
            }
        }
    }
    return sum;
} */
/*int i,j;
j=sqrt(i);
for(i=2;i<=j;i++) {
	if(p%i==0){
         return 1;
         break;
        }else {
        return 0;
    }  
}*/


/*#include <stdio.h>
#include <math.h>
int prime(int p) {
	int i;
    if (p < 2) return 0; 
    if (p == 2) return 1; 
    if (p % 2 == 0) return 0; 
    for ( i = 3; i <= sqrt(p); i += 2) {
        if (p % i == 0) return 0; 
    }
    return 1; 
}

int PrimeSum(int m, int n) {
    int sum = 0,i;
    for ( i = m; i <= n; i++) {
        if (prime(i)) {
            sum += i; 
        }
    }
    return sum;
}

int main() {
    int m, n,p;

    scanf("%d %d", &m, &n);
    
    printf("Sum of ( ");
    for ( p = m; p <= n; p++) {
        if (prime(p)) {
            printf("%d ", p);
        }
    }
    printf(") = %d\n", PrimeSum(m, n)); 

    return 0;
}*/

#include <stdio.h>

void CharPyramid( int n, char ch );

int main()
{    
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);
    
    return 0;
}

void CharPyramid( int n, char ch ) {
    int i,j,k;
    for(i=1;i<=n;i++) {
    	for(k=1;k<=n-i;k++){
    		printf(" ");
		}
        for(j=1;j<=i;j++) {
            printf("%c",ch);
            if(j<i) {
            printf(" ");
        }
            
    }
        printf("\n");
}
}
















