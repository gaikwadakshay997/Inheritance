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

class base2
{

	public:
	base2()
	{
		cout<<"\n base 2 constr";
	}
	
};

class child: public base,base2
{

	public:
	
	child()
	{
		cout<<"\n child constr";
	}
	
};


int main()
{

child c;
}

	
