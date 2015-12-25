#include <iostream>
#include <functional>

class A
{
public:
	A(void)
	{
		std::cout << "constructor" << std::endl;
	}
	A(const A& a)
	{
		std::cout << "copy constructor" << std::endl;		
	}
	~A(void)
	{
		std::cout << "destructor" << std::endl;
	}
};

void func(A& a)
{
	
}

int main()
{
	A a;
	auto f = std::bind(func, std::ref(a));
	f();
	return 0;
}
