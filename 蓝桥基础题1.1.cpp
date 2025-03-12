/* 
 
//一 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int sum=0;
	
	for(i=1;i<=n;i++){
        int temp=i;
        bool valid=false;
        while(temp){
            int d=temp%10;
            if(d==2||d==0||d==1||d==9){
                valid=true;
                break;
            }
            temp/=10;
        }
        if(valid)sum+=i;
        }
	cout<<sum<<'\n';
	return 0;
}

//二 
#include<bits/stdc++.h>
using namespace std;
bool f(int x){
	while(x){
	int y = x%10;
	if(y==2||y==0||y==1||y==9)return true;
	x/=10;
}
return false;
}
int main(){
	int n,i;
	cin>>n;
	int sum=0;
	
	for(i=1;i<=n;i++){
		if(f(i)) sum+=i;
}
	cout<<sum<<'\n';
	return 0;
}

//模拟三道题
 
//1.扫雷
#include<bits/stdc++.h>
using namespace std;
const int N=150;
int a[N][N],b[N][N];
int main(){
	int n,m,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j];
			b[i][j]=0;
		}
	}
		int _i, _j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]==1){
				b[i][j]=9;
				continue;
			}
			for(_i=max(1,i-1);_i<=min(n,i+1);_i++){
		for(_j=max(1,j-1);_j<=min(m,j+1);_j++){
			if(a[_i][_j]==1){
				b[i][j]++;
			}
		}
	}
}
}
	
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cout<<b[i][j]<<' ';		
			}
			cout<<'\n';
	}
	return 0;
}


//2.扫雷亲戚排水管
 
#include<bits/stdc++.h>
using namespace std;
const int N=120;
bool a[N][N],b[N][N];
int main(){
	int n,m,t;
	cin>>n>>m;
	cin>>t;
    int i,j,k;
	
	for(i=1;i<=t;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=1;
	}
	
	cin>>k;
	while(k--){
	 for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]){
				b[i][j]=b[i-1][j]=b[i+1][j]=b[i][j-1]=b[i][j+1]=1;
			}
		}
	}
	for(i=1;i<=n;i++){
     	for(j=1;j<=m;j++){
     		a[i][j]=b[i][j];
		 }
	 }
}
     

    int cnt=0;
    for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]){
				cnt++;
			}
		}
	}
	cout<<cnt<<'\n';
	
	return 0;
}


//3.回文日期
#include<bits/stdc++.h>
using namespace std;
int s2i(string s){
	int ret=0;
	int i;
	for(i=0;i<s.length();i++){
		ret=ret*10+s[i]-'0';
	}
	return ret;
}

string i2s(int x,int w){
	string ret;
	while(x){
		ret+=(x%10)+'0';
		x/=10;
	}
	while(ret.length()<w){  //特别注意一下 
		ret+='0';
	}
	reverse(ret.begin(),ret.end());
	return ret;
}
bool isleapyear(int year){
	
	return(year%4==0&&year%100!=0||year%400==0);
}

bool isok(int year,int month, int day){
	int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(isleapyear(year)){
		days[2]=29;
	}
	return day<=days[month];
}

bool isPa1(string s){
	int i;
	for(i=0;i<s.length()/2;i++){
		if(s[i]!=s[s.length()-i-1])return false;
	}
	return true;
}

bool isPa2(string s){
	if(!isPa1(s))return false;
	return s[0]==s[2]&&s[1]==s[3];
}
int main(){
	string s;
	cin>>s;
	int year=s2i(s.substr(0,4)),month=s2i(s.substr(4,2)),day=s2i(s.substr(6,2));
	bool ans1=false,ans2=false; //注意一下 
	int i,j,k;
	for(i=year;i<=9999;i++){
		for(j=1;j<=12;j++){
			if(i==year&&j<month)continue;
			for(k=1;k<=31;k++){
			if(i==year&&j==month&&k<=day)continue;
			if(!isok(i,j,k))continue;
			string date=i2s(i,4)+i2s(j,2)+i2s(k,2);
			if(!ans1&&isPa1(date)){
				cout<<date<<'\n';
				ans1=true;
			}	
			if(!ans2&&isPa2(date)){
				cout<<date<<'\n';
				ans2=true;
			}
			if(ans1&&ans2)return 0;
			}
		}
	}
	return 0;
}

 
 //递归
 
#include<bits/stdc++.h>
using namespace std; 

const int N=1e5+9;
const long long p=1e9+7;
long long fib(int x){
	if(x<=2)return 1;
	return (fib(x-1)+fib(x-2))%p;
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<fib(i)<<'\n';
	}
	return 0;
}
 */
//带备忘录的递归
#include<bits/stdc++.h>
using namespace std; 

const int N=1e5+9;
const long long p=1e9+7;
long long dp[N];
long long fib(int x){
	if(dp[x])return dp[x];
	if(x<=2)return 1;
	return dp[x]=(fib(x-1)+fib(x-2))%p;
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<fib(i)<<'\n';
	}
	return 0;
}

