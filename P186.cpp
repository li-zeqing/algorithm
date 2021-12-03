#include<iostream>

using namespace std;

/**
* 用分而治之的方法求一组数据的和
*/

int sum_T(int a[],int m,int n){ //计算a数组中下标m到n的数据之和
	if(n-m == 1){
		return a[m] + a[n];
	}
	else if(m == n){
		return a[m];
	}
	// 当数组的数据大于2时，采用二分法求和
	int mid = (m + n)/2;
	return sum_T(a,0,mid) + sum_T(a,mid+1,n);
	
}

int main(){
	int A[5] ={1,2,3,4,5};
	int sum1 = sum_T(A,0,4);
	cout << "运行结果如下";
	cout << sum1;
	
	return 0;
}
