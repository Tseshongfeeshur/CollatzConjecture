#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
	system("title 冰雹猜想（基于苑哲涵）");
	cout<<"请输入初始正整数（输入小数、负数会自动取正整数值，输入“1”以了解冰雹猜想）：";
	long long input;
	cin>>input;
	input=abs(input);
	if(input==0){
		cout<<"输入不支持。按下任意键终止程序。";
		system("pause >nul");
		return 0;
	}
	if(input==1){
		system("start https://baike.baidu.com/item/%E5%86%B0%E9%9B%B9%E7%8C%9C%E6%83%B3");
	}
	else{
		cout<<"计算过程：";
		while ((input!=1)&&(input!=0)){
			input=abs(input);
			if (input%2==0){
				input/=2;
			}
			else{
				input=input*3+1;
			}
			cout<<input<<"  ";
		}
		cout<<endl<<"计算结束，按下任意键终止程序。";
		system("pause >nul");
	}
	return 0;
}
