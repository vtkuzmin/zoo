#pragma once
#include <iostream>

using namespace std;

class Felid {
public:
	virtual ~Felid() {}
	virtual void meow() = 0;
};

class Cat : public Felid {
	void meow() { cout << "Cat meow!" << endl; }
	~Cat() { cout << "Cat destructor" << endl; }
};

class Tiger : public Felid {
	void meow() { cout << "Tiger meow" << endl; }
	~Tiger() { cout << "Tiger destructor" << endl; }
};