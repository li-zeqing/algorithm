#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	// 选择问题
	int a[100]; // 存储n个有序数字
	int guess; // 猜测的数字
	int flag = 0; // 设置标志位，区分查找是否成功
	int count = 0; // 记录查找（猜测）次数
	// 每次默认猜测数为mid，既区间[low,hight]的中间
	int low = 0, mid, hight = 99; 
	
	// 初始化
	cout << "1、初始化" << endl;
	for (int i = 0; i < 100; i++){
		a[i] = i + 1;
	}
	cout << "2、要查找的数字guess:";
	cin >> guess;
	cout << "3、二分查找" << endl;
	// 二分查找
	while(low <= hight){
		count++;
		mid = (low + hight)/2;
		cout << "第" << count << "次查找，其中low=" << low
		<< "  hight=" << hight << "  mid=" << mid << endl;
		if (guess == a[mid]){
			flag = 1;
			cout << "成功！查找次数：" << count << endl;
			break;
		}
		if (guess > a[mid]){
			low = mid + 1;
		}
		if (guess < a[mid]){
			hight = mid - 1;
		}
	}
	if(flag == 0)
		cout << "查找失败！" << endl;
	return 0;
}
