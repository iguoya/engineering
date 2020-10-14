#include "ConcreteObserverA.h"
#include "Subject.h"

void ConcreteObserverA::update(Subject* sj) {
	// TODO - implement ConcreteObserverA::update
//	throw "Not yet implemented";
    cout<<"----------我要煮着吃-------------"<<endl;
    cout<<sj->getState()<<endl;
    cout<<"-----------------------"<<endl;
}
