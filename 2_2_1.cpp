#include<iostream>


using namespace std;

/*
*   快速排序：
	1.设k=a[0],将k挪到适当位置，使得比k小的元素都在k左边，
	比k大的元素都在k右边，和k相等的，不关心在k左右出现均可(O(n)时间完成)
	2.把k左边的部分快速排序
	3.把k右边的部分快速排序
*/

void swap(int &a,int &b){
	// 交换变量a,b值
	int tmp = a;
	a = b;
	b = tmp;
}

void QuickSort(int a[],int s,int e){
	if(s >= e)
		return;
	int k = a[s];
	int i = s,j = e;
	while(i != j){
		while(j > i && a[j] >= k)
			--j;
		swap(a[i],a[j]); // a[j]大于k 交换a[i]与a[j] 此时a[j] = k
		while(i < j && a[i] <= k)
			++i;
		swap(a[i],a[j]); // a[i] 大于k 交换a[i]与a[j] 此时a[i] = k
	} // 处理完后，a[i] = k
	QuickSort(a,s,i-1);
	QuickSort(a,i+1,e);
}
int main(){
	int a[10] = {13,27,19,2,8,12,2,8,30,89};
	int size = sizeof(a)/sizeof(int); // 计算数组a的长度
	QuickSort(a,0,size-1);
	for(int i = 0;i < size; ++i)
		cout << a[i] << ",";
	cout << endl;
	
	
	return 0;
}
