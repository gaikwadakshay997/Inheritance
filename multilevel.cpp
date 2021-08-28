#include<iostream>

using namespace std;
class base
{

	public:
	base()
	{
		cout<<"\n base constr";
		
	}
	
};

class child : public base
{

	public:
	child()
	{
		cout<<"\n child constr";
	}
	
};

class child2 : public child
{
	public:
	child2()
	{
		cout<<"\n child2 constr";
	}
	
};

int main()
{

	child2 c;
}
	
