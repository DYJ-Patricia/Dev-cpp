#include<iostream>
#include<vector>
#include <algorithm>
#include <iomanip>
const int N = 1e4;
int a[N];
using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int i;
	int n;
	double sum=0,result=0;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >>a[i];
		sum += a[i];
	}
	result = 1.0 * sum / n;
	cout << "���ֵΪ" << *max_element(a + 1, a + n + 1) << '\n';
	cout << "��СֵΪ" << *min_element(a + 1, a + n + 1) << '\n';
	cout << "ƽ��ֵΪ" << fixed << setprecision(2) << result << '\n';
	return 0;

}
