#include<iostream>
#include<math.h>
using namespace std;
/*
P115-11
����1*2*3*...*n���õ���ĩβ�ж��ٸ�0����n�ɼ������룬1000 < n < 10000��
*/

int F(int n) {
	// n/pow(5,1) + n/pow(5,2) ... + n/pow(5,i)   �������һ�� n/pow(5,i) > 1
	int i = 1;
	int sum = 0;
	
	while(n/pow(5,i) > 1) {
	sum = sum +n/pow(5,i);
	i++;
	}
	
	return sum;
}

int Find_zero(int n) {
	// ��¼1��n�Բ���Ϊ5�����ж��ٸ�5
	int total = 0;
	for (int i = 5; i <= n; i = i + 5) {
		int j = i;
		
		while(j % 5 == 0){
			total++;
			j = j / 5;
		}
	}
	return total;
}

int main() {
	// P115-11
	int n;
	cout << "����n��";
	cin >> n;
	
	// ����1
	cout << F(n) << endl;
	
	// ����2
	cout << Find_zero(n) << endl;
	
	return 0;
}
