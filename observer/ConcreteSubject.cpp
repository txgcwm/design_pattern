#include "ConcreteSubject.h"



ConcreteSubject::ConcreteSubject()
{

}

ConcreteSubject::~ConcreteSubject()
{

}

void ConcreteSubject::Register(Observer *o)
{
	m_observers.push_back(o);

	return;
}

void ConcreteSubject::UnRegister(Observer *o) 
{
	m_observers.remove(o);

	return;
}

void ConcreteSubject::Notify()
{
	for(list<Observer *>::iterator it = m_observers.begin(); it != m_observers.end(); ++it) {
		Observer *obj = *it;

		obj->Update();
	}

	return;
}