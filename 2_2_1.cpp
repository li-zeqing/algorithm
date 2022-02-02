#include<iostream>


using namespace std;

/*
*   ��������
	1.��k=a[0],��kŲ���ʵ�λ�ã�ʹ�ñ�kС��Ԫ�ض���k��ߣ�
	��k���Ԫ�ض���k�ұߣ���k��ȵģ���������k���ҳ��־���(O(n)ʱ�����)
	2.��k��ߵĲ��ֿ�������
	3.��k�ұߵĲ��ֿ�������
*/

void swap(int &a,int &b){
	// ��������a,bֵ
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
		swap(a[i],a[j]); // a[j]����k ����a[i]��a[j] ��ʱa[j] = k
		while(i < j && a[i] <= k)
			++i;
		swap(a[i],a[j]); // a[i] ����k ����a[i]��a[j] ��ʱa[i] = k
	} // �������a[i] = k
	QuickSort(a,s,i-1);
	QuickSort(a,i+1,e);
}
int main(){
	int a[10] = {13,27,19,2,8,12,2,8,30,89};
	int size = sizeof(a)/sizeof(int); // ��������a�ĳ���
	QuickSort(a,0,size-1);
	for(int i = 0;i < size; ++i)
		cout << a[i] << ",";
	cout << endl;
	
	
	return 0;
}
