/*
//十进制转任意进制 
#include<bits/stdc++.h>
using namespace std; 
int main(){
	int a[1000],k,s,n;
	cin>>n>>k;

	int cnt=0;
	while(n){
		a[++cnt]=n%k;
		n/=k;
	}
	reverse(a+1,a+1+cnt);
	int i;
	for(i=1;i<=cnt;i++){
	cout<<a[i];
	}
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;

    vector<int> a;  // 动态数组
    while (n) {
        a.push_back(n % k);  // 存储余数
        n /= k;
    }

    reverse(a.begin(), a.end());  // 逆序排列

    for (int x : a) {
        cout << x;  // 输出结果
    }

    cout << endl;
    return 0;
}


//任意进制转十进制
#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,k,n;
	long long x=0;
	cin>>k>>n;
	int a[1000];
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=n;i++){
		x=x*k+a[i];
	} 
	cout<<x<<'\n';
	return 0;
}

//十六进制转十进制练习(2020ABCD) 
#include <bits/stdc++.h>
using namespace std;
int main(){
	char a[9]={'2','0','2','1','A','B','C','D'};
	long long s=0;
	int i;
	for(i=0;i<8;i++){
		if(a[i]>='0'&&a[i]<='9'){
			s=s*16+a[i]-'0';
		}else{
			s=s*16+a[i]-'A'+10;
		}
	}
	cout<<s<<'\n';
	return 0;
}

//取巧方法
#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned int x=0x2021ABCD;
	cout<<x<<'\n';
	return 0;
}


//九进制转十进制 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	string s="2022";
	int x=0,i;
	for(i=1;i<=n;i++){
		x=x*9+s[i-1]-'0';
	}
	cout<<x<<'\n';
	return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	
	
	return 0;
}
















