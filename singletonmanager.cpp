#include "singletonmanager.h"
#include <iostream>

std::shared_ptr<SingletonManager> SingletonManager::m_shared_ptr;

SingletonManager::~SingletonManager()
{
	std::cout << "~singleton\n" << std::cout;
}

std::shared_ptr<SingletonManager> SingletonManager::GetInstance()
{
	if (m_shared_ptr == nullptr) {
		m_shared_ptr = std::make_shared<SingletonManager>();
		std::cout << "make shared, use count: " << m_shared_ptr.use_count() << std::endl;
	}
	return m_shared_ptr;
}

void SingletonManager::print()
{
	std::cout << "print" << std::endl;
}
