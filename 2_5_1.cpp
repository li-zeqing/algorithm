#include<iostream>
#include<string.h>
using namespace std;

/*
    ����Ŀڴ���������ֱ�Ϊa1,a2,...,an��n����Ʒ�дճ����Ϊm����Ʒ���
*/
// ��̬�滮�㷨
int a[30];
int N;
int Ways[40][30]; //Ways[i][j]��ʾ��ǰj����Ʒ��ճ����i�ķ�����
int main(){
	cin >> N;
	memset(Ways,0,sizeof(Ways));
	for(int i = 1;i <= N;++i){
		cin >> a[i];
		Ways[0][i] = 1; // �߽���������ǰi����Ʒ�дճ�0����ķ�����Ϊ1
	}
	Ways[0][0] = 1; // �߽�����
	for(int w = 1;w <= 40;++w){
		for(int k = 1;k <= N;++k){
			Ways[w][k] = Ways[w][k-1]; // ��ʹ�õ�k����Ʒ
			if(w - a[k] >= 0)
				Ways[w][k] += Ways[w-a[k]][k-1]; // ʹ�õ�k����Ʒ�벻ʹ�õ�k����Ʒ�ķ�����
		}
	}
	cout << Ways[40][N];
	return 0;
}
