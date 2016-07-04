#ifndef __CONCRETESUBJECT_H__
#define __CONCRETESUBJECT_H__

#include <list>

#include "Subject.h"
#include "Observer.h"

using namespace std;



class ConcreteSubject : public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject();

	void Register(Observer *o);
	
	void UnRegister(Observer *o);

	void Notify();

private:
	list<Observer *> m_observers;
	
};

#endif