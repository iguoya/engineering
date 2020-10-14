#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include "Subject.h"
#include <string>

class ConcreteSubject : public Subject {

public:
	std::string state;

	std::string getState();

	void setState(std::string state);

};

#endif
