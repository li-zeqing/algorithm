#include <iostream>
using namespace std;

class Address;  //��ǰ����Address��

//����Student��
class Student {
	public:
		Student(char *name, int age, float score);
	public:
		void show(Address *addr);
	private:
		char *m_name;
		int m_age;
		float m_score;
};

//����Address��
class Address {
	public:
		Address(char *province, char *city, char *district);
	public:
		//��Student������ΪAddress�����Ԫ��
		friend class Student;
	private:
		char *m_province;   //ʡ��
		char *m_city;   //����
		char *m_district;   //����������
};

//ʵ��Student��
Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score) {
}
void Student::show(Address *addr) {
	cout << m_name << "�������� " << m_age << "���ɼ��� " << m_score << endl;
	cout << "��ͥסַ��" << addr->m_province << "ʡ" << addr->m_city << "��" << addr->m_district << "��" << endl;
}

//ʵ��Address��
Address::Address(char *province, char *city, char *district) {
	m_province = province;
	m_city = city;
	m_district = district;
}

int main() {
	Student stu("С��", 16, 95.5f);
	Address addr("����", "����", "����");
	stu.show(&addr);
	
	Student *pstu = new Student("����", 16, 80.5);
	Address *paddr = new Address("�ӱ�", "��ˮ", "�ҳ�");
	pstu -> show(paddr);
	
	return 0;
}
