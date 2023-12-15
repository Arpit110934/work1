//swaping two number using third variable\

#include<iostream>
using namespace std;
int main()
{
	int a = 4;
	int b = 5;
	int c;
	cout<<"value of a is "<<a<<endl;
	cout<<"value of b is "<<b<<endl;
	c = b;
	b = a;
	a = c;
	cout<<"value of a is  "<<a<<endl;
	cout<<"value of b is "<<b<<endl;
	return 0;
}
