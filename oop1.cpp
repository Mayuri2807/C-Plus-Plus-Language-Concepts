#include<iostream>
using namespace std;

class demo
{
public:
	int no1;
	int no2;

	demo()
	{
		cout<<"inside the constructor\n";
		no1=11;
		no2=21;
	}
	~demo()
	{
		cout<<"inside the destructor\n";
	}
	void fun()
	{
		cout<<"inside fun of demo class\n";
	}
};
int main()
{
	cout<<"inside main\n";
	demo obj1;
	cout<<"size of object is:"<<sizeof(obj1)<<"\n";
	cout<<"value of no1:"<<obj1.no1<<"\n";
	cout<<"value of no2:"<<obj1.no2<<"\n";
	obj1.fun();

	return 0;


}