//10.1 
#include <stdio.h> 
#define MAXN 100
int count=0;
void select (int a[],int option,int value);
void input_array (int a[]);
void output_array (int a[]);
void insert(int a[], int value);
void remove_element(int a[], int value);
void query(int a[], int value);
int main () {
	int a[MAXN], option, value;
	input_array(a);
	printf("[1] Insert\n");
	printf("[2] Remove\n");
	printf("[2] Query\n");
	printf("[Other option] End\n");
	while (1) {
		printf("Input option:");
		scanf("%d",&option); 
		if (option<1||option>3) {
			break;
		}
		printf("Input an element:");
		scanf("%d",&value);
		select (a,option,value);
		printf("\n");
	}
	printf("Thanks.");
	return 0;
}
void select (int a[],int option,int value) {
	switch (option) {
		case 1:
			insert(a, value);
			break;
		case 2:
			remove_element(a, value);
			break;
		case 3:
			query(a, value);
			break;
	}
}
void input_array (int a[]) {
	int i;
	printf("Input the number of array elements:");
	scanf("%d",&count);
	printf("Input an ordered array element:");
	for (i=0;i<count;i++) {
		scanf("%d",&a[i]); 
	}
}
void output_array (int a[]) {
	int i;
	printf("The ordered array a is:");
	for (i=0;i<count;i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
}
void insert(int a[],int value) {
	int i, j;
	for (i=0;i<count;i++) {
		if (value<a[i]) {
			break;
		}
	}
	for (j=count-1;j>=i;j--) {
		a[j+1]=a[j];
	}
	a[i]=value;
	count++;
	output_array(a);
}
void remove_element (int a[],int value) {
	int i, index=-1;
	for (i=0;i<count;i++) {
		if(a[i]==value) {
			index=i;
			break;
		}
	}
	if (index==-1) {
		printf("Failed to find the data,deletion failed.");
	} else {
		for (i=index;i<count-1;i++) {
			a[i]=a[i+1];
		}
		count--;
		output_array(a);
	}
}
void query(int a[],int value) {
	int mid,left=0,right=count-1;
	while (left<=right) {
		mid=(left+right)/2;
		if(value==a[mid]) {
			printf("The index is:%d",mid);
			return;
		} else if (value<a[mid]) {
			right=mid-1;
		} else {
			left=mid+1;
		}
	}
	printf("This element does not exist.");
}





















