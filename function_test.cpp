#include <functional>
#include <iostream>

std::function<int(int)> func;

int global_function(int a)
{
	return a;
}

auto lambda_function = [](int a) {return a;};

static int static_function(int a)
{
	return a;
}

class A
{
public:
	static int member_function(int a)
	{
		return a;
	}
};

int main()
{
	func = global_function;
	std::cout << "global function: " << func(1) << std::endl;

	func = lambda_function;
	std::cout << "lambda function: " << func(2) << std::endl;

	func = static_function;
	std::cout << "static function: " << func(3) << std::endl;

	func = A::member_function;
	std::cout << "member function: " << func(4) << std::endl;
	return 0;
}
	
