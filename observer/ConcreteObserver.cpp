#include <string.h>
#include <stdio.h>

#include "ConcreteObserver.h"



ConcreteObserver::ConcreteObserver(std::string name)
: m_name(name)
{

}
	
ConcreteObserver::~ConcreteObserver()
{

}

void ConcreteObserver::Update()
{
	printf("%s excute update\n", m_name.c_str());

	return;
}


