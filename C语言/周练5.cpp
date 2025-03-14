//周练5
//#include<bits/stdc++.h>
/*
#include<iostream>
#include<stack>
using namespace std;
const int N = 1e4;
stack<char> stk;
char s[N];
int judge(char ch1,char ch2);
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int cnt1=0,cnt2=0,cnt3=0;
	cin >> s + 1;
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++){
		cnt1=judge(s[i],'(');
		cnt2=judge(s[i],'{');
		cnt3=judge(s[i],'[');
	}
	
	cout<<cnt1<<' '<<cnt2<<' '<<cnt3<<'\n';
	
	return 0;
}
int judge(char ch1,char ch2){
	int f=0,i;
	int cnt=0;
	
	if(ch1==ch2){
		stk.push(ch1);
	}else{
		if(stk.size()&&stk.top()==ch2){
			stk.pop();
			cnt++;
		}
	}

	return cnt;
}

*/
#include <iostream>
#include <stack>
using namespace std;

const int N = 1e4;
stack<char> stk; // 用于存储括号
char s[N]; // 存储输入字符串

int judge(char ch); // 修改为只接受一个字符作为输入

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> (s + 1); // 输入字符串，s[1]开始
    int n; // 字符串长度
    cin >> n; // 输入有效字符数量
    int cnt1 = 0, cnt2 = 0, cnt3 = 0; // 计数器

    for (int i = 1; i <= n; i++) {
        if (s[i] == '(') {
            cnt1++; // 计数左括号
            stk.push(s[i]); // 压入栈
        } else if (s[i] == ')') {
            if (!stk.empty() && stk.top() == '(') {
                cnt1--; // 匹配，减少计数
                stk.pop(); // 弹出栈
            }
        } else if (s[i] == '{') {
            cnt2++; // 计数左大括号
            stk.push(s[i]); // 压入栈
        } else if (s[i] == '}') {
            if (!stk.empty() && stk.top() == '{') {
                cnt2--; // 匹配，减少计数
                stk.pop(); // 弹出栈
            }
        } else if (s[i] == '[') {
            cnt3++; // 计数左中括号
            stk.push(s[i]); // 压入栈
        } else if (s[i] == ']') {
            if (!stk.empty() && stk.top() == '[') {
                cnt3--; // 匹配，减少计数
                stk.pop(); // 弹出栈
            }
        }
    }
    
    cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << '\n'; // 输出结果
    return 0;
}


