#include<iostream>
#include<math.h>
using namespace std;
/*
P115-11
计算1*2*3*...*n所得的数末尾有多少个0？（n由键盘输入，1000 < n < 10000）
*/

int F(int n) {
	// n/pow(5,1) + n/pow(5,2) ... + n/pow(5,i)   其中最后一项 n/pow(5,i) > 1
	int i = 1;
	int sum = 0;
	
	while(n/pow(5,i) > 1) {
	sum = sum +n/pow(5,i);
	i++;
	}
	
	return sum;
}

int Find_zero(int n) {
	// 记录1到n以步长为5，共有多少个5
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
	cout << "输入n：";
	cin >> n;
	
	// 函数1
	cout << F(n) << endl;
	
	// 函数2
	cout << Find_zero(n) << endl;
	
	return 0;
}
