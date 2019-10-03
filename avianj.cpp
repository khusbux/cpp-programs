#include<iostream>
using namespace std;
class anjali
{
	public:
	int avi,anj;
	anjali(int x, int y)
	{
		avi=x;
		anj=y;
	}
	void display()
	{
		cout<<"your password:\n0";
		cout<<avi<<anj;
	}
};
int main()
{
	anjali p(03,28);
	p.display();
	return 0;
}
