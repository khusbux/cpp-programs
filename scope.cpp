#include<iostream>
using namespace std;
	int num= 20;
int main()
{
	int num=29;
	cout<<"local"<<num<<endl;
	cout<<"global"<<::num<<endl;
	cout<<"global+local"<<::num+num;
	return 0;
}

