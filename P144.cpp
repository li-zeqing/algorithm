#include <stdio.h>



int main(){
	//计算2 + 22 + 222 + ... + 2222....22222 n项的和
	int t[10] = {0};
	int A[10] = {0};
	int n = 5;
	int i , k ;
	t[1] = 2*n;
	for(i= 1,k = n-1; i <= n ; i++,k--){
		A[i] = t[i]%10;
		t[i+1] = t[i]/10 + 2*k;
//		printf("%d",A[i]);
	};
//	printf("\n");
	//打印
	for (int j = n; j>0;j--){
		printf("%d",A[j]);
	};
	printf("\n");
	
	
	//
	int B[6] = {5,7,4,8,9,1};
	for(int a = 6; a>0; a-- ){
		int g = a%6;
	for(int j = 0; j<=5;j++){
		printf("%d",B[(g++)%6]);
	}
	printf("\n");
	}


}
