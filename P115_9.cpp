#include<iostream>
using namespace std;
/*
P115-9
��һֻ����ѵ�����۷�ֻ�������Ҳ����ڵķ䷿�����ܷ�������
�� �۷�ӷ䷿a�����䷿b�Ŀ���·���� ��0 < a < b < 100 ��
*/

// �ݹ麯��
int F(int a, int b) {
	if (b-a <= 2)
		return b-a==2?2:1;
	else
		return F(a+1,b) + F(a+2,b);
}
int main() {
	int x,y;
	cout << "����x��";
	cin >> x;
	cout << "����y��";
	cin >> y;
	
	int total;
	total = F(x,y);
	cout << total;
	
	return 0;
}
