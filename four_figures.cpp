#include<iostream>

using namespace std;

/*
* 求满足下列条件的4位整数：1.无重复数字 2.千位数字非0 3.能整除它的各位数字和的平方
*/
int main(){
	int count = 0;//记录有多少个符合条件的数
	for (int i = 1; i <= 9; i++){//千位
		for(int j = 0; j <= 9; j++){//百位
  			if(i != j){
  				for(int k = 0; k <= 9; k++){//十位
					if(i != k && j !=k){
						for(int m = 0; m <= 9; m++){//个位
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
	cout << "共有" << count << "个数符合条件";
	return 0;
}
