/*#include<stdio.h>
int main(){
	char s[10];
	scanf("%[^\n]",s);
	printf("%s",s);
	return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	double a,b;
	cin>>a>>b;
	cout<<fixed<<setprecision(3)<<a<<' '<<b<<'\n';
	return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
const int N=10;
char s[N];
int main(){
	int i;
	cin>>s+1;
	//cout<<s+1;
	for(i=1;s[i];i++){
		cout<<s[i]<<'\n';
	}
	return 0;
}
*/
//string���÷� 
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1="Hello";
	string str2="World";
	int length=str1.length();
	string result1=str1+", "+str2;
	string result2=str1.append(", ").append(str2);
	cout<<result1<<endl;
	cout<<result2<<endl;
	string str=result1;
	size_t pos=str.find("World");
	if(pos!=-1){
		cout<<"Position is:"<<pos<<endl;
	}else{
		cout<<"Position not found."<<endl;
	}
	string str5=str;
	str5.replace(7,5,"Universe");
	cout<<str5<<endl;
	return 0;
}
*/

//string�����ֱ��� 
/* 
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="Cambridge";
	int i;
	for(i=0;i<s.length();i++){
		cout<<s[i];
	}
	cout<<'\n';
	for(auto &i : s){
		cout<<i;
		i='d';
	}
	cout<<'\n';
	cout<<s<<'\n';
	
	return 0;
}
*/
//��ת�ַ� 
//�ⷨһ��
/* 
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int i;
	for(i=(int)s.length()-1;i>=0;i--){
		cout<<s[i];
		
	}
	return 0;
}
*/
//�ⷨ������reverse 
/* 
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	reverse(a.begin(),a.end());
	cout<<a<<'\n';
	return 0;
}
*/

//�ⷨ����
#include<bits/stdc++.h>
using namespace std;
int main(){
	string b;
	getline(cin,b);
	int i;
	for(i=0;i<b.length()/2;i++){
		swap(b[i],b[b.length()-i-1]);
	}
	cout<<b<<'\n';
	return 0;
} 


