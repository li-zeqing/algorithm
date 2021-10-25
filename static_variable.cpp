#include <iostream>

using namespace std;

class Student {
	public:
		Student(char *name, int age, float score);
		void show();
	private:
		static int m_total; // ��̬��Ա����
	private:
		char *m_name;
		int m_age;
		float m_score;
};

// ��ʼ����̬��Ա����
int Student::m_total = 0;

Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score) {
	m_total++;  // ������̬��Ա����
}

void Student::show() {
	cout << m_name << "��������" << m_age << "���ɼ���" << m_score << "����ǰ����" << m_total << "��ѧ����" << endl;
}

int main() {
	// ������������
	(new Student("С��", 15, 90)) -> show();
	(new Student("����", 16, 80)) -> show();
	(new Student("�Ż�", 16, 99)) -> show();
	(new Student("����", 14, 60)) -> show();
	
	return 0;
}
