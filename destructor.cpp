#include <iostream>
using namespace std;

class VLA{
	public:
		VLA(int len);   // ���캯��
		~VLA();     // ��������
	public:
		void input();   // �ӿ���̨��������Ԫ��
		void show();    // ��ʾ����Ԫ��
	private:
		int *at(int i); // ��ȡ��i��Ԫ�ص�ָ��
	private:
		const int m_len; // ���鳤��
		int *m_arr; // ����ָ��
		int *m_p;   // ָ�������i��Ԫ�ص�ָ��
};

VLA::VLA(int len): m_len(len) { // ʹ�ó�ʼ���б����� m_len��ֵ
	if (len > 0) {
		m_arr = new int[len]; // �����ڴ�
	} else{
		m_arr = NULL;
	}
}

VLA::~VLA() {
	delete[] m_arr; // �ͷ��ڴ�
}

void VLA::input() {
	for (int i = 0; m_p = at(i); i++) {
		cin >> *at(i);
	}
}

void VLA::show() {
	for (int i = 0; m_p = at(i); i++) {
		if (i == m_len - 1) {
			cout << *at(i) << endl;
		} else {
			cout << *at(i) << ",";
		}
	}
}


int * VLA::at(int i) {
	if (!m_arr || i < 0 || i >= m_len) {
		return NULL;
	} else {
		return m_arr + i;
	}
}

int main() {
	// ����һ����n��Ԫ�ص����飨����
	int n;
	cout << "Input array length:";
	cin >> n;
	VLA *parr = new VLA(n);
	// ��������Ԫ��
	cout << "Input " << n << " numbers:";
	parr -> input();
	// �������Ԫ��
	cout << "Elements: ";
	parr -> show();
	// ɾ�����飨����
	delete parr;
	
	return 0;
}
