#include "Subject.h"
#include "Observer.h"

void Subject::attach(Observer* ob) {
    observers.push_back(ob);
}

void Subject::detach(Observer* ob) {
    observers.remove(ob);
}

void Subject::notify() {
	// TODO - implement Subject::notify
//	throw "Not yet implemented";
    for(auto o: observers) {
        o->update(this);
    }
}
