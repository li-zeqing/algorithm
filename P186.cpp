#include<iostream>

using namespace std;

/**
* �÷ֶ���֮�ķ�����һ�����ݵĺ�
*/

int sum_T(int a[],int m,int n){ //����a�������±�m��n������֮��
	if(n-m == 1){
		return a[m] + a[n];
	}
	else if(m == n){
		return a[m];
	}
	// ����������ݴ���2ʱ�����ö��ַ����
	int mid = (m + n)/2;
	return sum_T(a,0,mid) + sum_T(a,mid+1,n);
	
}

int main(){
	int A[5] ={1,2,3,4,5};
	int sum1 = sum_T(A,0,4);
	cout << "���н������";
	cout << sum1;
	
	return 0;
}
