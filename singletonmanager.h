#include <memory>

class SingletonManager
{
public:
	virtual ~SingletonManager(void);

	static std::shared_ptr<SingletonManager> GetInstance(void);
	static std::shared_ptr<SingletonManager> m_shared_ptr;

	void print(void);
	
public:
	SingletonManager(void) {}
};
