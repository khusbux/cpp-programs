#include<iostream>
using namespace std;
class example
{
public:
	int a,b;
	example(int x,int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
	cout<<"values:"<<a<<endl<<b<<endl;
}
	
};
int main()
{
	example object(18,45);
	object.display();
	return 0;
}
