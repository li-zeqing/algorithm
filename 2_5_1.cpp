#include<iostream>
#include<string.h>
using namespace std;

/*
    神奇的口袋：从体积分别为a1,a2,...,an的n个物品中凑成体积为m的物品组合
*/
// 动态规划算法
int a[30];
int N;
int Ways[40][30]; //Ways[i][j]表示从前j个物品里凑出体积i的方法数
int main(){
	cin >> N;
	memset(Ways,0,sizeof(Ways));
	for(int i = 1;i <= N;++i){
		cin >> a[i];
		Ways[0][i] = 1; // 边界条件，从前i个物品中凑出0体积的方法数为1
	}
	Ways[0][0] = 1; // 边界条件
	for(int w = 1;w <= 40;++w){
		for(int k = 1;k <= N;++k){
			Ways[w][k] = Ways[w][k-1]; // 不使用第k个物品
			if(w - a[k] >= 0)
				Ways[w][k] += Ways[w-a[k]][k-1]; // 使用第k个物品与不使用第k个物品的方法数
		}
	}
	cout << Ways[40][N];
	return 0;
}
