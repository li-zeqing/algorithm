#include <iostream>
using namespace std;

int main(){
	int a = 1,w;
	while(a<54){
		a = a + 5;
//		cout << a << endl;
	}
	int f = 54-(a-5);
	cout << "���������"<< f << "��"<< endl;
	int total = 54;
	total = 54-3;
	while(total >1){
		cout << "�������";
		cin >> w;
		total = total - w;
		cout << "�����" << w << "��" << "  ʣ��" << total << "��" <<endl;
		total = total - (5-w);
		cout << "�������"<< 5-w << "��"<< "  ʣ��" << total << "��" << endl;
	
	}
	cout << "�������ʤ" << endl;
	return 0;
}
