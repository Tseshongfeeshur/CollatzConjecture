#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
	system("title �������루����Է�ܺ���");
	cout<<"�������ʼ������������С�����������Զ�ȡ������ֵ�����롰1�����˽�������룩��";
	long long input;
	cin>>input;
	input=abs(input);
	if(input==0){
		cout<<"���벻֧�֡������������ֹ����";
		system("pause >nul");
		return 0;
	}
	if(input==1){
		system("start https://baike.baidu.com/item/%E5%86%B0%E9%9B%B9%E7%8C%9C%E6%83%B3");
	}
	else{
		cout<<"������̣�";
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
		cout<<endl<<"��������������������ֹ����";
		system("pause >nul");
	}
	return 0;
}
