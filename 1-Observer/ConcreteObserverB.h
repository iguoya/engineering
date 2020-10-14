#ifndef CONCRETEOBSERVERB_H
#define CONCRETEOBSERVERB_H

#include "Observer.h"

class ConcreteObserverB : public Observer {


public:

	void update(Subject* sj);

};

#endif
