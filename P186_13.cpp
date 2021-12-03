#include<iostream>

using namespace std;

/**
* P186(13)

*/

int max5(int x,int y,int j,int k,int z){
	int temp =x;
	if(y>temp)
		temp=y;
	if(j>temp)
		temp=j;
	if(k>temp)
		temp=k;
	if(z>temp)
		temp =z;
	return temp;
}

int max_down5(int a[][7], int i, int j, int n, int m){ // ����a���鼫������Ӧ���к�����n,m ������ĳֵa����Ӧ������±�i��j,
	int left = j-0; //������˵ľ���
	int right = m-j; // �����Ҷ˵ľ���
//	cout<<"<<<<"<<"left"<<left<<"++++"<<"right"<<right<<">>>>";
	if(left>=2&&right>=2){  //���Խ������5���������
		return max5(a[i+1][j-2],a[i+1][j-1],a[i+1][j],a[i+1][j+1],a[i+1][j+2]);
	}
	else{   // ������ĸ�������5�������
		if(left>2)
			left = 2;
		if(right>2)
			right = 2;
		int T=a[i+1][j-left];
		while(j-left<j+right){
			left = left - 1;
			if(a[i+1][j-left]>T)
				T = a[i+1][j-left];
		}
		return T;
	}
		
}

int main(){
	int A[6][7]={{16,4,3,12,6,0,3},{4,-5,6,7,0,0,2},{6,0,-1,-2,3,6,8},{5,3,4,0,0,-2,7},{-1,7,4,0,7,-5,6},{0,-1,3,4,12,4,2}};
	for(int i=0;i<6;i=i+1){
		for(int j=0;j<7;j=j+1){
			cout<<A[i][j]<<' ';
		}
		cout<<endl;
	}
//	cout << max5(10,2,15,4,5)<<endl;
	// ���д���
	int data[7]={0};
	for(int e = 4;e>=0;e=e-1){
		for(int r = 0;r<7;r=r+1){
//			cout<<max_down5(A,e,r,5,6)<<"  ";
			A[e][r] = A[e][r]+max_down5(A,e,r,5,6);
			cout << A[e][r] << "^";
		}
		cout<<endl;
	}
	int max_=0;
	for(int j=0;j<7;j++){
		if(A[0][j]>max_)
			max_ = A[0][j];
	}
	cout<<"���ֵΪ��"<< max_;
	return 0;
}
