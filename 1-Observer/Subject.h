#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>
#include <string>

using namespace std;

class Observer;

class Subject {

protected:
	list<Observer*> observers;

public:

	void notify();

	void attach(Observer* ob);

	void detach(Observer* ob);

	virtual std::string getState() = 0;

	virtual void setState(std::string state) = 0;


};

#endif
