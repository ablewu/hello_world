#include <iostream>
#include <memory>

struct Foo
{
	Foo()     {std::cout << "Foo::Foo\n";}
	~Foo()    {std::cout << "Foo::~Foo\n";}
	void bar() {std::cout << "Foo::bar\n";}
};

void f(const Foo &)
{
	std::cout << "f(const Foo&)\n";
}

int main()
{
	std::unique_ptr<Foo> p1(new Foo);
	if (p1)
		p1->bar();
	{
		std::unique_ptr<Foo> p2(std::move(p1));
		
	}
	return 0;
}
