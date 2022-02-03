#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
/*
    求最长子序列的长度
    动态规划
    “人人为我”递推型动态规划
*/
const int MAXN = 1010;
int a[MAXN];
int maxLen[MAXN];
int main(){
	int N;
	cin >> N;
	for(int i = 1;i <= N;++i){
		cin >> a[i]; //输入序列
		maxLen[i] = 1; //赋初值为1
	}
	for(int i = 2;i <= N;++i){
		//每次求以第i个数为终点的最长上升子序列的长度
		for(int j = 1;j < i;++j)
		// 查看以第j个数为终点的最长上升子序列
		if(a[i] > a[j])
			maxLen[i] = max(maxLen[i],maxLen[j] + 1);
	}
	cout << * max_element(maxLen + 1,maxLen + N + 1);
	return 0;
}//时间复杂度O(n^2)
