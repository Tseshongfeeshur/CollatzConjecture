#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
	system("title 冰雹猜想"); //更改窗口标题
	cout<<"请输入初始正整数（输入小数、负数会自动取正整数值，输入“1”以了解冰雹猜想）："; //输出提示
	long long input; //定义长整型变量
	cin>>input; //输入变量
	input=abs(input); //取绝对值
	if(input==0){ //判断输入字母或符号或0
		cout<<"输入不支持。按下任意键终止程序。";
		system("pause >nul"); //暂停程序
		return 0; //退出
	}
	if(input==1){ //判断输入1
		system("start https://baike.baidu.com/item/%E5%86%B0%E9%9B%B9%E7%8C%9C%E6%83%B3"); //调用Windows系统函数打开网页
	}
	else{ //主程序
		cout<<"计算过程："; //输出提示
		while ((input!=1)&&(input!=0)){ //设置终止循环条件
			input=abs(input); //每次取绝对值，防止范围溢出带来的负数
			if (input%2==0){ //偶数判断
				input/=2; //偶数除以2
			}
			else{ //奇数判断
				input=input*3+1; //奇数乘3加1
			}
			cout<<input<<"  "; //输出间隔
		}
		cout<<endl<<"计算结束，按下任意键终止程序。"; //输出提示
		system("pause >nul"); //暂停程序
	}
	return 0; //返回main函数的值
}
