#include<iostream>

using namespace std;

/**
	由西向东出发，并且东西方向上是单向的，只能就西向东，并且有对应的路径分值，-100到100之间，
	南北方向上是双向的且没有分值 可以由任意路口出发和结束。
	计算分值和最大的路线。
	分析：依据规则知道 入口为西 出口可以为南、北、东。
*/
int max3(int a,int b,int c){
	int m = a>b?a:b;
	return c>m?c:m;
}
int main(){
	int A[5][3]={{-23,-8,-45},{-30,-43,34},{36,-34,-43},{-47,-19,-3},{-50,17,-42}};  // 按照上东下西 左北右南 存进数组
	int B[5][3]={0};
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<A[i][j]<<' ';
			B[i][j]=A[i][j];
		}
		cout<<endl;
	}
	
	for(int i=4;i>0;i--){
//		cout<< max3(A[i][0],A[i][1],A[i][2])<< endl;
		int max_ = max3(B[i][0],B[i][1],B[i][2]);
		for(int j =0;j<3;j++){
			B[i-1][j] = B[i-1][j]+max_;
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<B[i][j]<<' ';
		}
		cout<<endl;
	}
	//从北门出去
	int east = max3(B[0][0],B[0][1],B[0][2]);
	if(B[2][0] > east && B[2][0] > B[2][2]){
		cout<<"从西门进，从北门出"<< "所以分值总和为："<< B[2][0];
	}else if(B[2][2] > east){
		cout<<"从西门进，从南门出"<< "所以分值总和为："<< B[2][2];
	}else{
		cout<<"从西门进，从东门出"<< "所以分值总和为："<< east;
	}
	return 0;
}
