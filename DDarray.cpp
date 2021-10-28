#include <iostream>

using namespace std;

int main() {
	int n;  // 输入n * n阶的矩阵
	cin >> n;
	int a[100][100];
	int k = 0; // 记录当前处在哪一圈
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if(i+j <= n+1)// 处在哪一圈
                k = i < j ? i:j;    // 次上三角
			else
				k = (n-i+1) < (n-j+1) ? (n-i+1):(n-j+1);    // 次下三角
			a[i][j] = k;
		}
	}
	
	// 打印
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j];
		}
		cout<<endl;
	}
}
