#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int a[N];


//buble
/*
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,i,j;
	cin>>n;
  for(i=1;i<=n;i++){
	cin>>a[i];
   }
	for(i=n;i>=1;i--){
		for(j=1;j<=i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for(i=1;i<=n;i++){
	cout<<a[i]<<' ';
}
cout<<'\n';
	return 0;
}

//select

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,i,j;
	cin>>n;
  for(i=1;i<=n;i++){
	cin>>a[i];
   }
   for(i=n;i>=1;i--){
   	int max_id=1;
   	for(j=1;j<=i;j++){
   		if(a[j]>a[max_id]){
   			max_id=j;
		   }
		   swap(a[i],a[max_id]);
	   }
	   
   }
	for(i=1;i<=n;i++){
	cout<<a[i]<<' ';
}
cout<<'\n';
	return 0;
}

//insert

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,i,j;
	cin>>n;
  for(i=1;i<=n;i++){
	cin>>a[i];
   }
   for(i=2;i<=n;i++){
   	int val=a[i];
   	for(j=i;j>1&&val<a[j-1];j--){
   		a[j]=a[j-1];
	   }
	   a[j]=val;
   }
	for(i=1;i<=n;i++){
	cout<<a[i]<<' ';
}
cout<<'\n';
	return 0;
}

//quicksort

int partition(int a[],int l,int r);
void quicksort(int a[],int l,int r);

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,i,j;
	cin>>n;
  for(i=1;i<=n;i++){
	cin>>a[i];
   }
   quicksort(a,1,n);
   
	for(i=1;i<=n;i++){
	cout<<a[i]<<' ';
}
cout<<'\n';
	return 0;
}

int partition(int a[],int l,int r){
	int pivot=a[r];
	int i=l,j=r;
	while(i<j){
		while(i<j&&a[i]<=pivot)i++;
		while(i<j&&a[j]>=pivot)j--;
		if(i<j)swap(a[i],a[j]);
		else swap(a[i],a[r]);
	}
	return i;
}

void quicksort(int a[],int l,int r){
	if(l<r){
	int mid=partition(a,l,r);
	quicksort(a,l,mid-1);
	quicksort(a,mid+1,r);
}
	
}*/
//mergesort
int b[N];
int mergesort(int a[],int l,int r){
	int i;
	if(l==r)return 0;
	int mid=(l+r)/2;
	mergesort(a,l,mid);
	mergesort(a,mid+1,r);
	int pl=l,pr=mid+1,pb=l;
	while(pl<=mid||pr<=r){
		if(pl>mid){
			b[pb++]=a[pr++];
		}else if(pr>r){
			b[pb++]=a[pl++];
		}else{
			if(a[pl]<a[pr])b[pb++]=a[pl++];
			else b[pb++]=a[pr++];
		}
	}
	for(i=1;i<=r;i++)a[i]=b[i];
	return 0;
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,i,j;
	cin>>n;
  for(i=1;i<=n;i++){
	cin>>a[i];
   }
   mergesort(a,1,n);
   
	for(i=1;i<=n;i++){
	cout<<a[i]<<' ';
}
cout<<'\n';
	return 0;
}

