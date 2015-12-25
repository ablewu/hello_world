#include <iostream>

class A final{
public:
	virtual void func(void){}
};

class B : public A {
public:
	void func(void) {}
};

int main()
{
	B b;
	return 0;
}
