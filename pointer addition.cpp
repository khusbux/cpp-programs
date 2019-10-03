#include<iostream>
using namespace std;
int main()
{
	int *p;
	int x;
	p=&x;
	x=50;
	*p=*p+20;
	cout<<*p;
	cout<<p;
	p--;
	cout<<"\n";
	cout<<p;
	return 0;
}
