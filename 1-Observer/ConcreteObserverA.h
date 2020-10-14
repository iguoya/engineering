#ifndef CONCRETEOBSERVERA_H
#define CONCRETEOBSERVERA_H

#include "Observer.h"

class ConcreteObserverA : public Observer {


public:
	void update(std::string st);

	void update(Subject* sj);

};

#endif
