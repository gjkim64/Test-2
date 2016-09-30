#include <stdio.h>
#include <iostream>

namespace my_variables
{
	int a;
	int b;

	void print()
	{
		printf("%d %d", a, b);
	}
};



void main ()
{
	my_variables::a = 1;
	my_variables::b = 2;

	my_variables::print();

	printf("hello world");

	using namespace std;

	cout << "This is c++ style" << endl;
}
