#include <iostream>


class A
{
public:
	A(void) {};
	A(const A&) {std::cout << "A copy constructor" << std::endl;}
	void print(void) const {std::cout << "body" << std::endl;}
};


int main()
{
	A a, b, c;
	auto f1 = [a, &b, &c](int& n)->int
		{
			a.print();
			return ++n;
		};
	int pdata[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	int n1 = 1, n2 = 2, n3 = 3;
	auto f2 = [n1, &n2, &n3](){
		std::cout << n1 << " " << n2 << " " << n3 << std::endl;
	};
	n1 = 10, n2 = 20, n3 = 30;
	f2();

	auto f3 = [=]() {
		std::cout << ++ n1 << std::endl;
		std::cout << ++ n2 << std::endl;
		std::cout << ++ n3 << std::endl;
	};	
	f3();

	
	
	return 0;
}
