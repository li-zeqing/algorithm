#include <iostream>
using namespace std;

int main(){
	int a = 1,w;
	while(a<54){
		a = a + 5;
//		cout << a << endl;
	}
	int f = 54-(a-5);
	cout << "计算机先拿"<< f << "张"<< endl;
	int total = 54;
	total = 54-3;
	while(total >1){
		cout << "玩家输入";
		cin >> w;
		total = total - w;
		cout << "玩家拿" << w << "张" << "  剩余" << total << "张" <<endl;
		total = total - (5-w);
		cout << "计算机拿"<< 5-w << "张"<< "  剩余" << total << "张" << endl;
	
	}
	cout << "计算机获胜" << endl;
	return 0;
}
