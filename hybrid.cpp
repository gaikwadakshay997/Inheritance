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

class child2: public child
{
	public:
	
	child2()
	{
		 cout<<"\n child2 constr";
		 
		 
	}
	
};



int main()
{
child2 c1;
}


