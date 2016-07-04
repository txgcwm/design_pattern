#ifndef __CONCRETEOBSERVER_H__
#define __CONCRETEOBSERVER_H__

#include <string>

#include "Observer.h"



using namespace std;

class ConcreteObserver: public Observer
{
public:
	ConcreteObserver(std::string name);
	~ConcreteObserver();

	void Update();

private:
	std::string m_name;
};

#endif