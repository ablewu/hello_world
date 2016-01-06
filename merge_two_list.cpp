#include <iostream>
#include <list>
#include <set>
#include <thread>
#include <chrono>
#include <iterator>				// std::begin std::end

namespace {
	std::list<int> _seq_1 = {1, 3, 5, 7};
	std::list<int> _seq_2 = {2, 4, 6, 7, 8};	
	std::set<int> _res_set;
}

void operate(void)
{
	auto p = std::begin(_res_set);
	while (p != std::end(_res_set)) {
		std::this_thread::sleep_for(std::chrono::microseconds(20));
		std::cout << *p << " ";
		p = std::next(p);
	}
	std::cout << std::endl;
}

int main()
{
	for (auto i : _seq_1)
		_res_set.insert(i);
	for (auto j : _seq_2)
		_res_set.insert(j);

	std::thread t(operate);
	t.join();
	
	return 0;
}
