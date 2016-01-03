#include <iostream>
#include "singletonmanager.h"

int main()
{
	auto a1 = SingletonManager::GetInstance();
	std::cout << "use_cout: " << a1.use_count() << std::endl;
	auto a2 = SingletonManager::GetInstance();
	std::cout << "use_cout: " << a2.use_count() << std::endl;
	std::cout << std::hex << a1.get() << std::endl;
	std::cout << std::hex << a2.get() << std::endl;
	a1->print();
	a2->print();
	return 0;
}
