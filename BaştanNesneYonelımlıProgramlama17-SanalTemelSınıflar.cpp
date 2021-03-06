#include <iostream>

using namespace std;

class a
{
	public:
		
		int i;
};

class b : virtual public a
{
	public:
		
		int j;
};

class c : virtual public a
{
	public:
		
		int k;
};

class d : public b, public c
{
	public:
		
		int carpma()
		{
			return i*j*k;
		}
};

int main ()
{
	d ob;
	
	ob.i=24;
	
	ob.j=5;
	
	ob.k=20;
	
	cout<<"carpimlarin sonucu:"<<ob.carpma()<<endl;
	
	return 0;
}
