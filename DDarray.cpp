#include <iostream>

using namespace std;

int main() {
	int n;  // ����n * n�׵ľ���
	cin >> n;
	int a[100][100];
	int k = 0; // ��¼��ǰ������һȦ
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if(i+j <= n+1)// ������һȦ
                k = i < j ? i:j;    // ��������
			else
				k = (n-i+1) < (n-j+1) ? (n-i+1):(n-j+1);    // ��������
			a[i][j] = k;
		}
	}
	
	// ��ӡ
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j];
		}
		cout<<endl;
	}
}
