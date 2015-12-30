#include <string>
#include <stdexcept>
#include <iostream>

void func(int id)
{
	if (id == 0)
		throw std::invalid_argument("id");
}

int main(int argc, char** argv)
{
	try {
		func(0);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
