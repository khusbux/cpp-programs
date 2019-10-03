#include<iostream>
using namespace std;
class anjali
{
	int x,y;
	public:
	anjali(int a,int b)
	{
		x=a;
		y=b;
		cout<<"i am constructor:"<<endl;
	}
	anjali(const anjali&obj)
	{
		x=obj.x;
		y=obj.y;
		cout<<"i am copy constructor:"<<endl;
	}
	void display()
	{
		cout<<"values:"<<x<<"\n"<<y;
	}
};
int main()
{
	anjali obj(03,28);
	anjali obj2(obj);
	obj.display();
	obj2.display();
	return 0;
}
