#include <iostream>
using namespace std;

int &plus10(int &r) {
	r += 10;
	return r;
}

int main() {
	int num1 = 10;
	int num2 = plus10(num1);
	cout << num1 << " " << num2 << endl;
	
	return 0;
}
