#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
/*
    ��������еĳ���
    ��̬�滮
    ������Ϊ�ҡ������Ͷ�̬�滮
*/
const int MAXN = 1010;
int a[MAXN];
int maxLen[MAXN];
int main(){
	int N;
	cin >> N;
	for(int i = 1;i <= N;++i){
		cin >> a[i]; //��������
		maxLen[i] = 1; //����ֵΪ1
	}
	for(int i = 2;i <= N;++i){
		//ÿ�����Ե�i����Ϊ�յ������������еĳ���
		for(int j = 1;j < i;++j)
		// �鿴�Ե�j����Ϊ�յ�������������
		if(a[i] > a[j])
			maxLen[i] = max(maxLen[i],maxLen[j] + 1);
	}
	cout << * max_element(maxLen + 1,maxLen + N + 1);
	return 0;
}//ʱ�临�Ӷ�O(n^2)
