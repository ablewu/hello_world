#include <algorithm>
#include <string>
#include <iostream>

int main()
{
	std::string s = "wanna go to    space";
	auto end = std::unique(s.begin(), s.end(), [](char l, char r) {
			return std::isspace(l) && std::isspace(r);});
	std::cout << std::string(s.begin(), end) << std::endl;
	return 0;
}
