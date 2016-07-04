#include "ConcreteObserver.h"
#include "ConcreteSubject.h"



int main(int argc, char **argv)
{
	ConcreteObserver observer1("dafsfdf");
	ConcreteObserver observer2("78778");
	ConcreteSubject subject;

	subject.Register(&observer1);
	subject.Register(&observer2);

	subject.Notify();

	subject.UnRegister(&observer1);
	subject.UnRegister(&observer2);

	return 0;
}


