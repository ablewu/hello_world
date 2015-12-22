#include <iostream>
#include <functional>

class View
{
public:
	void Coor(int x, int y)
	{
		std::cout << "X: " << x + 10 << "  Y: " << y + 10 << std::endl;
	}
};

std::function<void(View*, int, int)> pfnViewCoor;

int main()
{
	View* pView = new View;
	View* pView2 = new View;
	std::cout << &pfnViewCoor << std::endl;	
	pfnViewCoor = &View::Coor;
	std::cout << &pfnViewCoor << std::endl;
	pfnViewCoor(pView2, 10, 10);

	delete pView;
	return 0;
}
