#include<iostream>
using namespace std;
class example
{
	public:
		int a,b;
		example()
		
		{
		a=19;
		b=27;
		cout<<"im constructor\n:";
		}
		void display()
		{
			cout<<"values:"<<a<<"\t"<<b;
		}
};
int main()
{
	example object;
	object.display();
	return 0;
}

