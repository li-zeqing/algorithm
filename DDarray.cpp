#include <iostream>

using namespace std;

// 定义求最小值函数
int min(int x, int y) {
	return x < y ? x:y;
}

// 定义螺旋数组函数1
void Spiral_array1(int n) {
	int b[100][100];
	// 数组中各元素的值恰好是其下标i，j离各边距离最小值+1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			b[i][j] = min(min(i,n-i-1), min(j,n-j-1)) + 1;
		}
	}

	// 打印
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << b[i][j];
		}
		cout<<endl;
	}
}
// 定义螺旋数组函数2
void Spiral_array2(int n) {  // 传入n为n*n阶矩阵
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

int main() {
	int n;  // 输入n * n阶的矩阵
	cout << "请输入螺旋数组的阶数n：";
	cin >> n;
	cout << "螺旋数组函数1" << endl;
	Spiral_array1(n); // 调用螺旋数组函数1
	cout << "螺旋数组函数2" << endl;
	Spiral_array2(n); // 调用螺旋数组函数2
}
