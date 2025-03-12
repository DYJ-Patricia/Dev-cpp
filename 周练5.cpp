//����5
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
stack<char> stk; // ���ڴ洢����
char s[N]; // �洢�����ַ���

int judge(char ch); // �޸�Ϊֻ����һ���ַ���Ϊ����

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> (s + 1); // �����ַ�����s[1]��ʼ
    int n; // �ַ�������
    cin >> n; // ������Ч�ַ�����
    int cnt1 = 0, cnt2 = 0, cnt3 = 0; // ������

    for (int i = 1; i <= n; i++) {
        if (s[i] == '(') {
            cnt1++; // ����������
            stk.push(s[i]); // ѹ��ջ
        } else if (s[i] == ')') {
            if (!stk.empty() && stk.top() == '(') {
                cnt1--; // ƥ�䣬���ټ���
                stk.pop(); // ����ջ
            }
        } else if (s[i] == '{') {
            cnt2++; // �����������
            stk.push(s[i]); // ѹ��ջ
        } else if (s[i] == '}') {
            if (!stk.empty() && stk.top() == '{') {
                cnt2--; // ƥ�䣬���ټ���
                stk.pop(); // ����ջ
            }
        } else if (s[i] == '[') {
            cnt3++; // ������������
            stk.push(s[i]); // ѹ��ջ
        } else if (s[i] == ']') {
            if (!stk.empty() && stk.top() == '[') {
                cnt3--; // ƥ�䣬���ټ���
                stk.pop(); // ����ջ
            }
        }
    }
    
    cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << '\n'; // ������
    return 0;
}


