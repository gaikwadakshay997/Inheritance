#include<iostream>

using namespace std;

class base
{

	public:
	base()
	{
		cout<<"\n constr of base:";
		
	}
	
};

class child1:public base
{

	public:
	child1()
	{
		cout<<"\n constr of child1";
	}
};

class child2:public base
{

	public:
	child2()
	{
	
		cout<<"\n constr of child2";
	}
};


int main()
{

	child2 c;
	child1 c1;
}
