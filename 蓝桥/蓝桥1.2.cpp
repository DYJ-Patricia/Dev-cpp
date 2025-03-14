//sort…˝–Ú“ª 
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100];
	int i;
	int n;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(i=1;i<=n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v={5,1,3,9,11};
	sort(v.begin(),v.end());
	int i;
	for(auto i : v) cout<<i<<' ';
	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int> v = { 5,1,3,9,11 };
	sort(v.begin(), v.end());
	int i;
	for (auto i : v) cout << i << ' ';
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool cmp(const int &u, const int &v) {
	return u > v;
}
int main() {
	vector<int> v = { 2,0,0,6,4,8 };
	sort(v.begin(), v.end(), cmp);
	int i;
	for (i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
const int N=100;
int a[N];
bool cmp(const int &u, const int &v){
	return u>v;
}
int main(){
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(i=1;i<=n;i++){
		cout<<a[i]<<'\n'[i==n];
	}
	for(i=n;i>=1;i--){
		cout<<a[i]<<'\n'[i==1];
	}
	return 0;
}
 

