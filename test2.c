#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
    
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum(int number) {  
    int sum = 0;  
    int i;
    for ( i = 1; i <= number / 2; i++) {  
        if (number % i == 0) {  
            sum += i; 
        }  
    }  
    return sum;  
}  

void PrintPN(int m, int n) {  
    int found = 0,i;   
    for ( i = m; i <= n; i++) {  
        if (factorsum(i) == i) {   
            found = 1;  
            printf("%d = ", i);   
            int j = 1;  
            for (; j <= i / 2; j++) {  
                if (i % j == 0) {  
                    if (j == i / 2) {  
                        printf("%d", j);  
                    } else {  
                        printf("%d + ", j);  
                    }  
                }  
            }  
            printf("\n");  
        }  
    }  
    if (!found) {  
        printf("No perfect number\n");  
    }  
}  


