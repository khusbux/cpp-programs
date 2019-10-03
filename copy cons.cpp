#include<iostream>
using namespace std;
class example
{
	int a,b;
	public:
example(int x,int y)
{
a=x;
b=y;
	cout<<"i m constructor:";
}
example(const example&obj)
{
	a=obj.a;
	b=obj.b;
	cout<<"i m copy constructor:";
	
}		

void display()
{
	cout<<"\nvalues:"<<a<<b;
}
};
int main()
{
	example obj(36,78);
    example	obj2=obj;
    obj.display();
    obj2.display();
return 0;
}
