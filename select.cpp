#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	// ѡ������
	int a[100]; // �洢n����������
	int guess; // �²������
	int flag = 0; // ���ñ�־λ�����ֲ����Ƿ�ɹ�
	int count = 0; // ��¼���ң��²⣩����
	// ÿ��Ĭ�ϲ²���Ϊmid��������[low,hight]���м�
	int low = 0, mid, hight = 99; 
	
	// ��ʼ��
	cout << "1����ʼ��" << endl;
	for (int i = 0; i < 100; i++){
		a[i] = i + 1;
	}
	cout << "2��Ҫ���ҵ�����guess:";
	cin >> guess;
	cout << "3�����ֲ���" << endl;
	// ���ֲ���
	while(low <= hight){
		count++;
		mid = (low + hight)/2;
		cout << "��" << count << "�β��ң�����low=" << low
		<< "  hight=" << hight << "  mid=" << mid << endl;
		if (guess == a[mid]){
			flag = 1;
			cout << "�ɹ������Ҵ�����" << count << endl;
			break;
		}
		if (guess > a[mid]){
			low = mid + 1;
		}
		if (guess < a[mid]){
			hight = mid - 1;
		}
	}
	if(flag == 0)
		cout << "����ʧ�ܣ�" << endl;
	return 0;
}
