#include <utility>
#include <iostream>

int i = 101, j = 101;

int foo() {return i;}
int&& bar() {return std::move(i);}
void set(int&& k) {k = 102;}

int main()
{
	foo();
	std::cout << i << std::endl;	
	//set(bar());
	//std::cout << i << std::endl;

	int s = bar();
	std::cout << "new: " << &s << std::endl;
	std::cout << "old: " << &i << std::endl;

	int&& g = bar();
	g = 500;
	std::cout << "new: " << &g << std::endl;
	std::cout << "old: " << i << std::endl;

	return 0;
}
