#include<iostream>

using namespace std;

/*
* ����������������4λ������1.���ظ����� 2.ǧλ���ַ�0 3.���������ĸ�λ���ֺ͵�ƽ��
*/
int main(){
	int count = 0;//��¼�ж��ٸ�������������
	for (int i = 1; i <= 9; i++){//ǧλ
		for(int j = 0; j <= 9; j++){//��λ
  			if(i != j){
  				for(int k = 0; k <= 9; k++){//ʮλ
					if(i != k && j !=k){
						for(int m = 0; m <= 9; m++){//��λ
							if(m != i&&m != j&&m !=k){
								int temp = i*1000 + j*100 + k*10 + m;
								int sum = (i+j+k+m)*(i+j+k+m);
								if(temp%sum == 0){
									cout << temp << endl;
									count++;
								}
							}
						}
	 				}
				}
			}
		}
	}
	cout << "����" << count << "������������";
	return 0;
}
