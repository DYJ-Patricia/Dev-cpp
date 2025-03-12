/*#include <stdio.h>  

int main() {  
    int N, X;  
    scanf("%d %d", &N, &X);  
    
    long long nums[20];   
    for (int i = 0; i < N; i++) {  
        scanf("%lld", &nums[i]);  
    }  
    
    int found = -1;   
    for (int i = 0; i < N; i++) {  
        if (nums[i] == X) {  
            found = i;   
            break;  
        }  
    }  
    
    if (found != -1) {  
        printf("%d\n", found); 
    } else {  
        printf("Not Found\n");  
    }  
    
    return 0;  
}*/



/*#include <stdio.h>  
int main() {  
    int n,i;  
    scanf("%d", &n);  
    int a[n]; 
    for (i = 0; i < n; i++) {  
        scanf("%d", &a[i]);  
    }  
    for ( i = n - 1; i >= 0; i--) {  
        if (i < n - 1) {  
            printf(" "); 
        printf("%d", a[i]);  
    }  
   }
    printf("\n");   
    return 0;  
}*/



/*#include<stdio.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    int a[10],i,k;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(k=i+1;k<n;k++){
            if(a[i]>a[k]){
                temp=a[i];
                a[i]=a[k];
                a[k]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
       if(i>0){
            printf(" ");
       }
        printf("%d",a[i]);
    }
    return 0;
}*/

/* 
#include<stdio.h>
int main(){
    int N,a[10],i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int max=0,min=0,t;
    for(i=0;i<N;i++){
        if(a[i]>a[max]){
            max=i;
        }
        if(a[i]<a[min]){
            min=i;
        }
    }
    if(min!=0){
    	t=a[0];
    	a[0]=a[min];
    	a[min]=t;
	}
	if(max!=N-1){
        if (max == 0) {
            max = min;
        }
    	t=a[N-1];
    	a[N-1]=a[max];
    	a[max]=t;
	}
	

     for(i=0;i<N;i++){
         printf("%d",a[i]);
         printf(" ");
     }
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int N,X,a[10],i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&X);
    int temp=N;
    for(i=0;i<N;i++){
        if(a[i]>X){
            temp=i;
            break;
        }
    }
    for(i=N;i>temp;i--){
        a[i]=a[i-1];
    }
    a[temp]=X;
    for(i=0;i<N+1;i++){
        printf("%d",a[i]);
    }
    return 0;
}*/


/*#include<stdio.h>
int main(){
    int a[20],b[20],result[40],i,k,f,t;
    int cnt=0;
    int N1;
    scanf("%d",&N1);
    for(i=0;i<N1;i++){
        scanf("%d",&a[i]);
    }
    int N2;
    scanf("%d",&N2);
    for(k=0;k<N2;k++){
        scanf("%d",&b[k]);
    }
     for(i=0;i<N1;i++){
         f=1;
         for(k=0;k<N2;k++){
             if(a[i]==b[k]){
                 f=0;
                 break;
             }
         }
         if(f){
             result[cnt++]=a[i];
         }
     }
    for(i=0;i<N2;i++){
         f=1;
         for(k=0;k<N1;k++){
             if(b[i]==a[k]){
                 f=0;
                 break;
             }
         }
         if(f){
             result[cnt++]=b[i];
         }
     }
     for (i = 0; i < cnt; i++) {
        f = 1; 
        for (k= 0; k< i; k++) {
            if (result[i] == result[k]) {
                f = 0; 
                break;
            }
        }
        if (f) {
            if (i >0) {
                printf(" ");
            }
            printf("%d", result[i]);
        }
    }
    return 0;
}*/
/* 
#include<stdio.h>
int main(){
    int N,a[1000],b[1000]={0},i,j,cnt=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int temp;
    for(i=0;i<N;i++){
        temp=a[i];
        for(j=0;j<i;j++){
            if(temp==a[j]){
                b[j]++;
                break;
            }
        }
        if(i==j){
        	b[i]=1;
		}
    }
    int maxcnt=0,maxnum;
     for(i=0;i<N;i++){
         if(b[i]>maxcnt){
             maxcnt=b[i];
             maxnum=a[i];
         }
     }
    printf("%d %d\n",maxnum,maxcnt);
    return 0;
}
*/
//Ñî»ÔÈý½Ç 
#include<stdio.h>
int main(){
	int N,i,j;
	scanf("%d",&N);
	int a[10][10]={0};
	for(i=0;i<N;i++){
		a[i][0]=1;
		a[i][i]=1;
		for(j=1;j<i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N-i-1;j++){
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
            printf("%4d", a[i][j]); 
	}
	printf("\n");
}
return 0;
}






























