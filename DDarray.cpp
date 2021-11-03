#include <iostream>

using namespace std;

// ��������Сֵ����
int min(int x, int y) {
	return x < y ? x:y;
}

// �����������麯��1
void Spiral_array1(int n) {
	int b[100][100];
	// �����и�Ԫ�ص�ֵǡ�������±�i��j����߾�����Сֵ+1
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			b[i][j] = min(min(i,n-i-1), min(j,n-j-1)) + 1;
		}
	}

	// ��ӡ
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << b[i][j];
		}
		cout<<endl;
	}
}
// �����������麯��2
void Spiral_array2(int n) {  // ����nΪn*n�׾���
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

int main() {
	int n;  // ����n * n�׵ľ���
	cout << "��������������Ľ���n��";
	cin >> n;
	cout << "�������麯��1" << endl;
	Spiral_array1(n); // �����������麯��1
	cout << "�������麯��2" << endl;
	Spiral_array2(n); // �����������麯��2
}
