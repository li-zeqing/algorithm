#include<iostream>

using namespace std;
/*
*   �鲢����
	1.��ǰһ������
	2.�Ѻ�һ������
	3.������鲢��һ���µ��������飬Ȼ���ٿ�����ԭ���飬�������
	
*/
// �鲢����
void Merge(int a[],int s,int m,int e,int tmp[]){
	//������a�ľֲ�a[s,m]��a[m+1,e]�ϲ���tmp������֤tmp����Ȼ���ٿ�����a[s,m]
	//�鲢����ʱ�临�Ӷȣ�O(e-m+1),��O(n)
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
	for(int i = 0;i < e-s+1; ++i) // ��tmp������ԭ����
		a[s+i] = tmp[i];
}

// �ݹ�鲢
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
	int size = sizeof(a)/sizeof(int); // ��������a�ĳ���
	MergeSort(a,0,size-1,b);
	for(int i = 0;i < size; ++i)
		cout << a[i] << ",";
	cout << endl;
	return 0;
}
