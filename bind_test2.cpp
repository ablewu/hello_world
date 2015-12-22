#include <iostream>
#include <functional>

void print(int a, char b, float c)
{
	std::cout << "int: " << a << std::endl;
	std::cout << "char: " << b << std::endl;
	std::cout << "float: " << c << std::endl;
}

int main()
{
	auto fn1 = std::bind(print, 1, 'a', 1.1);
	fn1();

	auto fn2 = std::bind(print,
						 std::placeholders::_1,
						 std::placeholders::_2,
						 std::placeholders::_3);
	fn2(2, 'b', 2.2);

	auto fn3 = std::bind(print,
						 std::placeholders::_2,
						 std::placeholders::_3,
						 std::placeholders::_1);
	fn3(3.3, 3, 'c');

	auto fn4 = std::bind(print,
						 std::placeholders::_3,
						 std::placeholders::_1,
						 std::placeholders::_2);
	fn4('d', 4.4, 4);

	return 0;
}
