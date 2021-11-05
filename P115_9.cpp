#include<iostream>
using namespace std;
/*
P115-9
有一只经过训练的蜜蜂只能爬向右侧相邻的蜂房，不能反向爬行
求 蜜蜂从蜂房a爬到蜂房b的可能路线数 （0 < a < b < 100 ）
*/

// 递归函数
int F(int a, int b) {
	if (b-a <= 2)
		return b-a==2?2:1;
	else
		return F(a+1,b) + F(a+2,b);
}
int main() {
	int x,y;
	cout << "输入x：";
	cin >> x;
	cout << "输入y：";
	cin >> y;
	
	int total;
	total = F(x,y);
	cout << total;
	
	return 0;
}
