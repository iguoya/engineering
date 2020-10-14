#include <iostream>
//#include "Subject.h"
//#include "Observer.h"
#include "ConcreteSubject.h"
#include "ConcreteObserverA.h"
#include "ConcreteObserverB.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    ConcreteSubject *cs = new ConcreteSubject();
    Observer *oa = new ConcreteObserverA;
    Observer *ob = new ConcreteObserverB;

    cs->attach(oa);
    cs->attach(ob);

    cs->setState("tiger");
    cs->notify();

    cout<<"-------------------------------------------------------------"<<endl;

    cs->setState("snow");
    cs->notify();

    return 0;
}
