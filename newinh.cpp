#include<iostream>

using namespace std;

class base
{
	int i,j;
	public:
	
	int getI()
	{
		return i;
	}
	
	int getJ()
	{
		return j;
	}
	void setI(int pi)
	{	i = pi;
	
	}
	
	void setJ(int pj)
	{
		j = pj;
		
	}
	
};

class child:public base
{

	int k;
	public:
	
	int getK()
	{
		return k;
	}
	
	void setK(int pk)
	{
		k = pk;
		
	}
};

int main()

{
	child c;
	c.setI(10);
	c.setJ(100);
	c.setK(100);
	
	cout<<c.getI();
	cout<<c.getJ();
	cout<<c.getK();
	}
	
	
