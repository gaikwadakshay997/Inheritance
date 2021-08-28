#include<iostream>
using namespace std;
class a
{
public:
a()
{

	cout<<"\n costr of a";
	
}
};

class b:public a
{
	public:
	b()
	{
		cout<<"\n costr of b";
	}
};

int main()
{

b b1;
}
