#include <functional>
#include <iostream>
#include <map>
#include <string>

class Base
{
public:
	virtual ~Base() {}
};

class A : public Base
{
public:
	A() {}
	~A() {}

	static Base* Create()
	{
		std::cout << "A run" << std::endl;
		return nullptr;
	}	
};

class B : public Base
{
public:
	B() {}
	~B() {}

	static Base* Create()
	{
		std::cout << "B run" << std::endl;
		return nullptr;
	}
};

typedef std::function<Base*(void)> pfn;

int main()
{
	// reflection manager
	std::map<std::string, pfn> manager;
	
	// register
	manager["A"] = std::bind(&A::Create);
	manager["B"] = std::bind(&B::Create);

	// create
	manager["A"]();
	manager["B"]();
	
	return 0;
}
