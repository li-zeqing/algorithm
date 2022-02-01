#include<iostream>

using namespace std;
/*
*   归并排序：
	1.把前一半排序
	2.把后一半排序
	3.把两半归并到一个新的有序数组，然后再拷贝回原数组，排序完成
	
*/
// 归并函数
void Merge(int a[],int s,int m,int e,int tmp[]){
	//将数组a的局部a[s,m]和a[m+1,e]合并到tmp，并保证tmp有序，然后再拷贝回a[s,m]
	//归并操作时间复杂度：O(e-m+1),既O(n)
	int pb = 0;
	int p1 = s,p2 = m+1;
	while(p1 <= m && p2 <= e){
		if(a[p1] < a[p2])
			tmp[pb++] = a[p1++];
		else
			tmp[pb++] = a[p2++];
	}
	while(p1 <= m)
		tmp[pb++] = a[p1++];
	while(p2 <= e)
		tmp[pb++] = a[p2++];
	for(int i = 0;i < e-s+1; ++i) // 将tmp拷贝回原数组
		a[s+i] = tmp[i];
}

// 递归归并
void MergeSort(int a[],int s,int e,int tmp[]){
	if(s < e){
		int m = s + (e-s)/2;
		MergeSort(a,s,m,tmp);
		MergeSort(a,m+1,e,tmp);
		Merge(a,s,m,e,tmp);
	}
}


int a[10] = {13,27,19,2,8,12,2,8,30,89};
int b[10];
int main(){
	int size = sizeof(a)/sizeof(int); // 计算数组a的长度
	MergeSort(a,0,size-1,b);
	for(int i = 0;i < size; ++i)
		cout << a[i] << ",";
	cout << endl;
	return 0;
}
