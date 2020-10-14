#include "ConcreteSubject.h"

std::string ConcreteSubject::getState() {
	return this->state;
}

void ConcreteSubject::setState(std::string state) {
	// TODO - implement ConcreteSubject::setState
//	throw "Not yet implemented";
    this->state = state;
}
