#include <functional>
#include <iostream>

void func(int& n1, int& n2, const int& n3)
{
	std::cout << "\nIn function: " << std::endl;
	std::cout << "n1: " << n1 << " n2: " << n2 << " n3: " << n3 << std::endl;
	++ n1;
	++ n2;
}

int main()
{
	int n1 = 1, n2 = 2, n3 = 3;

	auto a = std::bind(func, n1, std::ref(n2), std::cref(n3));
	n1 = 10;
	n2 = 11;
	n3 = 12;
	std::cout << "befor function: " << std::endl;
	std::cout << "n1: " << n1 << " n2: " << n2 << " n3: " << n3 << std::endl;
	//func(n1, n2, n3);
	a();
	std::cout << "\nend function: " << std::endl;
	std::cout << "n1: " << n1 << " n2: " << n2 << " n3: " << n3 << std::endl;
	
	return 0;
}
