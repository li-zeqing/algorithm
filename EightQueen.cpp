#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
int n,i;//n记录是多少个皇后的问题，i记录的是第几个皇后
int a[101];//数组下标表示行号，数组值表示列号，例如a[1] = 2 表示皇后的位置为(1,2)
int sum;//记录有多少种解法
bool judge(int a[],int N) //检测当前位置的皇后是否是合法的
{
    for(int j=1;j<N;j++)//将第N个皇后的位置，依次与之前的皇后进行合法性检查
    {
    	//如果在同一行，同一列，或者是正斜线，反斜线，为假
        if(abs(a[j]-a[N])==abs(j-N) || a[j]==a[N])
            return false;
    }
    return true;
}
void print_ans(){//打印输出每一种解的方案。
    for(int j=1;j<=n;j++)
        cout<<"<"<<j<<","<<a[j]<<">"<<"   ";
    cout<<endl;
}

//使用该函数来实现递归检测八皇后合法性
void solve(int i){//从第i个皇后开始检测
    if(i>n){//递归出口，每出现一次，意味着得到了一种解
        sum++;
        print_ans();//输出答案；
        return ;
    }
    for(int j=1;j<=n;j++){//每一行8列都尝试走一遍
        a[i]=j;
        if(judge(a,i)){//判断当前皇后是否满足要求，满足则递归至下一层
            solve(i+1);
        }
    }
}
int main(){
	cout<<"请输入n皇后问题的n值：";
    cin>>n;
    sum=0;
    solve(1);//
    cout<<"一共有多少组解："<<sum;
}

