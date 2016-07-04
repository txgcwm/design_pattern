#ifndef __SUBJECT_H__
#define __SUBJECT_H__



class Observer;

class Subject
{
public:
	// virtual ~Subject() = 0;

	virtual void Register(Observer *) = 0;
	
	virtual void UnRegister(Observer *) = 0;

	virtual void Notify() = 0;

};

#endif


